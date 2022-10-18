#include <stdio.h>
main()
{
	printf("nhap doanh so:");
	int x;
	scanf("%d", &x);
	
	if(x<0){
		printf("nhap sai doanh so!");
	}else{
		if(x<=100000000){
			double b = (double)x*0.05;
			printf("hoa hong nhan duoc: %lf", b);
		}else{
			if(x<=300000000){
				double b = (double)x*0.1;
				printf("hoa hong nhan duoc: %lf", b);
			}else{
				double b = (double)x*0.2;
				printf("hoa hong nhan duoc: %lf", b);
			}
		}
	}
}
