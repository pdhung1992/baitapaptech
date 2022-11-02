#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	int s=0, s1=0;
	for(int j=0; j<n; j++){
		if(a[j]>0){
			for(int k=0; k<(n-j); k++){
				if(a[j+k]>0){
					s1+=a[j+k];
				}else{
					break;
				}
			}	
		}
		if(s1>s){
			s=s1;
			s1=0;
		}else{
			s1=0;
		}
	}
	printf("%d",s);
}
