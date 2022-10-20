#include <stdio.h>
int
main()
{
	printf("nhap n: ");
	int n;
	scanf("%d", &n);
	int i = 1;
	int x = 0;
	
	for(i; i<n; i++){
		int a=n%i;
		if(a==0){
			x=x+i;
		}
	}
	
	if(x==n){
		printf("%d la so hoan hao!", n);
	}else{
		printf("%d khong phai so hoan hao!", n);
	}
}
