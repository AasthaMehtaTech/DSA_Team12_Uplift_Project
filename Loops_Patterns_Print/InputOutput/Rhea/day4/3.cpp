#include<bits/stdc++.h>
using namespace std;
//o(n)
void swap(int a[],int i,int j){
    int t=a[i];
    a[i]=a[j];
    a[j]=t;
}
void sortzot(int a[],int size){
    int low=0,mid=0,high=size-1;
    while(mid<=high){
        if(a[mid]==0){
            swap(a,mid++,low++);
        }
        else if(a[mid]==1){
            mid++;
        }
        else{
            swap(a,mid,high--);
        }
    }
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int a[100000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sortzot(a,n);
}

//not great

//int main(){
//    int t;
//    cin>>t;
//    int e,cz=0,co=0,ct=0;
//    while(t--)
//    {
//
//        cin>>e;
//
//        if(e==0){
//            cz++;
//        }
//        else if(e==1){
//            co++;
//        }
//        else ct++;
//
//    }
//    for(int i=0;i<cz;i++){
//        cout<<0<<" ";
//    }
//    for(int i=0;i<co;i++){
//        cout<<1<<" ";
//    }for(int i=0;i<ct;i++){
//        cout<<2<<" ";
//    }
//
//
//}
