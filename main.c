#include<stdio.h>

void selection_sort(int data[], int data_number){
    int i,j,temp;
	int min_index;

    for(i=0 ; i < data_number ; i++){//until done sorting
		min_index = i;
		
		for(j = i ; j < data_number ;j++)//check min value
			if(data[j] < data[min_index])
				min_index = j;
		
		//swap between min value and each first value
		temp = data[i];
		data[i] = data[min_index];
		data[min_index] = temp;
	}
}


int main(){
    int data[6] = {5,3,4,6,2,7};
    int i,j;

    printf("Unsorted data : ");
    for(i=0 ; i < 6 ; i++)
        printf("%d ",data[i]);
    printf("\n");

    selection_sort(data , 6);

    printf("Sorted data : ");
    for(i=0 ; i < 6 ; i++)
        printf("%d ",data[i]);
    printf("\n");

    return 0;
}