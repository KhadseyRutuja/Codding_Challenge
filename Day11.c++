#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> permuteUnique(string s) {
        vector<string> res;
        vector<bool> used(s.size(), false);
        string path;
        sort(s.begin(), s.end());  
        backtrack(s, used, path, res);
        return res;
    }

private:
    void backtrack(string &s, vector<bool> &used, string &path, vector<string> &res) {
        if (path.size() == s.size()) {
            res.push_back(path);
            return;
        }
        for (int i = 0; i < s.size(); i++) {
            if (used[i]) continue;
            if (i > 0 && s[i] == s[i - 1] && !used[i - 1]) continue;

            used[i] = true;
            path.push_back(s[i]);
            backtrack(s, used, path, res);
            path.pop_back();
            used[i] = false;
        }
    }
};

int main() {
    Solution sol;
    
    vector<string> res1 = sol.permuteUnique("abcd");
    cout<<"[ ";
    for (auto &p : res1){
        cout << p << " ";
    } 
    cout << "]";

    return 0;
}
