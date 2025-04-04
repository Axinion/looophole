// Online C++ compiler to run C++ program online
#include <iostream>

int main() {
    int arr[] = {1, 3, 4, 5, 7, 10, 11};
    int a = 10;
    int n = sizeof(arr)/sizeof(arr[0]);
    int start = 0;
    int end = n-1;
    while(start<end){
        if(arr[start]+arr[end]==a){
            std::cout<<arr[start]<<arr[end];
            return 0;
        }
        else if(arr[start]+arr[end]>a){
            end--;
        }
        else{
            start++;
        }
    }
    std::cout << "No pair found that adds up to " << a;
    return 0;
}
