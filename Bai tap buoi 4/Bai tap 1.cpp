#include <stdio.h>
int
main()
{
	printf("nhap n: ");
	int n;
	scanf("%d", &n);
	int i=0;
	int m;
	
	printf("cac so le nho hon %d la: \n", n);
	
	while(i<n){
		m=i%2;
		if(m==1){
			printf("%d\n", i);
		}
		i++;
	}
}
