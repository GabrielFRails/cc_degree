-- Gabriel Freitas | Matrícula: 202003564

fatorial a = product [1..a]
binomio n k = fatorial n `div` (fatorial k * fatorial (n-k))
binSimplificado n k = product [k+1 .. n] `div` fatorial (n-k)

trianguloPascal :: Int -> [[Int]]
trianguloPascal n = [ [binSimplificado i k | k <- [0..i]] | i <- [0..(n-1)] ]

forte :: String -> Bool
forte senha = tam && temMaiuscula && temMinuscula && temNumero
    where
        tam = length senha >= 8
        temMaiuscula = any (\c -> c >= 'A' && c <= 'Z') senha
        temMinuscula = any (\c -> c >= 'a' && c <= 'z') senha
        temNumero = any (\c -> c >= '0' && c <= '9') senha
