#include <stdio.h>

	//1. trung binh cac so le
float tbc1(int ary[], int n){
	int s1=0, count1=0;
	for(int i=0; i<n; i++){
		if(ary[i]%2==1){
			s1+=ary[i];
			count1++;
		}
	}
	float tb1 = float(s1)/count1;
	return tb1;
}

	//2. trung binh cac so le o vi tri chan
float tbc2(int ary[], int n){
	int s2=0, count2=0;
	for(int i=1; i<n; i+=2){
		if(ary[i]%2==1){
			s2+=ary[i];
			count2++;
		}
	}
	float tb2 = float(s2)/count2;
	return tb2;
}

	//3. tim x co trong mang hay khong
bool timx(int ary[], int n, int x){
	for(int i=0; i<n; i++){
		if(ary[i]==x){
			return true;
		}
	}
	return false;
}

	//4. tim so le cuoi cung cua mang
int sole(int ary[], int n){
	int le=0;
	for(int i=0; i<n; i++){
		if(ary[i]%2==1){
			le=ary[i];
		}
	}
	return le;
}

int main()
{
	printf("Nhap n: ");
	int n;
	scanf("%d", &n);
	printf("Nhap cac gia tri cho mang: \n");
	int ary[n];
	for(int i=0; i<n; i++){
		scanf("%d", &ary[i]);
	}
	//1+2
	int count1=0;
	for(int i=0; i<n; i++){
		if(ary[i]%2==1){
			count1++;
		}
	}
	if(count1==0){
		printf("1. Mang vua nhap khong co so le!\n");
	}else{
		float tb1=tbc1(ary, n);
		printf("1. Trung binh cong cua cac so le la: %f\n", tb1);
	}
	//2.
	int count2=0;
	if(count1==0){
		printf("2. Mang vua nhap khong co so le!\n");
	}else{
		for(int i=1; i<n; i+=2){
			if(ary[i]%2==1){
				count2++;
			}
		}
		if(count2==0){
			printf("2. Mang vua nhap khong co so le o vi tri chan!\n");
		}else{
			float tb2=tbc2(ary, n);
			printf("2. Trung binh cong cac so le o vi tri chan la: %f\n", tb2);
		}
	}	
	//3.
	printf("3. Nhap x: ");
	int x;
	scanf("%d", &x);
	if(timx(ary, n, x)){
		printf(">> %d co trong mang.\n",x);
	}else{
		printf(">> %d khong co trong mang.\n", x);
	}
	//4.
	int le=sole(ary, n);
	if(le==0){
		printf("4. Mang vua nhap khong co so le!\n");
	}else{
		printf("4. So le cuoi cung trong mang la: %d\n", le);
	}
}
