#include <stdio.h>
#include <math.h>

int main(){
	menu();
}
int bai1(){
	int n[2];
	int m,s,i;
	for (i=0; i<2;i++){
		printf("Nhap so thu %i: ",i+1);
		scanf("%i",&n[i]);
	}
	m=n[0]-n[1];
	s=n[0]+n[1];
	printf("tong: %i \nhieu: %i",s,m);
}

int bai2(){
	int n[2];
	int dt,cv,i;
	printf("Nhap chieu dai: ");
	scanf("%i", &n[0]);
	printf("Nhap chieu rong: ");
	scanf("%i", &n[1]);
	dt= n[0] * n[1];
	cv= 2*(n[0]+n[1]);
	printf("Chu vi: %i \nDien tich: %i",cv,dt);	
}

int bai3(){
	float r,cv,dt;
	printf("Nhap duong kinh hinh tron: ");
	scanf("%f",&r);
	cv= 2*3.14*r;
	dt = 3.14*pow(r,2);
	printf("Chu vi: %1.1f \nDien tich: %1.1f",cv,dt);
}

int bai4(){
	float diem[3];
	float avg;
	printf("Nhap diem toan: ");
	scanf("%f",&diem[0]);
	printf("Nhap diem ly: ");
	scanf("%f",&diem[1]);
	printf("Nhap diem hoa: ");
	scanf("%f",&diem[2]);
	avg= (diem[0]*3 + diem[1]*2 +diem[2])/6;
	printf("Diem trung binh: %1.1f",avg);
}

int menu(){
	int so;
	printf("------Menu------\n");
	printf("1. Bai 1 \n");
	printf("2. Bai 2 \n");
	printf("3. Bai 3 \n");
	printf("4. Bai 4 \n");
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
			bai4();
			break;
		default:
			printf("Vui long nhap lai!\n");
			menu();
	}
	
}












