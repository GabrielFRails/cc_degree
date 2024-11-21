import Data.List (intersperse)

forca :: String -> String -> [Char]
forca palavra letrasAdivinhadas = [if c `elem` letrasAdivinhadas then c else '-' | c <- palavra]

verificaLetra :: String -> IO ()
verificaLetra palavra = jogo palavra ""

jogo :: String -> String -> IO ()
jogo palavra letrasAdivinhadas = do
    let estado = forca palavra letrasAdivinhadas
    let tentativas = length letrasAdivinhadas
    putStrLn $ "Palavra: " ++ estado
    putStrLn "Digite uma letra para adivinhar:"
    letra <- getLine
    if null letra
        then do
            putStrLn "Você não digitou uma letra. Tente novamente."
            jogo palavra letrasAdivinhadas
    else if head letra `elem` letrasAdivinhadas
        then do
            putStrLn "Você já tentou essa letra. Tente novamente."
            jogo palavra letrasAdivinhadas
        else if head letra `elem` palavra
            then do
                let novasLetras = head letra : letrasAdivinhadas
                let novoEstado = forca palavra novasLetras
                if '-' `notElem` novoEstado
                    then putStrLn $ "Adivinhou em " ++ show (tentativas + 1) ++ " tentativas. Palavra: " ++  novoEstado
                    else jogo palavra novasLetras
            else do
                putStrLn "Não ocorre"
                jogo palavra (head letra : letrasAdivinhadas)

main :: IO ()
main = do
    putStrLn "Digite uma palavra:"
    palavra <- getLine
    verificaLetra palavra
