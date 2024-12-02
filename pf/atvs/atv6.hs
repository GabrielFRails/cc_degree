data Arv a
  = No a (Arv a) (Arv a)
  | Vazia

altura :: Arv a -> Int
altura Vazia = 0
altura (No _ esq dir) = 1 + max (altura esq) (altura dir)

desvio :: Arv a -> Int
desvio Vazia = 0
desvio (No _ esq dir) = altura esq - altura dir

pesquisaAVL :: (Ord a) => a -> Arv a -> Bool
pesquisaAVL x Vazia = False
pesquisaAVL x (No y esq dir)
  | x == y = True
  | x < y = pesquisaAVL x esq
  | x > y = pesquisaAVL x dir

rodar_dir :: Arv a -> Arv a
rodar_dir (No x (No y t1 t2) t3) = No y t1 (No x t2 t3)
rodar_dir t = t

rodar_esq :: Arv a -> Arv a
rodar_esq (No x t1 (No y t2 t3)) = No y (No x t1 t2) t3
rodar_esq t = t

corrige_dir :: Arv a -> Arv a
corrige_dir (No x t1 t2)
  | desvio t1 == -1 = rodar_dir (No x (rodar_esq t1) t2)
  | otherwise = rodar_dir (No x t1 t2)
corrige_dir t = t

corrige_esq :: Arv a -> Arv a
corrige_esq (No x t1 t2)
  | desvio t2 == 1 = rodar_esq (No x t1 (rodar_dir t2))
  | otherwise = rodar_esq (No x t1 t2)
corrige_esq t = t

rebalancear :: Arv a -> Arv a
rebalancear t
  | d == 2 = corrige_dir t
  | d == -2 = corrige_esq t
  | otherwise = t
  where
    d = desvio t

inserirAVL :: (Ord a) => a -> Arv a -> Arv a
inserirAVL x Vazia = No x Vazia Vazia
inserirAVL x (No y esq dir)
  | x == y = No y esq dir
  | x < y = rebalancear (No y (inserirAVL x esq) dir)
  | x > y = rebalancear (No y esq (inserirAVL x dir))

mais_esq :: Arv a -> a
mais_esq (No x Vazia _) = x
mais_esq (No _ esq _) = mais_esq esq

remover :: (Ord a) => a -> Arv a -> Arv a
remover x Vazia = Vazia
remover x (No y Vazia dir)
  | x == y = dir
remover x (No y esq Vazia)
  | x == y = esq
remover x (No y esq dir)
  | x < y = No y (remover x esq) dir
  | x > y = No y esq (remover x dir)
  | x == y =
      let z = mais_esq dir
       in No z esq (remover z dir)

-- ex01

-- definição 1
removerAVL :: (Ord a) => a -> Arv a -> Arv a
removerAVL x arv = rebalancear (remover x arv)

-- definição 2
removerAVL' :: (Ord a) => a -> Arv a -> Arv a
removerAVL' x Vazia = Vazia
removerAVL' x (No y Vazia dir)
  | x == y = dir
removerAVL' x (No y esq Vazia)
  | x == y = esq
removerAVL' x (No y esq dir)
  | x < y = rebalancear (No y (remover x esq) dir)
  | x > y = rebalancear (No y esq (remover x dir))
  | x == y =
      let z = mais_esq dir
       in rebalancear (No z esq (remover z dir))

-- ex02

data Arv_H a = No_H a Int (Arv_H a) (Arv_H a)
             | Vazia_H
             deriving (Show)

altura_H :: Arv_H a -> Int
altura_H Vazia_H = 0
altura_H (No_H _ h _ _) = h

desvio_H :: Arv_H a -> Int
desvio_H Vazia_H = 0
desvio_H (No_H _ _ esq dir) = altura_H esq - altura_H dir

atualizaAltura_H :: Arv_H a -> Arv_H a
atualizaAltura_H Vazia_H = Vazia_H
atualizaAltura_H (No_H x _ esq dir) =
  let h = 1 + max (altura_H esq) (altura_H dir)
   in No_H x h esq dir

rodar_dir_H :: Arv_H a -> Arv_H a
rodar_dir_H (No_H x _ (No_H y _ t1 t2) t3) =
  atualizaAltura_H (No_H y 1 t1 (atualizaAltura_H (No_H x 1 t2 t3)))
rodar_dir_H t = t

rodar_esq_H :: Arv_H a -> Arv_H a
rodar_esq_H (No_H x _ t1 (No_H y _ t2 t3)) =
  atualizaAltura_H (No_H y 1 (atualizaAltura_H (No_H x 1 t1 t2)) t3)
rodar_esq_H t = t

corrige_dir_H :: Arv_H a -> Arv_H a
corrige_dir_H (No_H x _ t1 t2)
  | desvio_H t1 == -1 = rodar_dir_H (No_H x 1 (rodar_esq_H t1) t2)
  | otherwise = rodar_dir_H (No_H x 1 t1 t2)
corrige_dir_H t = t

corrige_esq_H :: Arv_H a -> Arv_H a
corrige_esq_H (No_H x _ t1 t2)
  | desvio_H t2 == 1 = rodar_esq_H (No_H x 1 t1 (rodar_dir_H t2))
  | otherwise = rodar_esq_H (No_H x 1 t1 t2)
corrige_esq_H t = t

rebalancear_H :: Arv_H a -> Arv_H a
rebalancear_H t = atualizaAltura_H (rebalancear_H' t)
  where
    rebalancear_H' t
      | d == 2 = corrige_dir_H t
      | d == -2 = corrige_esq_H t
      | otherwise = t
      where d = desvio_H t

mais_esq_H :: Arv_H a -> a
mais_esq_H (No_H y _ Vazia_H _) = y
mais_esq_H (No_H _ _ esq _) = mais_esq_H esq

removerAVL_H :: Ord a => a -> Arv_H a -> Arv_H a
removerAVL_H x Vazia_H = Vazia_H
removerAVL_H x (No_H y _ Vazia_H dir)
  | x == y = dir
removerAVL_H x (No_H y _ esq Vazia_H)
  | x == y = esq
removerAVL_H x (No_H y _ esq dir)
  | x < y = atualizaAltura_H (rebalancear_H (No_H y 1 (removerAVL_H x esq) dir))
  | x > y = atualizaAltura_H (rebalancear_H (No_H y 1 esq (removerAVL_H x dir)))
  | x == y = let z = mais_esq_H dir
             in atualizaAltura_H (rebalancear_H (No_H z 1 esq (removerAVL_H z dir)))

inserirAVL_H :: Ord a => a -> Arv_H a -> Arv_H a
inserirAVL_H x Vazia_H = No_H x 1 Vazia_H Vazia_H
inserirAVL_H x (No_H y _ esq dir)
  | x == y = No_H y (altura_H (No_H y 1 esq dir)) esq dir
  | x < y = atualizaAltura_H (rebalancear_H (No_H y 1 (inserirAVL_H x esq) dir))
  | x > y = atualizaAltura_H (rebalancear_H (No_H y 1 esq (inserirAVL_H x dir)))