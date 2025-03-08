#include<iostream>
#include<string>
#include<algorithm> 
#include<vector>

using namespace std;

string add(const string& a, const string& b) {
    int i = a.size() - 1, j = b.size() - 1;
    int carry = 0;
    string result = "";
    while(i >= 0 || j >= 0 || carry){
        int sum = carry;
        if(i >= 0) sum += a[i--] - '0';
        if(j >= 0) sum += b[j--] - '0';
        carry = sum / 10;
        result.push_back((sum % 10) + '0');
    }
    reverse(result.begin(), result.end());
    return result;
}

string subtract(const string& a, const string& b) {
    int i = a.size() - 1, j = b.size() - 1;
    int carry = 0;
    string result = "";
    while(i >= 0){
        int diff = (a[i]-'0') - carry;
        if(j >= 0) diff -= (b[j]-'0');
        if(diff < 0){
            diff += 10;
            carry = 1;
        } else {
            carry = 0;
        }
        result.push_back(diff + '0');
        i--; j--;
    }
   
    while(result.size() > 1 && result.back() == '0'){
        result.pop_back();
    }
    reverse(result.begin(), result.end());
    return result;
}

int main(){
    string strA, strB;
    cin >> strA >> strB;
    
 
    int signA = 1, signB = 1;
    if(strA[0] == '-'){
        signA = -1;
        strA = strA.substr(1); 
    }
    if(strB[0] == '-'){
        signB = -1;
        strB = strB.substr(1);
    }
    
    string result;

    if(signA == signB){
        result = add(strA, strB);
        if(signA == -1) result = "-" + result;
    } else {
        
        if(strA == strB){
            result = "0";
        } else if(strA.size() > strB.size() || (strA.size() == strB.size() && strA > strB)){
            result = subtract(strA, strB);
            if(signA == -1) result = "-" + result;
        } else {
            result = subtract(strB, strA);
            if(signB == -1) result = "-" + result;
        }
    }
    
    cout << result;
    
    return 0;
}