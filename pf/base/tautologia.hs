import Data.List

data Prop = Const Bool
  | Var Char
  | Neg Prop
  | Conj Prop Prop
  | Disj Prop Prop
  | Impl Prop Prop
  deriving (Eq, Show)

type Assoc ch v = [(ch, v)]

type Atrib = Assoc Char Bool
valor :: Atrib -> Prop -> Bool
valor s (Const b) = b
valor s (Var x) = find x s
valor s (Neg p) = not (valor s p)
valor s (Conj p q) = valor s p && valor s q
valor s (Disj p q) = valor s p || valor s q
valor s (Impl p q) = not (valor s p) || valor s q

vars :: Prop -> [Char]
vars (Const _) = []
vars (Var x) = [x]
vars (Neg p) = vars p
vars (Conj p q) = vars p ++ vars q
vars (Disj p q) = vars p ++ vars q
vars (Impl p q) = vars p ++ vars q