// Heap Implementation Using Array

#include <bits/stdc++.h>
using namespace std;

class heap{
    public:
        int arr[100];
        int size;
        
        heap(){
            arr[0] = -1;
            size = 0;
        }
        
        void insert(int val){
            size = size + 1;
            int index = size;
            arr[index] = val;
            
            while(index>1){
                int parent = index/2;
                if(arr[index]>arr[parent]){
                    swap(arr[parent], arr[index]);
                    index = parent;
                }
                else{
                    return;
                }
            }
        }
        
        void print(){
            for(int i=1;i<=size;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        
        void deleteFromHeap(){
            if(size==0){
                cout<<"Nothing to Delete"<<endl;
            }
            arr[1] = arr[size];
            size--;
            int i = 1;
            while(i<size){
                int left = i*2;
                int right = i*2 + 1;
                if(left<size && arr[i]<arr[left]){
                    swap(arr[i], arr[left]);
                    i = left;
                }
                else if(right<size && arr[i]<arr[right]){
                    swap(arr[i], arr[right]);
                    i = right;
                }
                else{
                    return;
                }
            }
        }
};

void heapify(int arr[], int n, int i){
    int largest = i;
    int left = i*2;
    int right = i*2 + 1;
    
    if(left<=n && arr[largest]<arr[left]){
        largest = left;
    }
    if(right<=n && arr[largest]<arr[right]){
        largest = right;
    }
    
    if(largest!=i){
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}
        
void minHeapify(int arr[], int n, int i){
    int smallest = i;
    int left = i*2;
    int right = i*2 + 1;
    
    if(left<=n && arr[smallest]>arr[left]){
        smallest = left;
    }
    if(right<=n && arr[smallest]>arr[right]){
        smallest = right;
    }
    
    if(smallest!=i){
        swap(arr[i], arr[smallest]);
        minHeapify(arr, n, smallest);
    }
}

void heapSort(int arr[], int n){
    int size = n;
    while(size>1){
        swap(arr[size], arr[1]);
        size--;
        heapify(arr, size, 1);
    }
}
        

int main() {
	heap h;
	
	h.insert(72);
	h.insert(34);
	h.insert(89);
	h.insert(67);
	h.insert(81);
	
	h.print();
	
	h.deleteFromHeap();
	h.print();
	
	int arr[6] = {-1, 54, 53, 55, 52, 50};
	int n=5;
	for(int i = n/2;i>0;i--){
	    heapify(arr, n, i);
	}
	for(int i=1;i<=n;i++){
	    cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	heapSort(arr, n);
	for(int i=1;i<=n;i++){
	    cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	for(int i = n/2;i>0;--i){
	    minHeapify(arr, n, i);
	}
	for(int i=1;i<=n;i++){
	    cout<<arr[i]<<" ";
	}
	cout<<endl;

}
