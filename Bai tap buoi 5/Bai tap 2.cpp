#include <stdio.h>
int
main()
{
	int a, b, min, UCLN, BCNN;
	int i=1;
	do{
		printf("nhap vao so duong a: ");
		scanf("%d", &a);
	}while(a<=0);
	do{
		printf("nhap vao so duong b: ");
		scanf("%d", &b);
	}while(b<=0);
	
	if(a!=b){
		if(a>b){
			min = b;
		}else{
			min = a;
		}
		for(i; i<=min; i++){
			if(a%i==0 && b%i==0){
				UCLN = i;
			}
		}
		BCNN = a*b/UCLN;
		printf("Uoc chung lon nhat = %d\nBoi chung nho nhat = %d", UCLN, BCNN);
	}else{
		printf("Uoc chung lon nhat = Boi chung nho nhat = %d", a);
	}
}
