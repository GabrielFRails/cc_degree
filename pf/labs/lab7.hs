-- ex 01 definir recursivamente zipWith
zipWithRec :: (a -> b -> c) -> [a] -> [b] -> [c]
zipWithRec _ [] _ = []
zipWithRec _ _ [] = []
zipWithRec f (x:xs) (y:ys) = f x y : zipWithRec f xs ys

-- ex 02
(+++) :: [a] -> [a] -> [a]
(+++) l1 l2 = foldr (:) l2 l1

concat' :: [[a]] -> [a]
concat' = foldr (++) []

reverse' :: [a] -> [a]
reverse' = foldr (\x acc -> acc ++ [x]) []