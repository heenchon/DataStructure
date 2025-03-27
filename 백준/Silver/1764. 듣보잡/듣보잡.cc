#include<iostream>
#include<unordered_set>
#include<string>
#include<set>
using namespace std;

int main() {
    unordered_set<string> name;
    int n, m;
    int answer= 0;
    set<string> dbj;
    
    cin >> n >> m;
    
    for(int i=0; i<n;++i) {
        string temp;
        std::cin>>temp;
        name.insert(temp);
    }
    
    for(int i =0;i<m; ++i) {
        string temp;
        std::cin >>temp;
        
        if(name.find(temp) !=name.end()) {
            dbj.insert(temp);
            ++answer;
        }
    }
    
    std::cout << answer <<"\n";
    for(int i =0; i<answer; ++i) {
        auto iter = std::next(dbj.begin(), i);
        std::cout<<*iter <<"\n";
    }
    return 0;
}