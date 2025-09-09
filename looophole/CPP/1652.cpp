// easy but to much to code 
// Solution 1 -> help

class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int> ans(n,0);
        if(k==0){
            return ans;
        }
        if(k>0){
            int sum = 0;
            for(int i=1;i<=k;++i){
                sum += code[i%n];
            }
            ans[0] = sum;
            for(int j=1;j<n;++j){
                sum += code[(j+k)%n] - code[j%n];
                ans[j] = sum;
            }
        }
        else{
            int kk = -k;
            int sum = 0;
            for(int j=1;j<=kk;++j){
                sum += code[(n-j)%n];
            }
            ans[0] = sum;
            for(int i=1;i<n;++i){
                int addIdx = (i-1+n)%n;
                int remIdx = (i - kk - 1 + n) %n;
                sum += code[addIdx] - code[remIdx];
                ans[i] = sum;
            }
        }
        return ans;
    }
};


// Solution 2 -> Logically wrong but gives answer

class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int> ans(n,0);
        if(k==0){
            return ans;
        }
        int kk = abs(k);
        if(k<0){
            reverse(code.begin(), code.end());
        }
        int sum = 0;
        for(int i=1;i<=kk;++i){
            sum += code[i%n];
        }
        ans[0] = sum;
        for(int j=1;j<n;++j){
            sum += code[(j+kk)%n] - code[j%n];
            ans[j] = sum;
        }
        if(k<0){
            reverse(ans.begin(), ans.end());
        }
        return ans;
    }
};
