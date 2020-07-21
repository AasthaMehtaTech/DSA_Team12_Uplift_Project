#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the dimension\n";
    cin>>n;
    int ans[n][n];
   int no = 1;
	int rowStart = 0, rowEnd = n-1, colStart = 0, colEnd = n-1;
	while(no <= n*n){
		for(int i=colStart; i<=colEnd; i++){
			ans[rowStart][i] = no++;
		}rowStart++;
		for(int i=rowStart; i<=rowEnd; i++){
			ans[i][colEnd] = no++;
		}
		colEnd--;
		for(int i=colEnd; i>= colStart; i--){
			ans[rowEnd][i] = no++;
		}
		rowEnd--;
		for(int i=rowEnd; i>=rowStart; i--){
			ans[i][colStart] = no++;
		}
		colStart++;
	}
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<ans[i][j]<<"\t";
        }
           cout<<endl;
    }
    return 0;
}
