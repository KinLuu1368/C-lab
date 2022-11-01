#include <stdio.h>
#include <string.h>
int main{
	bai1();
}

int bai1(){
	char s[100];
	printf("Nhap chuoi: ";
	gets(s);
	int i=0,n=0,p=0;
	while(s[i++] != '\0'){
		if(s[i]= 'a' || s[i]='i'|| s[i]='e'|| s[i]='u'|| s[i]='o'){
			n++;
		} else {
			p++
		}
	}
	printf("Nguyen am: %i\nPhu am: %i",n,p);
}
