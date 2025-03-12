class Solution {
public:

    int gcd(int a, int b){
        if(a==0){
            return b;
        }
        if(b==0){
            return a;
        }
        while(a!=b){
            if(a>b){
                a=a-b;
            }
            else{
                b=b-a;
            }
        }
        return a;
    }

    int findGCD(vector<int>& nums) {
        int m1 = *min_element(nums.begin(), nums.end());
        int m2 = *max_element(nums.begin(), nums.end());
        return gcd(m1, m2);
    }
};
