#include <stdio.h>

int main(){
	bai4();
}

int bai1(){
	int n,i,count=0;
	printf("Nhap so phan tu: ");
	scanf("%i",&n);
	int arr[n];
	for (i=0;i<n;i++){
		printf("Nhap so thu %i: ",i+1);
		scanf("%i",&arr[i]);
	}
	float avg, tong =0;
	for (i=0;i<n;i++){
		if (arr[i] % 3 ==0){
			tong += arr[i];
			count++;
		}
	}
	avg= tong/count;
	printf("Trung binh cac so chia het cho 3: %1.2f",avg);
}

void swap(int *a,int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int bai2(){
	int n,i,j,temp;
	printf("Nhap so phan tu: ");
	scanf("%i",&n);
	int arr[n];
	for (i=0;i<n;i++){
		printf("Nhap so thu %i: ",i+1);
		scanf("%i",&arr[i]);
	}
	for (i=0;i<n+1;i++){
		int max = i;
		for (j=i+1;j<n;j++){
			if (arr[j]>arr[max]){
				max = j;
			}
		}
		if(max != i){
			swap(&arr[i],&arr[max]);
		}
	}
	for (i=0;i<n;i++){
		printf("%i ",arr[i]);
	}
	printf("\nSo lon nhat: %i \nSo nho nhat: %i",arr[0],arr[n-1]);
}

int bai3(){
	int i,j,n,temp;
	printf("Nhap so phan tu: ");
	scanf("%i",&n);
	int arr[n];
	for (i =0;i<n;i++){
		printf("Nhap so thu %i: ",i+1);
		scanf("%i",&arr[i]);
	}
	for (i=0;i<n+1;i++){
		int max =i;
		for(j=i+1;j<n;j++){
			if(arr[j]>arr[max]){
				max = j;
			}
		}
		if(max != i){
			swap(&arr[i],&arr[max]);	
		}
	}
	for (i=0;i<n;i++){
		printf("%i ",arr[i]);
	}
	
}

int bai4(){
	int m,n,i,j;
	printf("Nhap so hang: ");
	scanf("%i",&m);
	printf("Nhap so cot:");
	scanf("%i",&n);
	int arr[n][m];
	for (i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("Nhap dong %i cot %i: ",i+1,j+1);
			scanf("%i",&arr[i][j]);
		}
	}
	for (i=0;i<n;i++){
		for (j=0;j<m;j++){
			printf("%i ",arr[i][j]*arr[i][j]);
		}
		printf("\n");
	}
}







