def main():
# {
    while True:
        a, b = input("digite dois numeros separados por um espaco: ").split()
        print(f"Numeros escolhidos: {a} e {b}")

        cd = CalculaDivisao()
        if cd.calc(a, b) == -1:
            break    
# }

class CalculaDivisao():
    def calc(self, a, b):
        try:
            a = int(a)
            b = int(b)
            result = a / b
            print(f"Resultado: {int(result)}")
            return -1
        except:
            if not isinstance(a, int) or not isinstance(b, int):
                print("Input de dados invalido, entre somente com numeros inteiros")
            
            if b == 0:
                print("Tentativa de divisão por 0, entre com dados validos")
        finally:
            print("Programa finalizado")

if __name__ == "__main__":
    main()