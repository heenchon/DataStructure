#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<string> board) {
    int answer = 1;
    int o=0;
    int x=0;
    
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            if(board[i][j]=='O')
                o++;
            else if(board[i][j]=='X')
                x++;
        }
    }
    
    int xWin = 0;
    int oWin = 0;
    
    for(int i=0; i<3; i++) {
        if (board[i][0]!='.' && board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
            if (board[i][0] == 'X')
                xWin++;
            else
                oWin++;
        }
    }

    for(int j=0; j<3; j++) {
        if (board[0][j]!='.' && board[0][j] == board[1][j] && board[1][j] == board[2][j]) {
            if (board[0][j] == 'X')
                xWin++;
            else
                oWin++;
        }
    }
    
    if (board[0][0]!='.' && board[0][0] == board[1][1] && board[1][1] == board[2][2]) 
    {
        if (board[0][0] == 'X')
            xWin++;
        else
            oWin++;
    }
    
    if (board[2][0]!='.' && board[2][0] == board[1][1] && board[1][1] == board[0][2]) 
    {
        if (board[2][0] == 'X')
            xWin++;
        else
            oWin++;
    }   
    
    if(oWin>0 && xWin>0) answer=0;
    
    if(abs(x-o)>1) answer=0;
    
    if(x>o) answer=0;

    if(oWin>0 && o!=x+1) answer=0;

    if(xWin>0 && o!=x) answer=0;
    
    return answer;
}