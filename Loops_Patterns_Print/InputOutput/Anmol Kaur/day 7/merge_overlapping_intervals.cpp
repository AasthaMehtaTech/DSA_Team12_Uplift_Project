/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */

 bool mycomp(Interval a, Interval b)
{
    return a.start < b.start;

}

#define forin(i,x,n) for(int i=x;i<n;i++)

vector<Interval> Solution::merge(vector<Interval> &A) {

    sort(A.begin(),A.end(), mycomp);
    stack<Interval> stck;
    vector<Interval> new_vec;
    int n = A.size();
    if(A.size()<=0)
        return new_vec;
    stck.push(A[0]);
   forin(i,0,n)
   {
       Interval temp = stck.top();
       if( temp.end < A[i].start)
           stck.push(A[i]);
        else if( temp.end < A[i].end)
         {
             stck.pop();
             temp.end = A[i].end;
             stck.push(temp);
         }
   }
   while(!stck.empty())
   {
       new_vec.insert(new_vec.begin(), stck.top());
       stck.pop();
   }

   return new_vec;
   }
