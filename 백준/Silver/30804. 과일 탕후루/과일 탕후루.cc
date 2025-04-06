#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

    int n;
    cin >> n;

    int result=0;
    vector<int> v(n, 0);
    vector<int> c(10, 0);
    
    for(int i=0; i<n; i++)
        cin >> v[i];

    int l=0, r=0;
    while(r<n)
    {
        c[v[r++]]++;
        while(10 - count(c.begin(), c.end(), 0) > 2)
            c[v[l++]]--;
        result = max(result, r-l);
    }
    cout << result;
    
    return 0;
}