-- Gabriel Freitas | Matrícula: 202003564

fatorial a = product [1..a]
binomio n k = fatorial n `div` (fatorial k * fatorial (n-k))
binSimplificado n k = product [k+1 .. n] `div` fatorial (n-k)

trianguloPascal :: Int -> [[Int]]
trianguloPascal n = [ [binSimplificado i k | k <- [0..i]] | i <- [0..(n-1)] ]

isSenhaForte :: String -> Bool
isSenhaForte senha = tam && temMaiuscula && temMinuscula && temNumero
    where
        tam = length senha >= 8
        temMaiuscula = any (\c -> c >= 'A' && c <= 'Z') senha
        temMinuscula = any (\c -> c >= 'a' && c <= 'z') senha
        temNumero = any (\c -> c >= '0' && c <= '9') senha

-- ex 3 cifra de césar
let2int :: Char -> Int
let2int c
  | isLower c = ord c - ord 'a'
  | isUpper c = ord c - ord 'A'
  | otherwise = error "Não é uma letra."

int2let :: Int -> Char -> Char
int2let n base
  | isLower base = chr (ord 'a' + n)
  | isUpper base = chr (ord 'A' + n)
  | otherwise = base

shiftChar :: Int -> Char -> Char
shiftChar n c
  | isLower c = int2let ((let2int c + n) `mod` 26) 'a'
  | isUpper c = int2let ((let2int c + n) `mod` 26) 'A'
  | otherwise = c

encode :: Int -> String -> String
encode n xs = [shiftChar n x | x <- xs]

tabela :: [Float]
tabela =
  [ 14.63,
    1.04,
    3.88,
    4.99,
    12.57,
    1.02,
    1.30,
    1.28,
    6.18,
    0.40,
    0.02,
    2.78,
    4.74,
    5.05,
    10.73,
    2.52,
    1.20,
    6.53,
    7.81,
    4.34,
    4.63,
    1.67,
    0.01,
    0.21,
    0.01,
    0.47
  ]

freqs :: String -> [Float]
freqs xs = [percent (count x xs) n | x <- ['a' .. 'z']]
  where
    n = length (filter isAlpha xs)
    count x = length . filter ((== x) . toLower)

percent :: Int -> Int -> Float
percent n m = (fromIntegral n / fromIntegral m) * 100

chisqr :: [Float] -> [Float] -> Float
chisqr os es = sum [((o - e) ^ 2) / e | (o, e) <- zip os es]

rot :: Int -> [a] -> [a]
rot n xs = drop n xs ++ take n xs

crack :: String -> String
crack xs = encode (-factor) xs
  where
    factor = head (indices (minimum chitab) chitab)
    chitab = [chisqr (rot n tabela') tabela | n <- [0 .. 25]]
    tabela' = freqs xs

indices :: (Eq a) => a -> [a] -> [Int]
indices x xs = [i | (x', i) <- zip xs [0 ..], x' == x]
