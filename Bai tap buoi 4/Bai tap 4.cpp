#include <stdio.h>
int
main()
{
	printf("nhap n:");
	int n;
	scanf("%d", &n);
	int x = 0;
	printf("so dao cua %d la: ", n);
	
	while(n>0){
		int a = n%10;
		x = x*10+a;
		n=n/10;
		}
		printf("%d",x);	
}
