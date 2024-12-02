import Data.List

data Prop = Const Bool
  | Var Char
  | Neg Prop
  | Conj Prop Prop
  | Disj Prop Prop
  | Impl Prop Prop
  | Equiv Prop Prop -- adicionado no ex02
  deriving (Eq, Show)

type Assoc ch v = [(ch, v)]

find' :: (Eq ch) => ch -> Assoc ch v -> v
find' ch assocs = head [v | (ch', v) <- assocs, ch == ch']

type Atrib = Assoc Char Bool

valor :: Atrib -> Prop -> Bool
valor s (Const b) = b
valor s (Var x) = find' x s
valor s (Neg p) = not (valor s p)
valor s (Conj p q) = valor s p && valor s q
valor s (Disj p q) = valor s p || valor s q
valor s (Impl p q) = not (valor s p) || valor s q

-- { ex02
valor s (Equiv p q) = valor s p == valor s q
-- }

bits :: Int -> [[Bool]]
bits 0 = [[]]
bits n = [b : bs | bs <- bits (n - 1), b <- [False, True]]

vars :: Prop -> [Char]
vars (Const _) = []
vars (Var x) = [x]
vars (Neg p) = vars p
vars (Conj p q) = vars p ++ vars q
vars (Disj p q) = vars p ++ vars q
vars (Impl p q) = vars p ++ vars q

-- { ex02
vars (Equiv p q) = vars p ++ vars q
-- }

atribs :: Prop -> [Atrib]
atribs p = map (zip vs) (bits (length vs))
  where
    vs = nub (vars p)

-- ex01
contraExemplos :: Prop -> [Atrib]
contraExemplos p = [s | s <- atribs p, not (valor s p)]

---------

tautologia :: Prop -> Bool
tautologia p = and [valor s p | s <- atribs p]

-- ex03

data Expr
  = Val Int
  | Soma Expr Expr
  | Mult Expr Expr

valor' :: Expr -> Int
valor' (Val n) = n
valor' (Soma e1 e2) = valor' e1 + valor' e2
valor' (Mult e1 e2) = valor' e1 * valor' e2

type Cont = [Op]

data Op = AVAL Expr | SOMA Int | MULT Int

aval :: Expr -> Cont -> Int
aval (Val n) c = exec c n
aval (Soma x y) c = aval x (AVAL y : c)
aval (Mult x y) c = aval x (AVAL y : c)

exec :: Cont -> Int -> Int
exec [] n = n
exec (AVAL y : c) n = aval y (SOMA n : c)
exec (SOMA n : c) m = exec c (n + m)
exec (MULT n : c) m = exec c (n * m)
