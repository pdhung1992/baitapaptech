#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	int c=0, c1=0;
	for(int j=0; j<n; j++){
		if(a[j]>0){
			for(int k=0; k<(n-j); k++){
				if(a[j+k]>0){
					c1++;
				}else{
					break;
				}
			}	
		}
		if(c1>c){
			c=c1;
			c1=0;
		}else{
			c1=0;
		}
	}
	printf("%d",c);
}
