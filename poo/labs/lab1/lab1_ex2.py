def main():
# {
	x = int(input("Digite a quantidade de alunos:\n"))
	print(f"Quantidade de alunos inserida: {x}")

	if x <= 0:
		return

	lista_alunos = []

	for _ in range(x):
		dados = input()
		dados = dados.strip()
		lista_alunos.append(dados)
	
	print("\nLista de Alunos:")
	for i in range(x):
		print(lista_alunos[i])
# }


if __name__ == "__main__":
	main()