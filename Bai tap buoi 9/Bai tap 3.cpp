#include <stdio.h>
#include <string.h>

bool timchuoi(char a[], char b[])
{
	int x = strlen(a);
	int y = strlen(b);
	int z = x-y;
	if(z>=0){	
		for(int i=0; i<z; i++){
			if(a[i]==b[0]){
				int count = 1;
				for(int j=1; j<y; j++){
					if(a[i+j]==b[j]){
						count++;
					}
				}
				if(count==y){
					return true;
				}
				
			}
		}
	}
	return false;
}
int main()
{
	printf("Nhap vao chuoi A: \n");
	char a[50];
	scanf("%s", a);
	printf("Nhap vao chuoi B: \n");
	char b[50];
	scanf("%s", b);
	
	if(timchuoi(a,b)){
		printf("Chuoi B nam trong chuoi A!");
	}else{
		printf("Chuoi B khong nam trong chuoi A!");
	}
}
