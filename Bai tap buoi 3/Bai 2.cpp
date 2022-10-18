#include <stdio.h>
main()
{
	printf("nhap luong:");
	int x;
	scanf("%d", &x);
	
	if(x<0){
		printf("nhap sai luong!");
	}else{
		if(x<7000000){
			double t = (double)x*0.1;
			double n = x - t;
			printf("thue thu nhap: %lf\nluong rong: %lf", t, n);
		}else{
			if(x<15000000){
				double t = x*0.2;
				double n = x-t;
				printf("thue thu nhap: %lf\nluong rong: %lf", t, n);
			}else{
				double t = x*0.3;
				double n = x-t;
				printf("thue thu nhap: %lf\nluong rong: %lf", t, n);
			}
		}
	}
}
