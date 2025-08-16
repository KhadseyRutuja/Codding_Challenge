#include<iostream>
#include<vector>
using namespace std;

long missingNumber(vector<int> &arr){
    int n = arr.size() + 1;
    long arrSum = 0;
    long long originalSum = (1LL*(n)*(n+1))/2;
    
    for(int i=0; i<n; i++){
        arrSum += arr[i];
    }
    
    return originalSum - arrSum;
}

int main(){
    
    vector<int> arr = {1,2};
    
    long missingNum = missingNumber(arr);
    cout<<"Missing Number is "<<missingNum<<endl;
    
    return 0;
}
