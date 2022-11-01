#include <stdio.h>

int main(){
	bai1();
}

int bai1(){
	int so[5];
	int i;
	for (i =0;i<5;i++){
		printf("Nhap so thu %i: ",i+1);
		scanf("%i",&so[i]);
	}
	int max,j,temp;
	
	for (i=0;i<5;i++){
		max=i;
		for (j=i+1;j<4;j++){
			if(so[max]<so[j]){
				max=j;
			}
		}
		if (max != i){
			swap(&so[i],&so[max]);
		}
	}
	for (i=0;i<5;i++){
		printf("%i ",so[i]);
	}
	printf("So lon nhat: %i",so[0]);
}

int bai2(){
	int nam;
	printf("Nhap nam: ");
	scanf("%i",&nam);
	if (nam % 400 == 0){
		printf("%i la nam nhuan",nam);
	} else if (nam % 4 ==0 && nam % 100 != 0){
		printf("%i la nam nhuan",nam);
	} else {
		printf("%i khong phai la nam nhuan",nam);
	}
}


void swap(int *a ,int *b){
		int temp;
		temp = *a;
		*a=*b;
		*b=temp;
}

int bai3(){
	int a,b;
	printf("Nhap so thu 1: ");
	scanf("%i",&a);
	printf("Nhap so thu 2: ");\
	scanf("%i",&b);
	swap(&a,&b);
	printf("%i %i",a,b);
}





