void swap(int *,int *);
void bubble_sort (int [], int);
void printarr(int [], int);
void insertionSort(int [], int);
void selectionSort(int [], int);
void diffsort(int []);


/*void diffsort(int arr[]){
    if(arr[1][0] == 'b'){
        bubble_sort(a,N);
        printf("------------------\n");
    }

        if(arr[1][0] == 'i'){
        insertionSort(a,N);
        printf("------------------\n");
    }

        if(arr[1][0] == 's'){
        selectionSort(a,N);
        printf("------------------\n");
    }

}*/

void insertionSort(int arr[], int lenght) {
    int i, j, key;

    for (i = 1; i < lenght; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        arr[j + 1] = key;
        printarr(arr,lenght);
    }
}

void selectionSort(int arr[], int lenght) {
    int i, j, minIndex;

    for (i = 0; i < lenght - 1; i++) {
        minIndex = i;

        for (j = i + 1; j < lenght; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        if (minIndex != i) {
            swap(&arr[minIndex], &arr[i]);
        }

        printarr(arr,lenght);
    }
}

void bubble_sort (int arr[], int lenght){
    int sorted;
  for(int j=0; j < lenght-1; j++){
    sorted =0;
    for(int i = 0; i<lenght-1-j ; i++){
      if(arr[i] > arr[i+1]){
        swap(&arr[i],&arr[i+1]);
        sorted = 1;
      }
    }
    if(sorted == 0)break;
    printarr(arr,lenght);
  }
}

void swap(int *a,int *b){
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
} 

void printarr(int arr[], int lenght){
  for(int i = 0;i<lenght; i++){
    printf("%d ",arr[i]);
  }
  printf("\n");
}