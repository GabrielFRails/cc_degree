from classes import *

def main():
# {
    rogerio = Horista("Rogério", "Santana")
    rogerio.set_horas_trabalhadas(20)
    rogerio.set_valor_hora(25)
    rogerio.calcular_pagamento()

    gabriela = Horista("Gabriela", "Sampaio")
    gabriela.set_horas_trabalhadas(25)
    gabriela.set_valor_hora(21)
    gabriela.calcular_pagamento()

    gerson = Administrador("Gerson", "Lima")
    gerson.set_salario_mensal(1500)

    criz = Administrador("Crizolélio", "Freitas")
    criz.set_salario_mensal(1700)

    senna = Administrador("Senna", "Da Silva")
    senna.set_salario_mensal(1740)

    amanda = Administrador("Amanda", "Silvestre")
    amanda.set_salario_mensal(2000)

    luiza = Comissionado("Luiza", "Mel")
    luiza.set_salario_base(600)
    luiza.set_total_vendas(60000)
    luiza.set_percentual_comissao(5)

    gabriel = Comissionado("Gabriel", "Freitas")
    gabriel.set_salario_base(800)
    gabriel.set_total_vendas(80000)
    gabriel.set_percentual_comissao(4)

    eduardo = Comissionado("Eduardo", "Correia")
    eduardo.set_salario_base(500)
    eduardo.set_total_vendas(70000)
    eduardo.set_percentual_comissao(7.5)


    pedro = Gerente("Pedro", "Vaz")
    pedro.set_salario_base(4000)
    pedro.set_bonificacao(578)

    funcionarios = [
        rogerio,
        gabriela,
        gerson,
        criz,
        senna,
        amanda,
        luiza,
        gabriel,
        eduardo,
        pedro ,
    ]

    idx = 1
    for func in funcionarios:
        nome = func.get_nome()
        sobrenome = func.get_sobrenome()
        print(f"Funcionário nº {idx}: {nome} {sobrenome}")

        if isinstance(func, Gerente):
            func.set_salario_mensal()
            print(f"Ganha R$ {func.get_salario_mensal()} por mês")
        
        if isinstance(func, Administrador):
            print(f"Ganha R$ {func.get_salario_mensal()} por mês")
        
        if isinstance(func, Comissionado):
            func.calcular_salario()
            print(f"Ganha R$ {func.get_salario()} por mês")
        
        if isinstance(func, Horista):
            func.calcular_pagamento()
            print(f"Ganha R$ {func.get_pagamento()} por mês")

        print("\n")
        idx += 1
# }

if __name__ == "__main__":
    main()