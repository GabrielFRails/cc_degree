//esse arquivo contém vários códigos de algoritmos de ordemação

void swap(int *v, int i, int j){

    int temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}

void selectionSort(int *vetor, int tam){
    int i, j, trocas = 0;
    int min, aux;

    for (i = 0; i < tam - 1; i++){
        min = i;
        for (j = i + 1; j < tam; j++){
            if (vetor[j] < vetor[min]){
            min = j;
            trocas++;
            }
        }
        swap(vetor, i, min);
    }
    printf("Selection Sort - Movimentacoes realizadas: %d\n", trocas);
}

void insertionSort(int *vetor, int tam){
    int i, j, tmp, trocas = 0;
    
    for (i = 1; i < tam; i++){
        j = i;
        while (j > 0 && vetor[j - 1] > vetor[j]){
            swap(vetor, j, j-1);
            j--;
            trocas++;
        }
    }
    printf("Insertion Sort - Movimentacoes realizadas: %d\n", trocas);
}

void bubbleSort(int *vetor, int tam){
    int k, j, aux, trocas = 0;

    for (k = tam - 1; k > 0; k--){
        for (j = 0; j < k; j++){
            if (vetor[j] > vetor[j + 1]){
            swap(vetor, j, j+1);
            trocas++;
            }
        }
    }
    printf("Bubble Sort - Movimentacoes realizadas...: %d\n", trocas);
}

void shellSort(int *vetor, int tam){
    int i, j, k, valor, trocas;
    i = j = valor = trocas = 0;
    k = 1;

    while(k < tam)  k = 3 * k+1;
    while(k > 0){
        for(i=k; i < tam; i++){
            valor = vetor[i];
            j = i;
            while(j > k - 1 && valor <= vetor[j-k]){ //para decrescente <=
                vetor[j] = vetor[j-k];
                j -= k;
                trocas++;
            }
            vetor[j] = valor;
        }
        k /= 3;
    }

    printf("Movimentacoes realizadas no shell sort: %d\n", trocas);
}

void quickSort(int *vet, int began, int tam){
    int i, j, pivo, aux, trocas = 0, trocasQuick = 0;
    i = began;
    j = tam - 1;
    pivo = vet[(began + tam) / 2];

    while (i <= j){

        while (vet[i] < pivo && i < tam){
            i++;
        }
        while (vet[j] > pivo && j > began){
            j--;
        }

        if (i <= j){
            aux = vet[i];
            vet[i] = vet[j];
            vet[j] = aux;
            i++;
            j--;
            trocasQuick += 1;
        }
    }

    if (j > began){
    quickSort(vet, began, j + 1);
    }
    
    if (i < tam){
    quickSort(vet, i, tam);
    }
}

void heapify(int *vet, int size_vetor, int i){

    int max_value = i;
    int leftChild = 2 * i + 1;
    int rightChild = 2 * i + 2;

    if (leftChild < size_vetor && vet[leftChild] > vet[max_value])
        max_value = leftChild;

    if (rightChild < size_vetor && vet[rightChild] > vet[max_value])
        max_value = rightChild;

    if (max_value != i){
        swap(vet, i, max_value);
        heapify(vet, size_vetor, max_value);
    }
}

void heapSort(int *vet, int size_vetor){

    for (int i = size_vetor / 2 - 1; i >= 0; i--)
        heapify(vet, size_vetor, i);

    for (int i = size_vetor - 1; i >= 0; i--){
        swap(vet, 0, i);
        heapify(vet, i, 0);
    }
}