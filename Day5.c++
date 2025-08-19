#include<iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> findLeaders(vector<int>& arr) {
    vector<int> arr2; 
    int n = arr.size();
    int maxRight = arr[n - 1]; 

    arr2.push_back(maxRight); 
    
    for (int i = n - 2; i >= 0; i--) {

        if (arr[i] > maxRight) {
            maxRight = arr[i]; 
            arr2.push_back(maxRight); 
        }
    }

    reverse(arr2.begin(), arr2.end());
    
    return arr2; 
}

int main() {
    vector<int> arr = {100,50,20,10};
    vector<int> leaderElements = findLeaders(arr);
    for (int x : leaderElements) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
