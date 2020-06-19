void Solution::merge(vector<int> &A, vector<int> &B)
{
    
    
    
    int i = A.size() - 1; //
    int j = B.size() - 1; // 
    int lastPos = A.size() + B.size() - 1;
    
    A.resize(A.size() + B.size());
    
    while(j >= 0)
    {
        if(i >= 0 and A[i] > B[j])
            A[lastPos--] = A[i--];
        else
            A[lastPos--] = B[j--];
    }
    
}
