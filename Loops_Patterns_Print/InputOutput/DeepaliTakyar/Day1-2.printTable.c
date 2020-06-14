#include<stdio.h>

int main(){
	int num,last,i;   // last=upto which table of num is calculated
	
	printf("enter a number \n");
	scanf("%d",&num);
	
	printf("enter the table last\n"); 
	scanf("%d",&last);
	
	for(i=1; i<=last; i++){
		printf(" %d * %d = %d\n",num,i,num*i);
	}
	return 0;
}
