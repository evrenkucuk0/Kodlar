#include<stdio.h>
int main(){
	int a,b,c;
	int temp;
	printf("birinci kenar uzunlugu>\n");
	scanf("%d",&a);
	printf("ikinci kenar uzunlugu>\n");
	scanf("%d",&b);
	printf("ucuncu kenar uzunlugu>\n");
	scanf("%d",&c);
	if(a < b){
		temp = a;
		a = b;
		b = temp;
	}
		if( ((a + b) < c) || ((a - b) > c) ){
		printf("Bu kenar uzunluklarina sahip bir ucgen olamaz\n");
		}
	else{
		printf("Bu kenar uzunluklarina sahip bir ucgen cizilebilir\n");
	}
			
}
