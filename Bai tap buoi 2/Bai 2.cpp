#include <stdio.h>
int main (){
	
	printf("nhap nam de kiem tra:\n");
	
	int x;
	
	scanf("%d", &x);
	
	
	if(x % 4 == 0){
		printf("nam vua nhap la nam nhuan!");
	}else{
		printf("nam vua nhap khong phai nam nhuan!");
	}
}
