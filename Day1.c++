#include<iostream>
#include<vector>
using namespace std;

void sortArray(vector<int> &arr){
    int n = arr.size();
    
    int c0 = 0;
    int c1 = 0;
    int c2 = 0;
    
    for(int i=0; i<n; i++){
        if(arr[i] == 0){
            c0+=1;
        }
        else if(arr[i] == 1){
            c1 += 1;
        }
        else{
            c2+=1;
        }
    }
    
    int index = 0;
    for(int i =0 ; i<c0; i++){
        arr[index++] = 0;
    }
    for(int i = 0 ; i<c1; i++){
        arr[index++] = 1;
    }
    for(int i =0 ; i<c0; i++){
        arr[index++] = 2;
    }
}
int main(){
    
    vector<int> arr = {1, 2, 0, 1, 1, 1};
    
    sortArray(arr);
    
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
