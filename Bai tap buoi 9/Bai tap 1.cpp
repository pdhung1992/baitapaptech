#include <stdio.h>
#include <string.h>

int main()
{
	printf("Nhap vao chuoi can chuyen: \n");
	char s[50];
	scanf("%s", s);
	for(int i=0; i<strlen(s); i++){
		if(s[i]>96&&s[i]<123){
			s[i]=s[i]-32;
		}
	}
	printf("Chuoi sau khi chuyen sang in hoa: \n%s", s);
}
