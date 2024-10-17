data Arv a = Flh a | No a (Arv a) (Arv a)

profund :: Arv a -> Int
profund (Folha f) = 1
profund (No n esq dir) = (maximum (profund esq) (profund dir)) + 1

tamanho :: Arv a -> Int
tamanho (Folha f) = 1
tamanho (No n esq dir) = (tamanho esq) + (tamanho dir)

eq_struct :: Arv a -> Arv b -> Bool
eq_struct (Folha f1) (Folha f2) = true
eq_strcut (Arv a) (Arv b) 