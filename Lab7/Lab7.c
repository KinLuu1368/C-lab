#include <stdio.h>
#include <string.h>

int main(){
	bai3();
}

int bai1(){
	char s[100];
	printf("Nhap chuoi: ");
	gets(s);
	int i=0;
	int n=0;
	int p=0;
	while(s[i++] != '\0'){
		if ( s[i]== 'a' || s[i] =='e'|| s[i]=='i'|| s[i]=='o'|| s[i] =='u'){
			n++;
		} else if (s[i]==" "){
		} else {
			p++;
		}
	}
	printf("Nguyen am: %i\nPhu am: %i",n,p);
	return 0;
}

int bai2(){
	char usn[]="Admin";
	char psw[]="Admin123";
	char tdn[20];
	char mk[20];
	printf("     Dang Nhap \n");
	printf("Ten dang nhap: ");
	gets(tdn);
	printf("Nhap mat khau: ");
	gets(mk);
	if (strcmp(usn,tdn)==0 && strcmp(psw,mk)==0){
		printf("Dang nhap thanh cong");
	} else {
		printf("Dang nhap khong thanh cong");
	}
}

int bai3(){
	char s[5][20];
	int i,j;
	for (i=0;i<5;i++){
		printf("Nhap chuoi %i: ",i+1);
		gets(s[i]);
	}
	for (i=1;i<5;i++){
		for(j=1;j<5;j++){
			if(strcmp(s[j-1],s[j])>0){
				char temp[20];
				strcpy(temp,s[j-1]);
				strcpy(s[j-1],s[j]);
				strcpy(s[j],temp);
				
			}
		}
	}
	for (i=0;i<5;i++){
		printf("%s\n",s[i]);
	}
}












