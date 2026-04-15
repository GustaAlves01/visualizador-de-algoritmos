#include <stdio.h>
#define ARRLEN 5

void order(int a[]);


int main(){
	int arr[ARRLEN] = {4,1,6,3,2};
	
	order(arr);
		

	printf("Array ordenado: \n");
	for (int i = 0; i < ARRLEN; i++){
		printf("%d, ", arr[i]);
	
	}
	printf("\n");
	


	return 0;

}

void order(int a[]){
	int min, minPos;

	for (int i = 0; i < ARRLEN; i++){
		min = a[i];
		minPos = i;
		for (int j = i; j < ARRLEN; j++){
			if (a[j] < min){
				min = a[j];
				minPos = j;	
			}
		}

		a[minPos] = a[i];
		a[i] = min;
	}
	
}




