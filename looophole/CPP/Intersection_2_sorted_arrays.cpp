#include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	vector<int> res;
	int i = 0;
	int j = 0;
	while(i<n && j<m){
		if(arr1[i]==arr2[j]){
			res.push_back(arr1[i]);
			i+=1;
			j+=1;
		}
		else if (arr1[i]<arr2[j]){
			i+=1;
		}
		else{
			j+=1;
		}
	}
	return res;
}
