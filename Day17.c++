#include<iostream>
#include<vector>
using namespace std;

vector<int> primeFactors(int n){
    vector<int> factors;
    
    while(n % 2 == 0){
        factors.push_back(2);
        n=n/2;
    }
    
    for(int i=3; i*i <= n; i+=2){
        while(n % i == 0){
        factors.push_back(i);
        n=n/i;
        }
    }
    
    if(n > 1){
        factors.push_back(n);
    }
    
    return factors;
}

int main(){
    
    int n = 123456;
    vector<int> ans = primeFactors(n);
    
    cout<<"Prime Factors : " << "[ ";
    for(int factor: ans){
        cout<<factor<<" ";
    }
    cout<< "]";
    
    
    
    return 0;
}
