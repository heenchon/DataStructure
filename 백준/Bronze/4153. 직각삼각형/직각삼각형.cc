#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;
int main() {
    
    while(true) {
        int a, b, c;
        std::cin >> a >> b>>c;
        
        if(a==0&&b==0&&c==0) {
            return 0;
        }
        
        int max = std::max({a,b,c});
        
        if(max == a) {
            if((c*c + b*b) == a*a) {
                std::cout << "right" <<"\n";
            }
            else {
                std::cout <<"wrong" << "\n";
            }
        }
        else if(max == b)
        {
            if((c*c + a*a) == b*b) {
                std::cout << "right" <<"\n";
            }
            else {
                std::cout <<"wrong" << "\n";
            }
        }
        else {
            if((b*b + a*a) == c*c) {
                std::cout << "right" <<"\n";
            }
            else {
                std::cout <<"wrong" << "\n";
            }
        }

        
    }
    
    return 0;
}