#include <stdio.h>
int main(){
	int a;
	int b;
	
	scanf("%d", &a);
	scanf("%d", &b);
	
	int x = a;
	a = b;
	b = x;
	
	printf("sau khi hoan doi:\n%d \n%d", a, b);
}
