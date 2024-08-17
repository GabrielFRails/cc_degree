int sequencialSearch(int *vector, int vectorSize, int key){

    int i = 0;
    while(i<vectorSize && vector[i] != key){
        i++;
    }
    if(i < vectorSize){
        return i;
    } else{
        return -1; //key don't found
    }
}

int binarySearch_iterative(int *vector, int vectorSize, int key){

    int begin = 0, end = vectorSize -1, i=0;

    while(begin <= end){
        i = (begin+end)/2;
        if(vector[i] == key){
            return i;
        }
        if(vector[i] < key){
            begin = i + 1;
        } else{
            end = i;
        }
    }

    return -1; // if don't found the key
}

int recursive_binary_search(int *vector, int begin, int end, int item) {
    int i = (begin + end) / 2;
    if (begin > end) {
        return -1;
    }
    if (vector[i] == item) {
        return i;
    }
    if (vector[i] < item) {
        return recursive_binary_search(vector, i + 1, end, item);
    } else {
        return recursive_binary_search(vector, begin, i-1, item);
    }
}