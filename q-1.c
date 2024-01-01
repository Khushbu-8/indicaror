#include<stdio.h>
#include<string.h>

/*
Q.1 Write a Program to find the length of a string using a Pointer.
For example,
Input:
Enter any string: hello world

Output:
The length of a string is: 11
*/

void main(){
	char str[10];
	int *ptr;
	int *p;
	int len;

	
	printf(" Enter string :");
	gets(str);
	
    ptr=&str;
	
	len=strlen(ptr);
	p=&len;
	
 printf("length : %d",*p);
	
	
	
	
}
