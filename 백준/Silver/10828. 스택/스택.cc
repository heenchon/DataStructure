#include<iostream>
#include<vector>
using namespace std;

void push(vector<int> &st) {
    int x;
    cin>> x;
    st.push_back(x);
}

void pop(vector<int> &st) {
    if(!st.empty()) {
        cout << st.back() << "\n";
        st.pop_back();
        return;
    }
    cout << -1 << "\n";
}

void size(vector<int> &st) {
    cout << st.size() << "\n";
}

void empty(vector<int> &st) {
    if(st.empty()) {
        cout << 1<< "\n";
    }
    else {
        cout << 0<< "\n";
    }
}

void top(vector<int> &st) {
    if(!st.empty()) {
        cout << st.back() << "\n";
        return;
    }
    cout << -1 << "\n";
}

int main() {
    vector<int> stack;
    int count;
    cin >> count;
    
    for(int i = 0; i<count; ++i) {
        string s;
        cin >> s;
        
        if(s == "pop") {
            pop(stack);
        }
        else if(s == "size") {
            size(stack);
        }
        else if(s == "empty") {
            empty(stack);
        }
        else if(s == "top") {
            top(stack);
        }
        else {    
            push(stack);
        }
    }
    
    return 0;
}