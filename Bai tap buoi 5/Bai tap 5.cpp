#include <stdio.h>
int
main()
{
	int n;
	do{
		printf("nhap vao so duong n: ");
		scanf("%d", &n);
	}while(n<=0);
	
	int max = n%10;
	n=n/10;
	while(n>0){
		int x = n%10;
		if (x>max){
			max = x;
		}
		n=n/10;
	}
	printf("chu so lon nhat la: %d", max);
}
