-- 1
maxOccours :: Int -> Int -> (Int, Int)
maxOccours a b = (max a b, if a == b then 2 else 1)

max3comp a b c = max (max a b) c
min3comp a b c = min (min a b) c

orderTriple :: (Int, Int, Int) -> (Int, Int, Int)
orderTriple (a, b, c) = (min, mid, max)
    where
        min = min3comp a b c
        max = max3comp a b c
        mid = if not (a == max) && not (a == min) then a
            else if not (b == max) && not (b == min) then b
            else c

-- 2
diffs :: Int -> Int -> Int
diffs x y
    | x >= y = x - y
    | x < y = y - x

-- tipo mais geral: integral

{-
3 a) segundo :: [a] -> a sendo a um tipo qualquer
b) trocar (a,b) -> (b,a) sendo a e b de qualquer tipo
c) par :: x -> y -> (x, y) recebe x y e devolve uma tupla contendo somente eles, sendo x e y de qualquer tipo
d) dobro :: Num -> Num
e) metade :: Num -> Num
f) minuscula :: Char -> Bool
g) intervalo :: Num -> Num -> Num -> Bool
h) palindromo :: [Ord] -> [Ord]
i) twice (a -> a) -> a -> a
-}

{-
4 
a:: Int -> Int
f:: b -> [a]
g:: b
-} 

{- 5
(a) Int → (Int → Int) → Int
(b) Char → Bool → Bool
(c) (Char → Char → Int) → Char → Int
(d) Eq a ⇒ a → [a] → Bool
(e) Eq a ⇒ a → [a] → [a]
(f) Ord a ⇒ a → a → a
-}

-- a
dobro :: Int -> Int
dobro a = 2*a
quadruplo :: Int -> (Int -> Int) -> Int
quadruplo a f = (f a) * 2

-- b
ehVogalOuBool :: Char -> Bool -> Bool
ehVogalOuBool c b
    | elem c "aeiouAEIOU" = True
    | otherwise = b

-- c
-- char diff pegar da tallya

-- d
-- exemplo func elem

-- e
retornaDiferentes :: Eq a => a -> [a] -> [a]
retornaDiferentes x l = [y | y<-l, y /= x]

-- f min e max