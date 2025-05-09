#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        map<string, vector<string>> m;

        while (n--) {
            string name, kind;
            cin >> name >> kind;
            m[kind].push_back(name);
        }

        long long ans = 1;
        for (auto& [kind, items] : m) {
            ans *= (items.size() + 1);
        }
        cout << (ans - 1) << '\n';
    }
    return 0;
}
