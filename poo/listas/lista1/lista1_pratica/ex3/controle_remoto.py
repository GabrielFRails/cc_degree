from televisao import Televisao

class ControleRemoto():
    def __init__(self, televisor):
        self.televisor = televisor

    #aumentar vol un
    def aumentar_volume(televisor):
        televisor.volume = televisor.volume +1

    #dimi vol uni
    def diminuir_volume(televisor):
        televisor.volume = televisor.volume -1

    #aumentar canal un
    def aumentar_canal(televisor):
        televisor.canal += 1

    #diminuir canal un
    def diminuir_canal(televisor):
        televisor.canal -= 1

    #trocar canal
    def trocar_canal(televisor):
        televisor.canal = 11

    #consultar volume 
    def consultar_volume(televisor):
        print('O volume do televisor é: {}'.format(televisor.volume))

    def consultar_canal(televisor):
        print('O canal do televisor é: {}'.format(televisor.canal))
#print('Rodando controle')

