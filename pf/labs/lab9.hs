data Expr = Val Int | Soma Expr Expr

-- ex 03 a)
folde :: (Int -> a) -> (a -> a -> a) -> Expr -> a
folde f g (Val e) = f e
folde f g (Soma e1 e2) = g (folde f g e1) (folde f g e2)

-- ex 03 b)
valor :: Expr -> Int
valor = folde id (+)

tamanho :: Expr -> Int
tamanho = folde (const 1) (+)

-- ex 04
-- a)
data Graph a = Graph [(a, [a])] deriving (Show, Eq)

-- b)
grafo :: Graph Int
grafo = Graph
    [(1, [2, 4]), 
    (2, [3, 5]),
    (3, [2, 6]),
    (4, [1]),
    (5, [6]),
    (6, [3])
    ]

main :: IO ()
main = do
  let test1 = valor (Soma (Val 2) (Soma (Val 2) (Val 10)))
  let test2 = tamanho (Soma (Val 2) (Soma (Val 2) (Val 10)))
  putStrLn $ "valor (Soma (Val 2) (Soma (Val 2) (Val 10))): " ++ show test1
  putStrLn $ "tamanho (Soma (Val 2) (Soma (Val 2) (Val 10))): " ++ show test2