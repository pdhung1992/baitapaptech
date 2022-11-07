#include <stdio.h>

int main()
{
	printf("Input 10 intergers: \n");
	int arr[10];
	for (int i=0; i<10; i++){
		scanf("%d", &arr[i]);
	}
	printf("Display in the reversed order: \n");
	for(int j=9; j>=0; j--){
		printf("%d\n", arr[j]);
	}
}
