class Solution {

public:
    void merge(vector<int>& nums, int s, int e){
        int mid = s + (e-s)/2;
        int l1 = mid-s+1;
        int l2 = e - mid;

        int* f = new int[l1];
        int* sc = new int[l2];
        
        int mai = s;
        for(int i=0; i<l1;i++){
            f[i] = nums[mai++];
        }
        mai = mid+1;
        for(int i=0;i<l2;i++){
            sc[i] = nums[mai++];
        }

        //merge 2 sorted arrays
        int i1 = 0;
        int i2 = 0;
        mai = s;
        
        while(i1<l1 && i2<l2){
            if(f[i1]<sc[i2]){
                nums[mai++] = f[i1++];
            }
            else{
                nums[mai++] = sc[i2++];
            }
        }
        while(i1<l1){
            nums[mai++] = f[i1++];
        }
        while(i2<l2){
            nums[mai++] = sc[i2++];
        }
        delete []f;
        delete []sc;
    }


public:
    void mergeSort(vector<int>& nums, int s, int e){
        if(s>=e){
            return;
        }
        int mid = s + (e-s)/2;
        // sort left
        mergeSort(nums, s, mid);

        //sort right
        mergeSort(nums, mid+1, e);

        merge(nums, s, e);
    }

public:
    vector<int> sortArray(vector<int>& nums) {
        vector<int> res;
        int n = nums.size();
        mergeSort(nums, 0, n-1);
        for(int i=0;i<n;i++){
            res.push_back(nums[i]);
        }
        return res;
    }
};
