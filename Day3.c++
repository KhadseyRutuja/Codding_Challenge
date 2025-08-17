#include <iostream>
#include<vector>
using namespace std;

int findNumber(vector<int> &arr){
    // int n = arr.size();
    
    int slow = arr[0];
    int fast = arr[0];
    
    do{
        slow = arr[slow];
        fast = arr[arr[fast]];
    }while(slow != fast);
    
    slow = arr[0];
    
    while(slow != fast){
        slow = arr[slow];
        fast = arr[fast];
    }
    
    return slow;
    
}

int main() {
    
    vector<int> arr = {1,4,4,2,3};
    int num = findNumber(arr);
    
    cout<<"Duplicate Number : "<<num<<endl;
    return 0;
}
