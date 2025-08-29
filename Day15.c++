#include <iostream>
#include <vector>
using namespace std;


int longestUniqueSubstr(string& s) {
    if (s.length() == 0 || s.length() == 1)
        return s.length();

    int maxLen = 0;
    vector<bool>visited(26, false);

    int left = 0, right = 0;
    while (right < s.length()) {

        while (visited[s[right] - 'a'] == true) {

                visited[s[left] - 'a'] = false;
                left++;
       	}

        visited[s[right] - 'a'] = true;

        maxLen = max(maxLen, (right - left + 1));
        right++;
    }
    return maxLen;
}

int main() {
    string s = "a";
    cout <<"Length of longest unique substring : "<< longestUniqueSubstr(s);
    return 0;
}
