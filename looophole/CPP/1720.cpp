class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> ans;
        ans.push_back(first);
        int a = 0;
        for(int i=1;i<=encoded.size();i++){
            int a = ans[i-1] ^ encoded[i-1];
            ans.push_back(a);
            
        }
        return ans;
    }
};