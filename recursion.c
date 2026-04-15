#include <stdio.h>

int sum(int n);

int main(){
	sum(10);


	return 0;
}

int sum(int n){
	if (n == 0)
		return 0;

	else {
		printf("%d%s", n, n > 1 ? ", ":"\n");
		return sum(n - 1);
	}	

}
