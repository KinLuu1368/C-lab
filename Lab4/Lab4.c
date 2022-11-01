#include <stdio.h>
#include <math.h>

int main(){
	menu();
}

int bai1(){
	int min,max;
	printf("Nhap min: ");
	scanf("%i",&min);
	printf("Nhap max: ");
	scanf("%i",&max);
	int i = min;
	float tong =0, count =0, avg = 0;
	while (i<=max){
		if(i%2 == 0){
			tong += i;
			count ++;
		}
		i++;
	}
	avg = tong /count;
	printf("Trung binh: %1.2f",avg);
}

int bai2(){
	int i,x,count=0;
	printf("Kiem tra so nguyen to\n\n");
	printf("Nhap so: ");
	scanf("%i",&x);
	for (i=2;i<x;i++){
		if(x%i==0){
			count++;
		}
	}
	if (count ==0){
		printf("%i la so nguyen to",x);
	} else {
		printf("%i khong la so nguyen to",x);
	}
}

int bai3(){
	int x,i;
	printf("Kiem tra so chinh phuong\n\n");
	printf("Nhap mot so: ");
	scanf("%i",&x);
	for (i =1;i<x;i++){
		if (pow(i,2) == x){
			printf("%i la so chinh phuong",x);
			break;
		}
	}
	
}
int menu(){
	int so;
	printf("------Menu------\n");
	printf("1. Bai 1 \n");
	printf("2. Bai 2 \n");
	printf("3. Bai 3 \n");
	printf("4. Thoat \n");
	printf("----------------\n\n");
	printf("Moi chon bai (1)(2)(3)(4): ");
	scanf("%i",&so);
	switch (so){
		case 1 :
			bai1();
			break;
		case 2:
			bai2();
			break;
		case 3:
			bai3();
			break;
		case 4:
			break;
		default:
			printf("Error! Vui long nhap lai!\n\n");
			menu();
	}
	
}








