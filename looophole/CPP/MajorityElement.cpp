// Majority Element - Coding Ninjas - Hashmap

#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	int freq = n/2;
	int ans = -1;
	unordered_map<int, int> m;
	for(int i=0;i<n;i++){
		m[arr[i]]++;
		if(m[arr[i]]>freq){
			ans = arr[i];
		}
	}
	return ans;
}
