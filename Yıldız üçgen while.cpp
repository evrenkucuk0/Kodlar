#include<stdio.h>
int main(){
	int i=1;
	int j;
	while (i<=5){
		j=1;
		while (j<=i){
			printf("*");
			j++;
		}
		printf("\n");
		i++;		
	}
}
