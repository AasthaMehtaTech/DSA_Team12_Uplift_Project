bool sortcomp(Interval a,Interval b)
{
    return a.start < b.start;
}
#define forin(i,x,n) for(int i=x;i<n;i++)
vector<Interval> Solution::merge(vector<Interval> &A) {
    sort(A.begin(),A.end(),sortcomp);
    stack<Interval> stck;
    vector<Interval> res;
    int n= A.size();
    if(A.size()<=0){
        return res;
    }
    stck.push(A[0]);
    forin(i,1,n){
        Interval tmp = stck.top();
        if(tmp.end<A[i].start){
            stck.push(A[i]);
        }
        else if(tmp.end<A[i].end){
            stck.pop();
            tmp.end = A[i].end;
            stck.push(tmp);
        }
    }
    while (!stck.empty())
    {
        res.insert(res.begin(),stck.top());
        stck.pop();
    }
    return res;
}
