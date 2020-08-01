//Given two sorted integer arrays A and B, merge B into A as one sorted array.
// without using extra space

void Solution::merge(vector<int> &A, vector<int> &B) {

   for(int i =0 ; i<B.size(); i++)
    {
        A.push_back(B[i]);
    }

    sort(A.begin(), A.end());
}

