module Main where

import Stack

-- ex1
parent :: String -> Bool
parent str = checkBalance str empty
  where
    checkBalance :: String -> Stack Char -> Bool
    checkBalance [] stack = isEmpty stack
    checkBalance (x:xs) stack
      | x `elem` "([{" = checkBalance xs (push x stack)
      | x `elem` ")]}" = case (top stack, x) of
          ('(', ')') -> checkBalance xs (pop stack)
          ('[', ']') -> checkBalance xs (pop stack)
          ('{', '}') -> checkBalance xs (pop stack)
          _ -> False
      | otherwise = checkBalance xs stack

main :: IO ()
main = do
  print $ parent "(((()[()]))"  -- True
  print $ parent "((]())"        -- False
  print $ parent "(((()[()])))" -- True