#include <iostream>
#include <vector>
using namespace std;

int maxWater(vector<int>& arr) {
    int total = 0;

    for (int i = 1; i < arr.size() - 1; i++) {

        int left = arr[i];
        for (int j = 0; j < i; j++)
            left = max(left, arr[j]);

        int right = arr[i];
        for (int j = i + 1; j < arr.size(); j++)
            right = max(right, arr[j]);

        total += (min(left, right) - arr[i]);
    }

    return total;
}

int main() {
    vector<int> arr = { 0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1 };
    cout <<"Total amount of water trapped : "<< maxWater(arr)<<" units";
    return 0;
}
