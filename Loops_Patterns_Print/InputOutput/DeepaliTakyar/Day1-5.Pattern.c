//      *
//     * *
//    * * *
//   * * * *
//  * * * * *
//   * * * *
//    * * *
//     * *
//      *

#include<stdio.h>

int main(){
	int i,n,j,k;
	
	printf("enter number of lines\n");
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		for(k=n-1; k>=i; k--){
			printf(" ");
		}
		for(j=0; j<i; j++){
			printf(" *");
		}
		printf(" *\n");
	}
	
	for(i=n; i>1; i--){
		printf(" ");
		for(k=n; k>=i; k--){
			printf(" ");
		}
		for(j=i-1; j>1; j--){
			printf(" *");
		}
		printf(" *\n");
	}
	
	return 0;
}
