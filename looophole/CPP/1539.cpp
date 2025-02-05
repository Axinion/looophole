// Binary Search Solution -> Try it again

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int a=1;
        int i=0;
        int c=0;
        while(i<arr.size() && c<k){
            if(a==arr[i]){
                i+=1;
            }
            else{
                c+=1;
                if(c==k){
                    return a;
                }
            }
            a+=1;
        }
        return a+(k-c-1);
    }
};
