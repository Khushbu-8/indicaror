#include<stdio.h>
//Q.2 Write a Program to find cubes of all elements from a given 2D array using Pointer with UDF.
//
//Input:
//Enter array's size: 2
//
//Enter array elements:
//a[0][0] = 3
//a[0][1] = 2
//a[1][0] = 5
//a[1][1] = 4
//
//Output:
//Cubes of all elements:
//27    8
//125 64


#include<stdio.h>


int cube(int *ptr){

   ptr=&cube;
   return *ptr;
}


void main()

{
	int r,col;
	int a[r][col];
	printf("enter the row size:");
	scanf("%d",&r);
  printf("enter the col size:");
	scanf("%d",&col);

	int i,j;
	int cube;
	int *ptr;

	printf("enter the array element:\n");

	for(i=0;i<r;i++){
		for(j=0;j<col;j++){

		printf("enter a[%d][%d]:",i,j);
		scanf("%d",&a[i][j]);
		cube=a[i][j]*a[i][j]*a[i][j];
		ptr=&cube;
		printf("cube of all elements:%d\n\n",*ptr);
	}
	
}



}
