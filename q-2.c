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


int cube(int *c){
	
	return *c * *c * *c;
}

void main(){
	int row,col;

	printf("Enter Array row :");
	scanf("%d",&row);
	printf("Enter Array col :");
	scanf("%d",&col);
		int a[row][col];
	
		int i,j;
		int *c,*p;
		
		printf("Enter Array element :\n");
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			printf("enter a[%d][%d]: ",i,j);
		  scanf("%d",& a[i][j]);	
		}
    }
    
   printf("Cubes of all elements:\n ");
   
    for(i=0; i<row; i++){
    	for(j=0; j<col;j++){
    	c =&a[i][j];
     printf("%d,",cube(*c));
		}
	}
    
    
    
}
