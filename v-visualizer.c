#include <stdio.h>
#define ARRLEN 5


void vArr(int a[]);
int maxColHeigh(int a[]);

int main(){
	int arr1[ARRLEN] = {0, 1, 2, 3, 4};
	vArr(arr1);

	return 0;
}

void vArr(int a[]){
	char line[ARRLEN];
	int max = maxColHeigh(a);
	for (max; max > 0; max--){
		for(int i = 0; i < ARRLEN; i++){
			line[i] = a[i] >= max ? '#' : ' ';
		}
		printf("%s\n", line);
	}
}

int maxColHeigh(int a[]){
	int m = 0;
	for (int i = 0; i < ARRLEN; i++){
		if (a[i] > m)
			m = a[i];
	}
	return m;

}

