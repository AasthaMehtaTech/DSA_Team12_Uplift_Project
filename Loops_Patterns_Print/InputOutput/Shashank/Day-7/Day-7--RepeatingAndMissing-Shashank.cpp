vector<int> Solution::repeatedNumber(const vector<int> &A) {
    int n = A.size();
    vector<bool> vect(n + 1, false);
    int a;
    int b;
    
    for(int i = 0; i < A.size(); i++){
        if(vect[A[i]] == false){
            vect[A[i]] = true;
        } else {
            a = A[i];
        }
    }
    
    for(int i = 1; i < n + 1; i++){
        if(vect[i] == false) b = i;
    }
    
    return vector<int> {a, b};
}
