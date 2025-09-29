// Solution 1: (Sort) -> Time (O(nlogn))

#include <bits/stdc++.h>

vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
	sort(arr.begin(), arr.end());
	int klarge = arr[n-k];
	int ksmall = arr[k-1];
	return {ksmall, klarge};
}


// Solution 2 -> (Heaps) (Goes TLE) -> Time (O(n log k))

#include <queue>

vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
	priority_queue<int> pq1(arr.begin(), arr.begin()+k);
	priority_queue<int, vector<int>, greater<int>> pq2(arr.begin(), arr.begin()+k);

	for(int i=k;i<n;i++){
		if(arr[i]<pq1.top()){
			pq1.pop();
			pq1.push(arr[i]);
		}

		if(arr[i]>pq2.top()){
			pq2.pop();
			pq2.push(arr[i]);
		}
	}
	return {pq1.top(), pq2.top()};
}
