#include <stdio.h>


int min(int arr[], int n){
	int min=arr[0];
	int count=0;
	int x=0;
	for(int i=0; i<n; i++){
		if(arr[i]<min){
			min = arr[i];
			x=i;
			count++;
		}else count = 0;
	}
	return x;
}

int main()
{
	printf("Input n: \n");
	int n;
	scanf("%d", &n);
	printf("Input the elements of array: \n");
	int arr[n];
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	int x= min(arr, n);
	printf("The smallest element is: %d\n", arr[x]);
	printf("The index of smallest element is: %d\n", x);
}
