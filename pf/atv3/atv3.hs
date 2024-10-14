-- Gabriel Freitas - 202003564
-- ex 01
insert :: Ord a => a -> [a] -> [a]
insert x [] = [x]
insert x (y:ys)
  | x <= y    = x : y : ys
  | otherwise = y : insert x ys 

isort :: (Ord a) => [a] -> [a]
isort = foldr insert []

-- ex 02
-- a)

add i 0 = i
add i j = succ (add i (pred j))
{-
	add 1 2 = succ (add 1 (pred 2)) = succ (add 1 1) 
	= succ [succ (add 1 (pred 1))] = succ [succ (add 1 0)] = succ [succ (1)] = succ [2] = 3
-}

mult i 0 = 0
mult i 1 = i

-- fazer (add i 1) j vezes
mult i j = add (mult i (pred j)) i

{-
	mult i j = add (mult i (pred j)) i = add (mult i (j-1)) i = add (add (mult i j-2) i) i
	= add (add (add (mult i j-3) i) i) i, vamos supor que j-3 = 1
	= add (add (add (mult i i) i) i) i
	= add (add (add i i) i) i = i*4
-}