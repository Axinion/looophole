// Solution 1: (Sort)

#include <bits/stdc++.h>

vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
	sort(arr.begin(), arr.end());
	int klarge = arr[n-k];
	int ksmall = arr[k-1];
	return {ksmall, klarge};
}


// Solution 2 -> (Heaps)
