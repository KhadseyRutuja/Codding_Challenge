#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void sortArray(vector<int> &a, vector<int> &b){
    int n = a.size();
    int m = b.size();
    
    for(int i=0; i<n;i++){
        for(int j =0 ; j<m; j++){
            if(a[i] > b[j]){
                swap(a[i],b[j]);
            }
        }
    }
    
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    
    cout<<"arr1 = [ ";
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<"]"<<endl;
    cout<<"arr2 = [ ";
    for(int i=0; i<n;i++){
        cout<<b[i]<<" ";
    }
    cout<<"]";
}

int main() {
    
    vector<int> a = {1,3,5};
    vector<int> b = {2,4,6};
    
    sortArray(a,b);
    
    return 0;
}
