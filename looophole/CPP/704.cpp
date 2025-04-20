// Solution 1: (without recursion)

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s = 0;
        int e = nums.size()-1;
        while(s<=e){
            int mid = s + ((e-s)/2);
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                s = mid+1;
            }
            else{
                e = mid-1;
            }
        }
        return -1;
    }
};


// Solution 2: (with recursion)

class Solution {

public:
    int Bs(vector<int>& nums, int s, int e, int t){
        if(s>e){
            return -1;
        }
        int mid = s + (e-s)/2;
        if(nums[mid]==t){
            return mid;
        }
        else if(nums[mid]>t){
            return Bs(nums, s, mid-1, t);
        }
        else{
            return Bs(nums, mid+1, e, t);
        }
        return -1;
    }

public:
    int search(vector<int>& nums, int target) {
        int s = 0;
        int e = nums.size()-1;
        int res = Bs(nums, s, e, target);
        return res;
    }
};
