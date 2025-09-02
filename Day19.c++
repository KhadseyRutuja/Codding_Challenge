#include <bits/stdc++.h>
using namespace std;

int evaluatePostfix(const string &expression) {
    stack<long long> st;
    stringstream ss(expression);
    string token;

    while (ss >> token) {
        if ((token[0] == '-' && token.size() > 1) || isdigit(token[0])) {
            st.push(stoll(token));
        } else {
            long long b = st.top(); st.pop();
            long long a = st.top(); st.pop();
            
            if (token == "+") st.push(a + b);
            else if (token == "-") st.push(a - b);
            else if (token == "*") st.push(a * b);
            else if (token == "/") {
                st.push((long long)( (double)a / (double)b ));
            }
            else if (token == "^") {
                st.push((long long)pow(a, b));
            }
        }
    }
    return st.top();
}

int main() {

    cout <<"Output : "<< evaluatePostfix("15 7 1 1 + - / 3 * 2 1 1 + + -"); 
    
    return 0;
}
