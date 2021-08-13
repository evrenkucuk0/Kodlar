//pi=3 olarak alýnacaktýr
#include<stdio.h>
int main(){
	int pi=3;
	float r,cevre,alan;
	
	printf("Lutfen cemberin yaricapini giriniz");
	scanf("%f",&r);
	
	cevre=2*pi*r;
	alan=pi*(r*r);
	printf("cemberin cevresi>%f\n",cevre);
	printf("cemberin alani>%f\n",alan);
	return 0;
	
}
