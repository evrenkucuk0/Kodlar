#include<stdio.h>
int main(){
	int sayi;
	int i;
	int faktoriyel = 1;

	printf("sayi giriniz> ");
	scanf("%d",&sayi);
	if( sayi >= 0 ) {
		for( i = sayi; i > 0; i-- ) {
			faktoriyel *= i;//bu satýrda faktöriyel
							//sayi koymak gerekmiyo mu
		}
		printf("faktoriyel = %d\n",faktoriyel);
	}
	else
		printf("hata: sayý 0'dan küçük olamaz!\n");
}
