// Solution 1

/*
#include <bits/stdc++.h> 
using namespace std;

vector<int> findArraySum(vector<int>& a, int n, vector<int>& b, int m) {
    vector<int> ans;
    int i = n - 1;
    int j = m - 1;
    int carry = 0;
    while (i >= 0 || j >= 0 || carry != 0) {
        int digitA = (i >= 0) ? a[i] : 0;
        int digitB = (j >= 0) ? b[j] : 0;

        int sum = digitA + digitB + carry;
        ans.push_back(sum % 10);
        carry = sum / 10;

        i--;
        j--;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
*/

// Solution 2

#include <bits/stdc++.h> 
using namespace std;

vector<int> findArraySum(vector<int>& a, int n, vector<int>& b, int m) {
    vector<int> ans;
    int i = n-1;
    int j = m-1;
    int carry = 0;
    while(i>=0 && j>=0){
        int y = a[i];
        int z = b[j];
        int sum = y + z + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i-=1;
        j-=1;
    }
    while(i>=0){
        int sum = a[i] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i-=1;
    }
    while(j>=0){
        int sum = b[j] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        j-=1;
    }
    while(carry!=0){
        int sum = carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
    }
    std::reverse(ans.begin(), ans.end());
    return ans;
}
