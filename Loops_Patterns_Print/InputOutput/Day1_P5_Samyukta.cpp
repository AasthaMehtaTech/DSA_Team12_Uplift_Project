#include <iostream>
using namespace std;

int main() {
   int i,j,n;
   cin>>n;
   for(i=1;i<=n;i++){           //upper half triangle
       for(j=i;j<=n;j++){       
           cout<<" ";           //printing space
       }
       for(j=1;j<=i;j++){
           cout<<"* ";          //printing star
       }
       cout<<endl;
   }
   for(i=1;i<=n;i++){           //lower half triangle
       for(j=1;j<=i+1;j++){
           cout<<" ";           //printing space
       }
       for(j=n-1;j>=i;j--){
           cout<<"* ";          //printing triangle
       }
       cout<<endl;
   }
	return 0;
}
