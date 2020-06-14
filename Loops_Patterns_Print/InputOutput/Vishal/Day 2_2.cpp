    
    #include <iostream>
    using namespace std;
    int main()
    {
    int n,j=0;
    cin>>n;
    int sp=2*n-3,s=1;
    for(int i=0;i<n;i++)
    {
    for(j=0;j<s;j++)
    {
    cout<<" *";
    }
    for(j=0;j<sp;j++)
    {
    cout<<"  ";
    }
     for(j=0;j<s;j++)
    {
     cout<<" *";
    }
    sp=sp-2;
    s=s+2;
    cout<<"\n";
    }
    }
