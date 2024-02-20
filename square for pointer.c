/*
Q.1 Write a Program to find the square of each element of a given 1D array using a Pointer.

*/
#include<stdio.h>

void main(){
	
	int a[100];
	int *ptr,i,s;
	printf("Enter the size of the arrays:\n");
	scanf("%d", &s);

	
		ptr = &a;	


	for(i=1; i<=s; i++){
	printf("enter element :- ");
	scanf("%d",&a[i]);
	}
	
	for(i=1; i<=s; i++){
	printf("%d => %u\n",(*(ptr+i))*(*(ptr+i)),(ptr+i));
	
 }
}
