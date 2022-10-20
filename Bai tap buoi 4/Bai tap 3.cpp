#include <stdio.h>
int
main()
{
	printf("nhap n: ");
	int n;
	scanf("%d", &n);
	int i=1;
	int x=0;
	
	for(i; i<=n; i++){
		int m = n%i;
		if(m==0){
			x++;
		}
	}
	if(x==2){
		printf("%d la so nguyen to!", n);
	}else{
		printf("%d khong phai so nguyen to!", n);
	}
}
