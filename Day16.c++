#include<iostream>
using namespace std;

long gcd(long a, long b){
    while(b != 0){
        long temp = b;
        b = (a % b);
        a = temp;
    }
    return a;
}

long lcm(long a, long b){
    
    return (a / gcd(a,b))*b;
}

int main(){
    long N = 123456, M = 789012;
    
    cout<<"LCM : "<<lcm(N,M);
    return 0;
}
