module Main where
import Stack -- stack da aula

-- ex01

-- a
calc :: Stack Float -> String -> Stack Float
calc stk v
  | v == "+" = push (a + b) stk
  | v == "-" = push (a - b) stk
  | v == "*" = push (a * b) stk
  | v == "/" = push (a / b) stk
  | otherwise = push (read v :: Float) stk
  where b = top stk
        a = top (pop stk)

-- b

calcular :: String -> Float
calcular str = top (foldl calc Stack.empty termos)
  where termos = words str

-- c

main :: IO()
main = do
  putStrLn "Escreva uma expressão RPN:"
  expr <- getLine
  putStrLn $ "O resultado da expressão é " ++ show (calcular expr)

-- 2
{-
empty :: Set a
insert :: Ord a => a -> Set a -> Set a
member :: Ord a => a -> Set a -> Bool
-}

data Tree a = Empty | Node a (Tree a) (Tree a) deriving (Show, Eq)

-- Tipo Set usando uma árvore binária de pesquisa
newtype Set a = Set (Tree a) deriving (Show)

-- Conjunto vazio
empty :: Set a
empty = Set Empty

-- Inserção de um elemento na árvore
insert :: Ord a => a -> Set a -> Set a
insert x (Set tree) = Set $ insertTree x tree
    where
        insertTree x Empty = Node x Empty Empty
        insertTree x (Node y left right)
            | x == y    = Node y left right -- Elemento já existe, do nothing
            | x <  y    = Node y (insertTree x left) right
            | otherwise = Node y left (insertTree x right)

-- Verificação de membro
member :: Ord a => a -> Set a -> Bool
member x (Set tree) = memberTree x tree
    where
        memberTree _ Empty = False
        memberTree x (Node y left right)
            | x <  y = memberTree x left
            | x >  y = memberTree x right
            | x == y = True

-- 3
-- union, intersect, difference :: Ord a ⇒ Set a → Set a → Set a

-- Função auxiliar para inserir todos os elementos de uma árvore em outra
insertAll :: Ord a => Tree a -> Set a -> Set a
insertAll Empty set = set
insertAll (Node x left right) set = insertAll right (insertAll left (insert x set))

-- União de dois conjuntos
union :: Ord a => Set a -> Set a -> Set a
union (Set t1) (Set t2) = insertAll t2 (Set t1)

-- func auxiliar
unionTrees :: Ord a => Tree a -> Tree a -> Tree a
unionTrees Empty t = t
unionTrees t Empty = t
unionTrees t1@(Node x1 l1 r1) t2@(Node x2 l2 r2)
    | x1 < x2  = Node x1 (unionTrees l1 t2) r1
    | x1 > x2  = Node x2 l2 (unionTrees t1 r2)
    | otherwise = Node x1 (unionTrees l1 l2) (unionTrees r1 r2)

-- Interseção de dois conjuntos
intersect :: Ord a => Set a -> Set a -> Set a
intersect (Set t1) (Set t2) = Set $ intersectTree t1 t2
    where
        intersectTree Empty _ = Empty
        intersectTree _ Empty = Empty
        intersectTree t1 (Node x left right)
            | member x (Set t1) = Node x (intersectTree t1 left) (intersectTree t1 right)
            | otherwise         = unionTrees (intersectTree t1 left) (intersectTree t1 right)

-- Diferença entre dois conjuntos
difference :: Ord a => Set a -> Set a -> Set a
difference (Set t1) (Set t2) = Set $ differenceTree t1 t2
    where
        differenceTree Empty _ = Empty
        differenceTree (Node x left right) t2
            | member x (Set t2) = unionTrees (differenceTree left t2) (differenceTree right t2)
            | otherwise         = Node x (differenceTree left t2) (differenceTree right t2)
