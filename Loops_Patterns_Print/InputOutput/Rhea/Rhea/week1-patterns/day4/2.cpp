#include<bits/stdc++.h>
using namespace std;
void subarray(int a[],int size){
    int max=INT_MIN;
    for(int i=1;i<size;i++){
        if(a[i-1]>0)
            a[i]+=a[i-1];
        if(a[i]>max)
            max=a[i];
    }
    cout<<max;
}
int main(){
    int t;
    cin>>t;
    int a[10000];
    for(int i=0;i<t;i++){
        cin>>a[i];
    }
    subarray(a,t);
}

//o(n^2)

//int main(){
//    int n;
//    cin>>n;
//    int a[100000];
//    for(int i=0;i<n;i++)
//    {
//        cin>>a[i];
//    }
//    int max=INT_MIN;
//    for(int i=0;i<n;i++){
//            int sum=0;
//        for(int j=i;j<n;j++){
//            sum+=a[j];
//            if(sum>max)
//                max=sum;
//        }
//
//    }
//    cout<<max;
//
//}

