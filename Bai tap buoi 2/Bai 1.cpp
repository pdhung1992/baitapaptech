#include <stdio.h>
int main(){
	
	printf("nhap vao 3 so a, b, c:\n");
	
	int a;
	int b;
	int c;
	
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	
	if (a<b){
		if(a<c){
			printf("min la %d", a);
		}else{
			printf("min la %d", c);
		}
	}else{
		if(b<c){
			printf("min la %d", b);
		}else{
			printf("min la %d", c);
		}
	}
}
