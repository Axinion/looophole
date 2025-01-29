// Brute Force

#include <bits/stdc++.h>
#include <algorithm>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   vector<vector<int>> ans;
   std::sort(arr.begin(), arr.end());
   for(int i=0; i<arr.size();i++){
      for(int j=i+1;j<arr.size();j++){
         if(s-arr[i] == arr[j]){
            vector<int> temp;
            temp.push_back(min(arr[i], arr[j]));
            temp.push_back(max(arr[i], arr[j]));
            ans.push_back(temp);
         }
      }
   }
   return ans;
}
