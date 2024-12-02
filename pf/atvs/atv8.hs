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
