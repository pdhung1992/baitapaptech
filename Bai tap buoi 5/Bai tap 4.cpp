#include <stdio.h>
int
main()
{
	int n, x;
	do{
		printf("nhap vao so duong n: ");
		scanf("%d", &n);
	}while(n<=0);
	
	while(n>0){
		x=n%10;
		n=n/10;
	}
	printf("chu so dau tien la: %d", x);
}
