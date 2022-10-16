#include <stdio.h>
#include <math.h>
int main()
{
	printf("nhap vao 3 so a, b, c:\n");
	
	int a;
	int b;
	int c;
	
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	
	int d = b*b-4*a*c;
	
	if(d<0){
		printf("phuong trinh vo nghiem!");
	}else{
		if(d==0){
			int x = -b/(2*a);
			printf("phuong trinh co nghiem kep: %d", x);
		}else{
			float x1 = (-b+sqrt(d))/(2*a);
			float x2 = (-b-sqrt(d))/(2*a);
			printf("phuong trinh co 2 nghiem don:\n %f\n %f", x1, x2);
		}
	}
	
	
}

