#include<iostream>
#include<queue>
#include<vector>

int main() {
    int n , k;
    std::cin >>n>>k;
    
    std::queue<int> q;
    for(int i = 1; i<=n; ++i) {
        q.push(i);
    }
    
    std::vector<int> answer;
    while(!q.empty()){
        for(int i =0; i<k-1; ++i) {
            q.push(q.front());
            q.pop();
        }
        answer.push_back(q.front());
        q.pop();
    }
    
    std::cout<< "<";
    for(int i = 0; i<answer.size(); ++i) {
        if(i == answer.size()-1) {
            std::cout<<answer[i]<<">";
            return 0;
        }
        std::cout<<answer[i]<< ", ";
    }
    
    return 0;
}