#include<iostream>
#include <bits/stdc++.h>
using namespace std;

const int MAX_CHAR = 26;

string getHash(string &s) {
    string hash;
	vector<int> freq(MAX_CHAR, 0);
    
    for(char ch: s)
        freq[ch - 'a'] += 1;
    
    for(int i = 0; i < MAX_CHAR; i++) {
        hash.append(to_string(freq[i]));
    	hash.append("$");
    }
    
    return hash;
}

vector<vector<string>> anagrams(vector<string> &arr) {
    vector<vector<string>> res;
    unordered_map<string, int> mp;
    for (int i = 0; i < arr.size(); i++) {
        string key = getHash(arr[i]);
        
        if (mp.find(key) == mp.end()) {
            mp[key] = res.size();
            res.push_back({});
        }
      
        res[mp[key]].push_back(arr[i]);
    }
    return res;
}

int main() {
    vector<string> arr = {"abc", "bca", "cab", "xyz", "zyx", "yxz"};
    
    vector<vector<string>> res = anagrams(arr);
    cout<<"[ ";
    for(int i = 0; i < res.size(); i++) {
        cout<<"[ ";
        for(int j = 0; j < res[i].size(); j++)
            cout << res[i][j] << " ";
        cout << "]";
    }
    cout << "]";
    return 0;
}
