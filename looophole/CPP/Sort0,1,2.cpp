// Solution 1 -> Hashmap
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <bits/stdc++.h> 
#include<unordered_map>
void sort012(int *arr, int n)
{
   unordered_map<int, int> freq;
   for(int i=0;i<n; i++){
       freq[arr[i]]++;
   }
   int i = 0;
   int j = 0;
   while(i<=2){
       while(freq[i]>0){
           arr[j] = i;
           j++;
           freq[i]--;
       }
       i++;
   }
}


// Solution 2 -> Dutch National Flag Algo

