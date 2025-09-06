#include<iostream>
#include<vector>
using namespace std;

vector<int> findMaximum(int arr[], int k,int n){
    
    vector<int> max_arr;


    for(int i=0; i<=n-k; i++){
        int max = arr[i];
        for(int j=1; j<k; j++){
            if(arr[i+j] > max){
                max = arr[i+j];
            }
        }
        max_arr.push_back(max);
    }
    
    return max_arr;
}

int main(){
    
    int arr[] = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;
    
    int n = sizeof(arr)/sizeof(arr[0]);
    
    vector<int> ans = findMaximum(arr, k, n);
    
    cout<<"[ ";
    for(int c:ans){
        cout<<c<<" ";
    }
    cout<<"]";
    
    return 0;
}
