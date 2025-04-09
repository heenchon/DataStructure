#include<iostream>
#include<string>
using namespace std;

int main() {
    int n, m; 
    string s, answer = "";
    cin >> n >> m>> s;
    int count =0;
    
    for(int i =0; i<n; ++i) {
        answer += "OI";
    }
    
    for(int i=0;i<m;++i){
        if(s[i] == 'I') {
            string temp = "";
            for(int j =1; j<=n*2; ++j) {
                if(i+j >= s.size()) {
                    break;
                }
                temp += s[i+j];
            }
            if(temp == answer) {
                count++;
            }
        }
    }
    
    cout << count;
    return 0;
}