// Solution 1:
int findDuplicate(vector<int> &arr) 
{
    int ans = 0;
    for(int i=0;i<arr.size();i++){
        ans = ans ^ arr[i];
    }
    for(int i=1;i<arr.size();i++){
        ans = ans ^ i;
    }
    return ans;
}


// Solution 2:

#include <unordered_map>

int findDuplicate(vector<int> &arr) 
{
    unordered_map<int,int> seen;
    for(int x: arr){
        seen[x]++;
        if(seen[x]>1){
            return x;
        }
    }
    return -1;
}
