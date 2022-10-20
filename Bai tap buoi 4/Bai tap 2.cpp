#include <stdio.h>
int
main()
{
	printf("nhap n: ");
	int n;
	scanf("%d", &n);
	int i = 1;
	int x;
	
	for(i; i<n; i++){
		int a=i%2;
		int b=i%3;
		if(a==0 && b==0){
			x=i;
		}
	}
	printf("so lon nhat nho hon %d chia het cho ca 2 va 3 la: %d", n, x);
	
}
