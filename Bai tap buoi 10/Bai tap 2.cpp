#include <stdio.h>

int main()
{
	printf("Nhap n: ");
	int n;
	scanf("%d", &n);
	printf("Nhap gia tri cho mang: ");
	int a[n];
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	int s=0, s1=0;
	for(int j=0; j<n; j++){
		if(a[j]>0){
			s1+=a[j];
			if(s1>s){
				s=s1;
			}
		}else{
			s1=0;
		}
	}
	printf("Tong cac so duong lien tiep lon nhat la: %d",s);
}
