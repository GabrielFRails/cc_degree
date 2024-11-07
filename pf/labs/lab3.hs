somaquadrados = sum [x^2 | x<-[1..100]]

aproxpi :: Int -> Double
aproxpi n = sum [(-1) ^ x / (2 * fromIntegral x + 1) | x <- [0..n-1]] * 4

aproxqpi :: Int -> Double
aproxqpi k = sum [(-1) ^ x / fromIntegral ((x+1) ^ 2) | x <- [0..k-1]] * 12


divprop :: Int -> [Int]
divprop n = [x | x<-[1..n-1], n `mod` x == 0]

perfeitos :: Int -> [Int]
perfeitos n = [x | x<-[1..n], x == sum (divprop x)]

dobroLuhn :: Int -> Int
dobroLuhn n
    | n*2 > 9 = n*2 - 9
    | otherwise = n*2

luhn :: Int -> Int -> Int -> Int -> Bool
luhn a b c d = lsum `mod` 10 == 0
    where lsum = b + d + (dobroLuhn a) + (dobroLuhn c)
