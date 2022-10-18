#include <stdio.h>
main()
{
	printf("nhap diem trung binh: ");
	float x;
	scanf("%f", &x);
	
	if(x<0 || x>10){
		printf("nhap sai diem trung binh!");
	}else{
		if(x>=9){
			printf("xep loai A");
		}else{
			if(x>=7){
				printf("xep loai B");
			}else{
				if(x>=5){
					printf("xep loai C");
				}else{
					printf("xep loai D");
				}
			}
		}
	}
}
