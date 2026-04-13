#include <stdio.h>

int viewArr(int a[]);

int main(){
	int arr[4] = {3, 2, 3, 4};
	int arrOrdered;
	if (arrOrdered = viewArr(arr))
		printf("O array esta ordenado\n");
	
	else
		printf("O array nao esta ordenado\n");

	return 0;

}

int viewArr(int a[]){
	int min = 0;
	for (int i = 0; i < 4; i++){
		if (a[i] >= min)
			min = a[i];
		else return 0;
			}

return 1;
	

}
