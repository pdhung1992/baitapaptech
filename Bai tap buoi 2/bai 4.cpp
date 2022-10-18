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
	
	if(a==0){
		if(b==0){
			if(c==0){
				printf("phuong trinh vo so nghiem");
			}else{
				printf("phuong trinh vo nghiem");
			}
		}else{
			float x = -(float)c / b;
			printf("phuong trinh co 1 nghiem:\n x= %f", x);
		}
	}else{
		int d = b*b-4*a*c;
		if(d<0){
			printf("phuong trinh vo nghiem");
		}else{
			if(d==0){
				float x = -(float)b/(2*a);
				printf("phuong trinh co nghiem kep:\n x= %f", x);
			}else{
				double x1 = (-b+sqrt(d))/(2*a);
				double x2 = (-b-sqrt(d))/(2*a);
				printf("phuong trinh co 2 nghiem don:\n %lf\n %lf", x1, x2);
			}
		}
	}
}
