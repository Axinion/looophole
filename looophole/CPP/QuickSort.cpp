// Pivot -> 1st Element (Using Recursion)

class Solution {
  public:
    void quickSort(vector<int>& arr, int low, int high) {
        
        // base case
        if(low>=high){
            return;
        }
        
        // partition
        int p = partition(arr, low, high);
        
        quickSort(arr, low, p-1);
        quickSort(arr, p+1, high);
        
    }

  public:
    int partition(vector<int>& arr, int low, int high) {
        
        int pivot = arr[low];
        int cnt = 0;
        for(int i=low+1;i<=high;i++){
            if(arr[i]<pivot){
                cnt++;
            }
        }
        
        // placing pivot element at right place
        int pvi = low + cnt;
        swap(arr[pvi], arr[low]);
        
        int i = low;
        int j = high;
        
        while(i<pvi && j>pvi){
            while(arr[i]<pivot){
                i++;
            }
            while(arr[j]>pivot){
                j--;
            }
            
            if(i<pvi && j>pvi){
                swap(arr[i++], arr[j--]);
            }
        }
        return pvi;
    }
};


// Pivot -> Last Element (Using Recursion)

class Solution {
  public:
    void quickSort(vector<int>& arr, int low, int high) {
        
        if(low>=high){
            return;
        }
        int p = partition(arr, low, high);
        quickSort(arr, low, p-1);
        quickSort(arr, p+1, high);
        
    }

  public:
    int partition(vector<int>& arr, int low, int high) {
        
        int pivot = arr[high];
        int i = low - 1;
        
        for(int j=low; j<high; j++){
            if(arr[j] <= pivot){
                i++;
                swap(arr[i], arr[j]);
            }
        }
        
        swap(arr[i+1], arr[high]);
        return i+1;
        
    }
};
