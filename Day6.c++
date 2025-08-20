#include <iostream>
#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int>> findArray(int arr[], int n){

    vector<pair<int,int>> outputArray;
    
    for(int i=0; i<n;i++){
        int sum = 0;
        for(int j=i; j<n;j++){
            sum += arr[j];
            
            if(sum == 0){
                outputArray.push_back({i,j});
            }
        }
    }
    
    return outputArray;
}

void printArray(vector<pair<int, int> > output)
{
    cout<<"{ ";
    for (auto it = output.begin(); it != output.end(); it++){
        
        cout << "[ " << it->first<<","<< it->second<<"] , ";

    }
    cout<<"}";
}

int main() {
    int arr[] = { -3, 1, 2, -3, 4, 0 };
    int n = sizeof(arr) / sizeof(arr[0]);

    vector<pair<int, int>> answer = findArray(arr, n);
    
    printArray(answer);
    
    return 0;
}
