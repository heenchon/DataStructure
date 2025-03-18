#include<iostream>
#include<string>
int main() {
    char str[6] = {0};
    
    while(true) {
        std::string s;
        std::cin >> s;
        
        if(s == "0") {
            return 0;
        }
        
        for(int i = s.size()-1; i >= 0; --i) {
            str[s.size()-i-1] = s[i];
        }
        
        bool b = true;
        for(int i = 0; i<s.size(); ++i) {
            if(s[i] != str[i]) {
                b = false;
                break;
            }
        }
        
        if(b) {
            std::cout<< "yes\n";
        }
        else{
            std::cout<< "no\n";
        }
    }
    
    return 0;
}