anyZero :: (Integer -> Integer) -> Integer -> Bool
anyZero f n = or [r == 0 | r <- results]
    where results = [f x | x <- [0..n] ]

nub' :: Eq a => [a] -> [a]
nub' [] = []
nub' (x:xs)
    | null xs = []
    | otherwise = [x] ++ nub' [y | y <- xs, y /= x]

insert' :: Ord a => a -> [a] -> [a]
insert' e [] = [e]
insert' e (x:xs)
    | e <= x = [e] ++ [x] ++ xs
    | null xs && e > x = [x] ++ [e]
    | otherwise = [x] ++ insert' e xs

isort :: Ord a => [a] -> [a]
isort [] = []
isort (x:xs)
    | null xs = [x]
    | otherwise = insert' x (isort xs)

minimum' :: Ord a => [a] -> a
minimum' (x:xs)
    | null xs = x
    | x <= minimum' xs = x
    | otherwise = minimum' xs

delete' :: Eq a => a -> [a] -> [a]
delete' n [] = []
delete' n [a]
    | n == a = []
    | otherwise = [a]

delete' n (x:xs)
    | null xs = [x]
    | n == x = xs
    | otherwise = [x] ++ delete' n xs

ssort :: Ord a => [a] -> [a]
ssort [] = []
ssort lista = [menor] ++ ssort (delete' menor lista)
    where
        menor = minimum' lista

bits :: Int -> [[Bool]]
bits 0 = [[]]
bits n = [ False : b | b <- bits (n-1) ] ++ [ True : b | b <- bits (n-1) ]