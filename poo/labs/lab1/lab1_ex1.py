def main():
# {
	n1 = int(input("Type a number\n"))
	n2 = int(input("Type another\n"))
	print(f"You typed {n1} and {n2}")

	if (n1 > n2):
		aux = n1
		n1 = n2
		n2 = aux
	
	soma = 0
	num_pares = 0

	for i in range(n1, n2):
		soma = soma + i

		if i % 2 == 0:
			num_pares += 1
	
	diff = n2 - n1
	media = soma / diff
	
	print(f"Soma: {soma}, numeros inteiros: {diff}, numeros pares: {num_pares} e media: {media}")
				
# }


if __name__ == "__main__":
	main()
