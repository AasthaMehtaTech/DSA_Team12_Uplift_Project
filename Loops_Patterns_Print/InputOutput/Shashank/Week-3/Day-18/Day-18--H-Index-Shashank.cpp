class Solution {
public:
	int hIndex(vector<int>& citations) {
		const int n = citations.size();
		vector<int> hindex(n+1);
		for (int i = 0; i < n; ++i)
			hindex[n-min(citations[i], n)]++;

		partial_sum(begin(hindex), end(hindex), begin(hindex), plus<int>());

		for (int i = 0; i <= n; ++i) {
			int h = n - i;
			if (hindex[i] >= h)
				return h;
		}

		return 0;
	}
};
