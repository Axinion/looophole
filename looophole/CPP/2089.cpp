// Solution 1 -> Simple Loop

/*
class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == target){
                ans.push_back(i);
            }
        }
        return ans;
    }
};
*/

// Solution 2 -> Binary Search

class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<int> ans;
        int s = 0, e = nums.size() - 1;
        int a = nums.size() + 1;

        while (s <= e) {
            int mid = s + ((e - s) / 2);
            if (nums[mid] == target) {
                if (a > mid) {
                    a = mid;
                }
                e = mid - 1;
            }
            else if (nums[mid] < target) {
                s = mid + 1;
            }
            else {
                e = mid - 1;
            }
        }

        if (a > nums.size() - 1) {
            return ans;
        }

        int s1 = 0, e1 = nums.size() - 1;
        int b = -1;

        while (s1 <= e1) {
            int mid1 = s1 + ((e1 - s1) / 2);
            if (nums[mid1] == target) {
                if (b < mid1) {
                    b = mid1; 
                }
                s1 = mid1 + 1;
            }
            else if (nums[mid1] < target) {
                s1 = mid1 + 1;
            }
            else {
                e1 = mid1 - 1;
            }
        }
        for (int i = a; i <= b; i++) {
            ans.push_back(i);
        }

        return ans;
    }
};
