#include <bits/stdc++.h>
using namespace std;

int substrCount(string s, int k) {
    int n = s.size();
    int result = 0;

    for (int i = 0; i < n; i++) {
        vector<int> freq(26, 0);
        int distinct = 0;

        for (int j = i; j < n; j++) {
            if (freq[s[j] - 'a'] == 0) distinct++;
            freq[s[j] - 'a']++;

            if (distinct == k){
                result++;
            } 
            else if (distinct > k){
                break;
            }   
        }
    }
    return result;
}

int main() {
    string s = "abc";
    int k = 2;
     cout << substrCount(s, k) << endl;       
    return 0;
}
