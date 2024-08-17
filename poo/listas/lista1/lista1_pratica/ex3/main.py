from televisao import Televisao
from controle_remoto import *

def main():

    tv = Televisao(16, 7)  #volume 16, canal 7

    print('O volume da tv é {}, e o canal é {}\n'.format(tv.volume, tv. canal))

    print('--------------')
    print('Aumantando o volume')
    ControleRemoto.aumentar_volume(tv)
    print('Aumentando o volume de novo')
    ControleRemoto.aumentar_volume(tv)
    ControleRemoto.consultar_volume(tv)
    
    print('\n--------------')
    print('Diminuindo o volume')
    ControleRemoto.diminuir_volume(tv)
    print('Diminuindo o volume de novo')
    ControleRemoto.diminuir_volume(tv)
    print('Diminuindo o volume de novo')
    ControleRemoto.diminuir_volume(tv)
    ControleRemoto.consultar_volume(tv)

    print('\n--------------')
    print('Aumentando o canal')
    ControleRemoto.aumentar_canal(tv)
    ControleRemoto.consultar_canal(tv)

    print('\n--------------')
    print('Diminuindo canal')
    ControleRemoto.diminuir_canal(tv)
    ControleRemoto.consultar_canal(tv)

    print('\n-------------')
    print('Trocando o canal')
    ControleRemoto.trocar_canal(tv)
    ControleRemoto.consultar_canal(tv)


if __name__ == "__main__":
    main()
