#include<iostream>
#include<string>

using namespace std;

int main() {
    int count;
    cin>>count;
    
    for(int i = 0; i<count; ++i) {
        int R;
        cin >> R;
        string S;
        cin >> S;
        
        string P = "";
        for(int j= 0; j<S.size(); ++j) {        
            for(int k =0; k<R; ++k) {
                P+=S[j];
            }
        }
        cout<<P;
        cout<<"\n";
    }
    
    return 0;
}