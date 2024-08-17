def main():
# {
	numbers = input("Give me 3 numbers:\n").split(' ')

	for i in range(len(numbers)):
		numbers[i] = int(numbers[i])
	
	print(f"Original Array: {numbers}")

	sorted_numbers = bubble_sort(numbers)
	print(f"Sorted Array: {sorted_numbers}")
# }

def bubble_sort(arr):
# {
	n = len(arr)
	swapped = False
	for i in range(n-1):
		for j in range(0, n-i-1):
			if arr[j] > arr[j + 1]:
				swapped = True
				arr[j], arr[j + 1] = arr[j + 1], arr[j]
			
		if not swapped:
			return
	
	return arr
# }

if __name__ == "__main__":
	main()