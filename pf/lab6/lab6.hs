dec2int :: [Int] -> Int
dec2int l = foldl (\z x -> 10*z + x) 0 l

{- [1,2,3]
func 0 1 = 0*10 + 1 = 1
func (func 0 1) 2 = func 1 2 = 10 * 1 + 2 = 12
func ((func 0 1) 2) 3 = func 12 3 = 12 * 10 + 3 = 123 -}

-- ex 2
maximum' :: Ord a => [a] -> a
maximum' l = foldl1 (\x y -> if x>y then x else y) l

minimum' :: Ord a => [a] -> a
minimum' l = foldl1 (\x y -> if x<y then x else y) l

--ex 2b
foldl1' :: (a -> a -> a) -> [a] -> a
foldl1' func l = foldl func (head l) (tail l)

foldr1' :: (a -> a -> a) -> [a] -> a
foldr1' func l = foldr func (last l) (init l)

-- ex03
(+++) :: [a] -> [a] -> [a]
(+++) l1 l2 = foldr (:) l2 l1

concat' :: [[a]] -> [a]
concat' = foldr (++) []

reverser :: [a] -> [a]
reverser = foldr (\x acc -> acc ++ [x]) []

reversel :: [a] -> [a]
reversel = foldl (\acc x -> x : acc) []
