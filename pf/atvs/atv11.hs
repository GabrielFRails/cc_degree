import Stack

-- 1
searchDfs :: Int -> Stack [Int] -> [Int]
searchDfs n stack
    | isEmpty stack = []
    | otherwise     = let (current, stack') = pop stack in
        if isSolution n current
        then current
        else searchDfs n (push (extendSolution n current) stack')
    where
        extendSolution n sol = [new | new <- [1..n], safe new sol]
        safe new sol = all (\i -> new /= sol !! i && abs (new - sol !! i) /= i + 1) [0..length sol - 1]
        isSolution n sol = length sol == n

-- 2
type SolNq = [Int]

-- 3
printBoard :: SolNq -> IO ()
printBoard sol = do
    let n = length sol
    putStrLn $ unlines [row i | i <- [1..n]]
  where
    row i = [if sol !! (j-1) == i then 'Q' else '.' | j <- [1..n]]

-- 4
solNq :: Int -> [SolNq]
solNq n = searchDfs n (push [] emptyStack)
    where
        searchDfs n stack
            | isEmpty stack = []
            | otherwise     = let (current, stack') = pop stack in
                if isSolution n current
                then current : searchDfs n (push (extendSolution n current) stack')
                else searchDfs n (push (extendSolution n current) stack')
        extendSolution n sol = [sol ++ [new] | new <- [1..n], safe new sol]
        safe new sol = all (\i -> new /= sol !! i && abs (new - sol !! i) /= length sol + 1) [0..length sol - 1]
        isSolution n sol = length sol == n
        emptyStack = empty -- Assuming 'empty' from Stack module