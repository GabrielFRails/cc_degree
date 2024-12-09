
data Arv a = Vazia | No a (Arv a) (Arv a)

listar :: Arv a -> [a]
listar Vazia = []
listar (No x esq dir) = listar esq ++ [x] ++ listar dir

listarAcc :: Arv a -> [a] -> [a]
listarAcc Vazia xs = xs
listasAcc Vazia [] = []

-- listarAcc t xs = listar t ++ xs
{-
listarAcc (No x esq dir) xs =
listar (No x esq dir) ++ xs =
listar esq ++ [x] ++ listar dir ++ xs =
listar esq ++ ([x] ++ listar dir) ++ xs =
listar esq ++ ([x] ++ listarAcc dir xs) =
listar esq ++ (x:listarAcc dir xs)
listarAcc esq (x:listarAcc dir xs)
-}

listarAcc (No x esq dir) xs = listarAcc esq (x:listarAcc dir xs)

-- ex02
-- a
soma :: Num a => Arv a -> a
soma arv = sum (listarAcc arv [])

-- b
foldArv :: (a -> b -> b -> b) -> b -> Arv a -> b
foldArv f v Vazia = v
foldArv f v (No x esq dir) = f x (foldArv f v esq) (foldArv f v dir)

-- c
soma3 :: Num a => a -> a -> a -> a
soma3 x y z = x + y + z

{-
Passo base: árvore Vazia

soma Vazia =
sum listarAcc Vazia [] =
sum [] =
0

foldArv soma3 0 Vazia =
0

Passo indutivo: árvore não vazia com subárvores esquerda e direita, que podem ser vazias ou não
Assumindo que a hipótese é verdadeira para uma árvore (No x esq dir)

soma (No x esq dir) =
sum (listarAcc (No x esq dir) []) =
sum (listarAcc esq (x: (listarAcc dir []))) =
sum (listarAcc esq []) + x + sum (listarAcc dir []) =
somaEsq + x + somaDir

onde somaEsq é a soma dos valores da subárvore esquerda e somaDir da subárvore direita
______________________________________________________

foldArv soma3 0 (No x esq dir) =
soma3 x (foldArv soma3 0 esq) (foldArv soma3 0 dir) =
x + (foldArv soma3 0 esq) (foldArv soma3 0 dir) =
x + somaEsq + somaDir

onde somaEsq é a soma dos valores da subárvore esquerda e somaDir da subárvore direita

Portanto, para qualquer árvore numérica t, a hipótese é verdadeira

-}


-- ex 3 a
map f (xs++ys) = map f xs ++ map f ys

map f ([] ++ ys) = map f [] ++ map f ys = [] ++ map f ys = map f ys
map f ([] ++ ys) = map f ys

-- passo indutivo:
map f ((x:xs) ++ ys)
= map f (x : (xs ++ ys))   -- pela definição de +
= f x : map f (xs ++ ys)   -- pela definição de map
= f x : (map f xs ++ map f ys)   -- pela hipótese indutiva
= (f x : map f xs) ++ map f ys   -- pela associatividade de ++
= map f (x:xs) ++ map f ys       -- pela definição de map

-- ex 3b
map f (reverse (x:xs))
= map f (reverse xs ++ [x])  -- pela definição de reverse
= map f (reverse xs) ++ map f [x]  -- pela propriedade de map sobre concatenação
= reverse (map f xs) ++ map f [x]  -- pela hipótese indutiva
= reverse (map f xs) ++ [f x]  -- simplificando map f [x]

reverse (map f (x:xs))
= reverse (f x : map f xs)  -- pela definição de map
= reverse (map f xs) ++ [f x]  -- pela propriedade de reverse sobre cons

map f (reverse (x:xs)) = reverse (map f (x:xs))
