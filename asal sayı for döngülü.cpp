#include<stdio.h>
int main(){
	int a,b;
	scanf("%d",&b);
	int flag=0;
	for(a=1; a<b-1;a++){
	
		if(b%a==0){
			flag=1;
			
			}
	}
	if(flag==0){
		printf("sayi asal ");
	}
	
	else{
		printf("sayi asal degil");
	}
	 	return 0;
	 	
}
