#include <stdio.h>

void vArr(int a[]);
int maxColHeigh(int a[]);

int main(){
	int arr1[] = {0, 5, 4, 1, 4};
	
	vArr(arr1);


	return 0;

}

void vArr(int a[]){
	char line[5];
	int max = maxColHeigh(a);
	for (max; max > 0; max--){
		for(int i = 0; i < 5; i++){
			line[i] = a[i] >= max ? '#' : ' ';
		
		}
		printf("%s\n", line);
	}


}

int maxColHeigh(int a[]){
	int m = 0;
	for (int i = 0; i < 5; i++){
		if (a[i] > m)
			m = a[i];
	}
	return m;

}

