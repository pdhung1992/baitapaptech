#include <stdio.h>

int main(){
	printf("Nhap n: ");
	int n;
	scanf("%d", &n);
	printf("Nhap cac gia tri cho mang: ");
	int a[n];
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	int c=0, c1=0;
	for(int j=0; j<n; j++){
		if(a[j]>0){
			c1++;
			if(c1>c){
				c=c1;
			}
		}else c1=0;
	}
	printf("So luong so nguyen duong lien tiep nhieu nhat la: %d",c);
}
