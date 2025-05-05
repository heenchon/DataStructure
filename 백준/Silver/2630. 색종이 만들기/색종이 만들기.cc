#include<iostream>
using namespace std;

int n;
int paper[128][128] = {0};
int blue = 0;
int white = 0;

bool isUniform(int x, int y, int size) {
    int base = paper[x][y];
    for(int i =x; i<x+size; ++i) {
        for(int j =y; j<y+size; ++j) {
            if(paper[i][j] != base) {
                return false;
            }
        }
    }
    return true;
}

void slice(int x, int y, int size) {
    if(isUniform(x,y,size)) {
        if(paper[x][y]) {
            ++blue;
        }
        else{
            white++;
        }
    }
    else{
        slice(x,y,size/2);
        slice(x,y+size/2,size/2);
        slice(x+size/2,y,size/2);
        slice(x+size/2,y+size/2,size/2);
    }
}

int main() {
    cin >> n;
    
    
    for(int i =0; i<n; ++i) {
        for(int j =0; j<n; ++j) {
            cin >> paper[i][j];
        }
    }
    
    slice(0,0,n);
    cout << white << '\n' << blue << '\n';
    
    return 0;
}