#include <stdio.h>

int indexOf(int n, int sort[]);

int main(){
		
	int arr[] = {1, 2, 3, 6, 8, 10 , 29, 34, 70, 400, 2133};
	int index = 0;
	int num = 2;

	index = indexOf(num, arr);
	printf("%d\n", index);
	


	return 0;
}

int indexOf(int n, int sort[]){
	int min = 0, max = 10, middle = 0;

	while (min < max){
		middle = (min+max)/2;
		if (sort[middle] == n)
			return middle;
		else if (sort[middle] > n)
			max = middle - 1;
		else if (sort[middle] < n)
			min = middle + 1;
	}
	
}
