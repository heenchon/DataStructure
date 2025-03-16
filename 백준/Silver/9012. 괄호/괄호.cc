#include<iostream>
#include<stack>
#include<string>

int main() {
    int count;
    std::cin>>count;
    
    for(int i =0; i<count; ++i) {
        std::string ps;
        std::cin >> ps;
        
        std::stack<char> st;
        bool b = true;
        
        for(int j = 0; j<ps.size(); ++j) {
            //( 가 들어오면 스택에 쌓는다.
            if(ps[j] == '(') {
                st.push('(');
            }
            // )가 들어오면
            else{
                // 짝이 될 ( 가 없음
                if(st.empty()) {
                    b = false;
                    break;
                }
                // 이론상 비어있지 않다면, 항상 ( 이므로 빼내기
                else{
                    st.pop();
                }
            }
        }
        
        // 스택에 ( 만 남아있는 상황 고려
        if(!st.empty()) {
            b = false;
        }
        
        if (b) {
            std::cout << "YES \n";
        }
        else{
            std::cout << "NO \n";
        }
    }
    return 0;
}
    
   
