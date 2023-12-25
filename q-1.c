#include<stdio.h>
#include<string.h>

void main(){
	char str[10];
	int *ptr;

	
	printf(" Enter string :");
	gets(str);
	
    ptr=&str;
	
	ptr=strlen(str);
	
 printf("length : %d",*ptr);
	
	
	
	
}
