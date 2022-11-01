#include <stdio.h>
#include <string.h>




int main(){
	bai2();
}
struct Sinhvien {
	char mssv[50];
	char tenSV[50];
	char nganhHoc[50];
	float diemTb;
} arr[50];

void Nhap( struct Sinhvien arr[], int n){
	int i;
	for (i=0;i<n;i++){
		printf("Nhap thong tin sinh vien stt: %i\n",i+1);
		printf("Nhap ten sinh vien thu %i: ",i+1);
		fflush(stdin);
		gets(arr[i].tenSV);
		printf("Nhap MSSV thu %i: ",i+1);
		fflush(stdin);
		gets(arr[i].mssv);
		printf("Nhap Nganh hoc: ");
		fflush(stdin);
		gets(arr[i].nganhHoc);
		printf("Nhap Diem trung binh: ");
		scanf("%f",&arr[i].diemTb);
		printf("\n");
	}
}

void Xuat( struct Sinhvien arr[],int n){
    printf("\n-----THONG TIN SINH VIEN----\n");
    printf("TenSv \t\t MaSV \t\t Nganh hoc \t\t DiemTb \n");
    int i;
    for( i=0; i<n; i++){
        printf("%s \t\t %s \t\t %s \t\t\t %1.2f \n",arr[i].tenSV,arr[i].mssv,arr[i].nganhHoc,arr[i].diemTb);
    }
}
    

void Sapxep(struct Sinhvien arr[],int n){
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=n-1;j>i;j--){
			if(arr[i].diemTb>arr[j].diemTb){
			struct Sinhvien svTemp;
			svTemp = arr[i];
			arr[i]=arr[j];
			arr[j]=svTemp;
			}	
		}
	}
}

int bai1(){
	int n;
	printf("Nhap so sv: ");
	scanf("%i",&n);
	Nhap(arr,n);
	Xuat(arr,n);
}


int bai2(){
	int n;
	printf("Nhap so sinh vien: ");
	scanf("%i",&n);
	Nhap(arr,n);
	Sapxep(arr,n);
	printf("--DANH SACH SINH VIEN SAU KHI SAP XEP--\n");
	Xuat(arr,n);
}

int bai3(){
	int n;
	printf("Nhap so sinh vien: ");
	scanf("%i",&n);
	Nhap(arr,n);
	Sapxep(arr,n);
	
}


















