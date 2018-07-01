#include <stdio.h>

int main(int argc, char *argv[]){
	int i, j;
	for(i=1; j<=9; i++){
		for(j=1; j<=i; j++){
			printf("%d*%d=%d ", j, i, i*j);
		}
		printf("\n");
	}
	return 0;
}
