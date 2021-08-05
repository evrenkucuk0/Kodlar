#include<stdio.h>
int main(){
	int n;
	printf ("dizi sayısını giriniz");
	scanf("%d",&n);
	int a;
	int b;
	int c;	
	int i;
	a=1;
	b=1;
	for (i=0; i<n;i++){
		printf("%d,",a);
		c = a + b ;
		a=b;
		b=c;
	}
}
