// without STL function

#include <iostream>
using namespace std;

void reverse(int arr[], int N) {
    for (int i = 0; i < N / 2; i++) {
        swap(arr[i], arr[N - i - 1]);
    }
}

int main() {
    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    reverse(arr, N);
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
