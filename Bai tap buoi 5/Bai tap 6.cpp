#include <stdio.h>
int
main()
{
	int n;
	do{
		printf("nhap vao so duong n: ");
		scanf("%d", &n);
	}while(n<=0);
	int i=3;
	int f1=1;
	int f2=1;
	
	for(i; i<=n; i++){
		int f = f1 + f2;
		f1 = f2;
		f2 = f;
	}
	printf("so thu n trong day la: %d", f2);
}
