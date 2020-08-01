//Approach 1
vector<int> Solution::repeatedNumber(const vector<int> &A) {
  int n = A.size();
  vector<bool> vect(n+1,false);
  int a,b;

  for(int i =0; i<A.size(); i++)
  {
      if(vect[A[i] == false)
           vect[A[i]] = true;

     else a = A[i];
  }

  for(int i = 1; i < n + 1; i++){

      if(vact[i] == false ) b = i;
    }

  return vector<int> {a,b};
}

//approach 2
vector<int> Solution::repeatedNumber(const vector<int> &A) {
    long long int n =  A.size();
    long long int Sum_n = (n*(n+1))/2;
    long long int Sum_Sq_n = (n*(n+1)*(2*n+1))/6;
    long long int missing_no = 0, missing_no2 = 0;

    for(int i =0 ;i<A.size() ;i++)
    {
        Sum_n -= (long long int)A[i];
        Sum_Sq_n -= (long long int)A[i]*(long long int)A[i];
    }

    missing_no = (Sum_n + Sum_Sq_n/Sum_n)/2;
    missing_no2 = missing_no - Sum_n;

    vector <int> ans;
    ans.push_back(missing_no2);
    ans.push_back(missing_no);
    return ans;


}


