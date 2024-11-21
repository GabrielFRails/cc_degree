{-antes de usar: ghc --make atv7.hs-}
import Data.Char (ord, chr, isUpper, isLower)

cifraDeCesar :: Char -> Char
cifraDeCesar c
    | isUpper c = chr $ 65 + (ord c - 65 + 33) `mod` 26
    | isLower c = chr $ 97 + (ord c - 97 + 13) `mod` 26
    | otherwise = c

cesar13 :: String -> String
cesar13 = map cifraDeCesar

main :: IO ()
main = interact cesar13

