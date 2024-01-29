#include <stdio.h>
#include <stdlib.h>
#include "sorting.h"

int main(int argc, char * argv[]) {
  //  printf("I have %d arguments\n",argc);
  printf("argc is %d\n",argc);
    int i,N = argc - 2;
    int *a;
    a = (int*)malloc(sizeof(int)*(argc-2));

    for(i=2;i<argc;i++){
        //printf("arg %d: %s\n",i,argv[i]);
        a[i-2] = atoi(argv[i]);
         printf("%d ",a[i-2]);
    }
    printf("\n------------------\n");

    if(argv[1][0] == 'b'){
        bubble_sort(a,N);
        printf("------------------\n");
    }

        if(argv[1][0] == 'i'){
        insertionSort(a,N);
        printf("------------------\n");
    }

        if(argv[1][0] == 's'){
        selectionSort(a,N);
        printf("------------------\n");
    }

    //diffsort(argv);

    //bubble_sort(a,N);
    //printf("------------------\n");

    //selectionSort(a,N);
    //printf("------------------\n");

    //insertionSort(a,N);
    //printf("------------------\n");

    return 0;
}