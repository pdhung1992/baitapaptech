#include <stdio.h>
#include <math.h>

//1. Tinh chu vi tam giac ->> done

int chuvi(int a, int b, int c){
	int p = 0;
	if(a+b>c && a+c>b && b+c>a){
		p = a + b + c;
	}
	return p;
}

// 2. Tinh dien tich tam giac  ->> done

float dtich(int a, int b, int c){
	float p1;
	float s = 0;
	if(a+b>c && a+c>b && b+c>a){
		p1 = (a+b+c)/2.0;
		s = sqrt(p1*(p1-a)*(p1-b)*(p1-c));
	}
	return s;
}

//3. Tinh tong cac chu so  ->> done

int tong(int n){
	int s=0;
	for(n;n>0;n=n/10){
		s+=n%10;
	}
	return s;
}

// 4. Tim UCLN  ->> done

int ucln(int a, int b){
	int i;
	int min=a;
	if(min>b){
		min=b;
	}
	for(i=min; i>1; i--){
		if(a%i==0&&b%i==0){
			return i;
		}
	}
}

// 5. Tim BCNN  ->> done

int bcnn(int a, int b){
	int i;
	int max = a;
	if(max<b){
		max = b;
	}
	for(i=max; i<=a*b;i++){
		if(i%a==0&&i%b==0){
			return i;
		}
	}
}

// 6. Kiem tra so chinh phuong ->> done

bool sochinhphuong(int n){
	int i=0;
	for(i; i*i<=n; i++){
		if(i*i==n){
			return true;
		}		
	}
	return false;
}

// 7. Tim so duong co tong 1+..+n>10000  ->> done

int lonhon10000(){
	int i=0;
	int s=0;
	for(i; ;i++){
		s+=i;
		if(s>10000){
			return i;
		}
	}
}

//8. Kiem tra chu so giam dan ->> done

bool giamdan(int n){
	int x1 = n%10;
	n = n/10;
	int x2;
	while(n>0){
		x2 = n%10;
		if(x2<x1){
			return false;
		}
		x2 = x1;
		n=n/10;	
	}
	return true;
}

