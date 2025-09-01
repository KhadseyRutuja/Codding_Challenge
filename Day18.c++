#include <iostream>
#include <math.h>
using namespace std;

int countDivisors(int N) {
    int count = 0;
    for (int i = 1; i <= sqrt(N); i++) {
        if (N % i == 0) {
            if (i == N / i) count += 1; 
            else count += 2; 
        }
    }
    return count;
}

int main() {
    int num = 18;
    
    cout <<"Total Divisors : "<< countDivisors(num) << endl;
    return 0;
}
