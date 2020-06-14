//*
//* *
//* * *
//* * * *
//* * * * *

#include<stdio.h>

int main(){
	int i,n,j;
	
	printf("enter number of lines\n");  
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		for(j=0; j<=i; j++){
			printf("* ");
		}
		printf("\n");
	}
	
	return 0;
}
