#include <iostream>
#include <stack>
using namespace std;

void insertSorted(stack<int> &st, int element) {
    if (st.empty() || st.top() <= element) {
        st.push(element);
        return;
    }

    int top = st.top();
    st.pop();
    insertSorted(st, element);

    st.push(top);
}

void sortStack(stack<int> &st) {
    if (!st.empty()) {
        int top = st.top();
        st.pop();

        sortStack(st);

        insertSorted(st, top);
    }
}

void printStack(stack<int> st) {
    if (st.empty()) return;
    int x = st.top();
    st.pop();
    printStack(st);
    cout << x << " ";
    st.push(x);
}

int main() {
    stack<int> st;
    st.push(-3);
    st.push(14);
    st.push(8);
    st.push(2);

    cout << "Original Stack: ";
    printStack(st);
    cout << endl;

    sortStack(st);

    cout << "Sorted Stack: ";
    printStack(st);
    cout << endl;

    return 0;
}
