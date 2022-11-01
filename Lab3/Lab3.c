#include <stdio.h>
#include <math.h>

int main(){
	menu();
}

int bai1(){
	float sc;
	printf("Nhap diem: ");
	scanf("%f",&sc);
	if (sc >= 9){
		printf("Hoc luc xuat sac");
	} else if (sc >= 8 ){
		printf("Hoc luc gioi");
	} else if (sc >= 6.5){
		printf("Hoc luc kha");
	} else if (sc >= 5){
		printf("Hoc luc trung binh");
	} else if (sc >= 3.5){
		printf("Hoc luc yeu");
	} else {
		printf("Hoc luc kem");
	}
}

int bai21(){
	float a,b,x;
	printf("PTB1: ax + b = 0\n\n");
	printf("Nhap a: ");
	scanf("%f",&a);
	printf("Nhap b: ");
	scanf("%f",&b);
	if (a == 0){
		if(b==0){
			printf("Phuong trinh vo nghiem");
		} else {
			printf("Phuong trinh vo so nghiem");
		}
	} else {
		x = -b/a;
		printf("%1.2f",x);
	}
}

int bai22(){
	float a,b,c,d,x,x1;
	printf("PTB2: ax^2 + bx + c = 0\n\n");
	printf("Nhap a: ");
	scanf("%f",&a);
	printf("Nhap b: ");
	scanf("%f",&b);
	printf("Nhap c:");
	scanf("%f",&c);
	if (a==0){
		bai21();
	} else {
		d= pow(b,2)-4*a*c;
		if (d<0){
			printf("Phuong trinh vo nghiem");
		} else if (d==0){
			x = -b/(2*a);
			printf("Phuong trinh co nghiem kep: x = %1.2f",x);
		} else {
			x =(-b + sqrt(d))/(2*a);
			x1 =(-b - sqrt(d))/(2*a);
			printf("X1 = %1.2f \nX2 = %1.2f",x,x1);
		}
	}
}

int bai3(){
	float sodien,tiendien;
	float bac[5];
	printf("Nhap so dien: ");
	scanf("%f",&sodien);
	bac[0] = 1.678*50;
	bac[1] = bac[0]+1.734*50;
	bac[2] = bac[1]+2.014*50;
	bac[3] = bac[2]+2.536*100;
	bac[4] = bac[3]+2.834*100;
	if (sodien <50){
		tiendien = sodien * 1.678;
	} else if (sodien <=100){
		tiendien = bac[0] + (sodien-50)*1.734;
	} else if (sodien <= 200) {
		tiendien = bac[1] + (sodien-100)*2.014;
	} else if (sodien <= 300) {
		tiendien = bac[2] + (sodien-200)*2.536;
	} else if (sodien <= 400) {
		tiendien = bac[3] + (sodien-300)*2.834;
	} else {
		tiendien = bac[4] + (sodien-400)*2.927;
	}
	printf("Tien dien: %1.3f",tiendien);
}

int menu(){
	int so;
	printf("-------Menu-------\n");
	printf("1. Tinh hoc luc \n");
	printf("2. PT bac 1 \n");
	printf("3. PT bac 2 \n");
	printf("4. Tinh tien dien \n");
	printf("------------------\n\n");
	printf("Moi chon bai (1)(2)(3)(4): ");
	scanf("%i",&so);
	switch (so){
		case 1 :
			printf("Tinh hoc luc\n");
			bai1();
			break;
		case 2:
			printf("PT bac 1\n");
			bai21();
			break;
		case 3:
			printf("PT bac 2\n");
			bai22();
			break;
		case 4:
			printf("Tinh tien dien \n");
			bai3();
			break;
		default:
			printf("Vui long nhap lai!\n");
			menu();
	}
}















