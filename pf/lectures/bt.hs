-- binaries tree's

data Arv a = No a (Arv a) (Arv a)
    | Vazia

listar :: Arv a -> [a]
listar Vazia = []
listar (No x esq dir) = listar esq ++ [x] ++ listar dir

isOrdenada :: Ord a => Arv a -> Bool
isOrdenada arv = crescente (listar arv)
    where
        crescente xs = and (zipWith (<=) xs (tail xs))

pertence :: Ord a => a -> Arv a -> Bool
pertence x Vazia = False
pertence x (No y esq dir)
    | x == y = True
    | x < y = pertence x esq
    | x > y = pertence x dir

inserir :: Ord a => a -> Arv a -> Arv a
inserir x Vazia = No x Vazia Vazia
inserir x (No y esq dir)
    | x == y = No x esq dir
    | x < y = No y (inserir x esq) dir
    | x > y = No y esq (inserir x dir)

-- a lista deve estar em ordem crescente
construir :: [a] -> Arv a
construir [] = Vazia
construir xs = No x (construir xs') (construir xs'')
    where 
        n = length xs `div` 2
        xs' = take n xs
        x:xs'' = drop n xs

mais_esq :: Arv a -> a
mais_esq (No x Vazia _) = x
mais_esq (No _ esq _) = mais_esq esq

mais_dir :: Arv a -> a
mais_dir (No x _ Vazia) = x
mais_dir (No _ _ dir) = mais_dir dir

main :: IO ()
main = do
    let minhaArvore = construir [1,2,3,4,5,6,7]
{-
    4
  2    6
1  3  5  7
-}
    let teste = pertence 10 minhaArvore
    let teste1 = pertence 4 minhaArvore
    putStrLn $ "Elemento 10 pertence a arvore? " ++ show teste
    putStrLn $ "Elemento 4 pertence a arvore? " ++ show teste1

    let elementoMaisEsq = mais_esq minhaArvore
    putStrLn $ "Elemento mais a esquerda: " ++ show elementoMaisEsq

    let elementoMaisDir = mais_dir minhaArvore
    putStrLn $ "Elemento mais a direita: " ++ show elementoMaisDir