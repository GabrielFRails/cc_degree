-- exs basicos

min3:: Int -> Int-> Int -> Int
min3 a b c =
    if a < b && b < c then a
    else if b < c then b
    else c

tresiguais :: Int -> Int-> Int -> Bool
tresiguais a b c = if a == b && b == c then True else False

-- exs lista 1
-- ex 2
checkTriangulo :: Int -> Int-> Int -> Bool
checkTriangulo a b c =
    if a < b+c && b < c+a && c < a+b then False
    else True

-- ex4
-- metadeLista :: [Int] -> 
metadeLista lista = [take size lista, drop size lista]
    where
        l = length lista
        size = (l `div` 2)

-- 5a
myLast lista = take 1 (reverse lista)
myLast2 lista = drop (l-1) lista
    where l = length lista

-- 5b

-- 6a
fatorial a = product [1..a]
binomio n k = fatorial n / (fatorial k * fatorial (n-k))

-- 6b
binSimplificado n k = product [k+1 .. n] / fatorial (n-k)

checkBin n k = if a == b then True else False
    where 
        a = binomio n k
        b = binSimplificado n k

-- 7a
max3 a b c =
    if a > b then
        if a > c then a
        else c
    else if b > c then b
    else c

min3 a b c =
    if a < b then
            if a < c then a
            else c
        else if b < c then b
        else c    

-- 8a

-- 11 safe tail