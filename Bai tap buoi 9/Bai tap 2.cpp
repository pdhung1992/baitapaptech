#include <stdio.h>
#include <string.h>

int main()
{
	printf("Nhap chuoi: ");
	char s[50];
	scanf("%s", s);
	int count=0;
	for(int i=0; i<=strlen(s); i++){
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
			count++;
		}
	}
	printf("So luong nguyen am la: %d\n", count);
	printf("So luong phu am la: %d", strlen(s)-count);
}
