// Solution: 


#include <bits/stdc++.h> 
pair < int , int > findSimilarity(vector < int > arr1, vector < int > arr2, int n, int m) 
{
	unordered_set<int> uni;
	unordered_map<int, int> inter;
	int cuni = 0;
	int cinter = 0;

	for(int x: arr1){
		inter[x]++;
		uni.insert(x);
	}

	for(int y: arr2){
		inter[y]++;
		uni.insert(y);
	}

	cuni = uni.size();

	for(auto pair: inter){
		if(pair.second>1){
			cinter++;
		}
	}
	return {cinter, cuni};
}
