#include<bits/stdc++.h>
using namespace std;

void learnStack() {
    stack<int> st;
    st.push(1);
    st.push(7);
    
    cout << st.size() << endl;

    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    st.pop();

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.push(7);

    while(st.empty() == false) {
        cout << st.top() << " ";
        st.pop();
    }
}

int main() {
    learnStack();
    return 0;
}