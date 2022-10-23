#include <stdio.h>
int
main()
{
	int n;
	do{
		printf("nhap vao so duong n: ");
		scanf("%d", &n);
	}while(n<=0);
	int i = 1;
	int s = 0;
	
	printf("cac uoc cua %d la: \n", n);
	
	for(i; i<=n; i++){
		if(n%i==0){
			printf("%d\n",i);
			s+=i;
		}
	}
	printf("tong cac uoc cua %d la: %d", n, s);
}
