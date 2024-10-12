-- Gabriel Freitas | Matrícula: 202003564

-- ex01
intersperse :: a -> [a] -> [a]
intersperse e [] = []
intersperse e (x : xs)
    | null xs = [x]
    | otherwise = [x] ++ [e] ++ intersperse e xs

-- ex02
delete :: (Eq a) => a -> [a] -> [a]
delete n [a]
    | a == n = []
    | otherwise = [a]

delete n [] = []
delete n (x : xs)
    | null xs = [x]
    | n == x = xs
    | otherwise = x : delete n xs

permutations :: (Eq a) => [a] -> [[a]]
permutations [] = [[]]
-- x : ys == [x] ++ ys
permutations xs = [x : ys | x <- xs, ys <- permutations (delete x xs)]

-- ex03
merge :: (Ord a) => [a] -> [a] -> [a]
merge [] ys = ys
merge xs [] = xs
merge (x : xs) (y : ys)
    | x <= y = x : merge xs (y : ys)
    | otherwise = y : merge (x : xs) ys

splitHalf :: [a] -> ([a], [a])
splitHalf list = splitAt ((length list + 1) `div` 2) list

msort :: (Ord a) => [a] -> [a]
msort [] = []
msort [x] = [x]
msort a = merge (msort fHalf) (msort sHalf)
    where
        (fHalf, sHalf) = splitHalf a
