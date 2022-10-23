#include <stdio.h>

main()
{
	int n;
	printf("nhap n: ");
	scanf("%d", &n);
	int s = 0;
	
	if(n<0){
		n=-1*n;
	}
	
	while(n>0){
		s+=n%10;
		n=n/10;
	}
	printf("tong cac chu so la: %d", s);
}
