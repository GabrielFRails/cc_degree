module Main (main) where

import Stack

parent :: String -> Bool
parent str = isEmpty stack
  where
    stack = foldl updateStack empty str
    updateStack s c = case c of
        '(' -> push '(' s
        '[' -> push '[' s
        '{' -> push '{' s
        ')' -> if not (isEmpty s) && top s == '(' then pop s else error "Unmatched ')'"
        ']' -> if not (isEmpty s) && top s == '[' then pop s else error "Unmatched ']'"
        '}' -> if not (isEmpty s) && top s == '{' then pop s else error "Unmatched '}'"
        _   -> s

main :: IO ()
main = do
    print $ parent "((()))" -- True
    print $ parent "([])"   -- True
    print $ parent "([)]"   -- False
