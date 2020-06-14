//* * * * *
//* * * *
//* * *
//* *
//*

#include<stdio.h>

int main(){
	int i,n,j;
	
	printf("enter number of lines\n");
	scanf("%d",&n);
	
	for(i=n; i>0; i--){
		for(j=i; j>0; j--){
			printf("* ");
		}
		printf("\n");
	}
	
	return 0;
}
