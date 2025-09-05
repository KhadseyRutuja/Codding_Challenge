#include <iostream>
using namespace std;

int firstRepeatElement(int arr[], int n, int k) {
    for (int i = 0; i < n; i++) {
        int count = 0;  
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count == k) {
            return arr[i];  
        }
    }
    return -1;
}

int main() {
    int arr[] = {6, 6, 6, 6, 7, 7, 8, 8, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    int result = firstRepeatElement(arr, n, k);

    cout << "Output: " << result << endl;

    return 0;
}
