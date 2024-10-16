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

-- fazer (add i i) j vezes
mult i j = add (mult i (pred j)) i

{-
	mult i j = add (mult i (pred j)) i = add (mult i (j-1)) i = add (add (mult i j-2) i) i
	= add (add (add (mult i j-3) i) i) i, vamos supor que j-3 = 1
	= add (add (add (mult i i) i) i) i
	= add (add (add i i) i) i = i*4
-}

exp' i 0 = 1
exp' i 1 = i
exp' i j = mult (exp' i (pred j)) i

-- a próxima função será divisão

-- b)
foldi :: (a -> a) -> a -> Integer -> a
foldi f q 0 = q
foldi f q i = f (foldi f q (pred i))

add' :: Integer -> Integer -> Integer
add' i j = foldi (+1) i j

mult' :: Integer -> Integer -> Integer
mult' i j = foldi (+i) 0 j

exp'' :: Integer -> Integer -> Integer
exp'' i j = foldi (*i) i (j-1)

-- c)
-- n primeiro numeros de fibofibonacci
fibonacci :: Integer -> Integer
fibonacci n = fst (foldi step (0, 1) n)
  where
    step (a, b) = (b, a + b)

-- ex 3
scanl' f z [] = [z]
scanl' f z list = scanl' f z (init list) ++ [foldl f z list]