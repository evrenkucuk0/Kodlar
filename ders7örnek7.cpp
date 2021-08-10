#include<stdio.h>
int main(){
	int kenar;
	int i;
	int j;
	
	printf("Karenin kenar uzunlugu: ");
	scanf("%d", &kenar);

	while((kenar < 0) || (kenar > 20)){
	
		printf("Lutfen 0 ile 20 arasinda bi deger giriniz.");
		printf("Karenin kenar uzunlugu");
		scanf("%d", &kenar);
	}

	for(i = 1; i <= kenar; i++){
	
		if(kenar == 0)
			break;
		if((i == 1) || (i == kenar)){
		
			for(j = 1; j <= kenar; j++)
				printf("*");
			printf("\n");
			continue;
		} 
		for(j = 1; j <= kenar; j++)
			if((j == 1) || (j == kenar))
				printf("*");
			else
				printf(" ");
		
		printf("\n");
	} 	
}
