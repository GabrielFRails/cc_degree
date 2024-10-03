# Dicionário de Dados do *Dataset* São Paulo Metrô

Esse conjunto de dados foi criado com o objetivo de aplicações de pesquisa de gráficos, então basicamente armazena apenas as coordenadas e os bairros de algumas estações de metrô de São Paulo.  
As estações de trem de São Paulo são agrupadas em “linhas”, cujos nomes se referem a cores, pedras preciosas ou minérios.

A versão mais recente desse conjunto de dados tem todas as estações ativas das seguintes estações: azul, verde, vermelha, amarela, lilás e prata.

Obs.: Base e descrição extraída do [kaggle](https://www.kaggle.com/datasets/thiagodsd/sao-paulo-metro?select=metrosp_stations.csv).

- **name**: nome das estações sem cacateres especiais  
- **station**: nomes das estações separados por traço  
- **lat**: latitude da estação  
- **lon**: longitute da estação  
- **line**: linhas às quais a estação pertence  
- **neigh**: estações vizinhas  

Informações do CSV:  

- separator = ";"
- decimal = ","
- encoding = "utf-8"
