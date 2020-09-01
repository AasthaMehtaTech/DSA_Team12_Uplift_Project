vector<int> Solution::repeatedNumber(const vector<int> &A) {
    int a,b,n,i;
    n=A.size();
    vector<int> temp(n+1,false);
    for(i=0;i<n;i++)
    {
        if(temp[A[i]]==false)
        {
            temp[A[i]]=true;
        }
        else
        {
            a=A[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(temp[i]==false)
        {
            b=i;
        }
    }
    return vector<int> {a,b};
}
