#include <iostream>
#include <iomanip>
#include <map>
#include <vector>
#include <stack>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    vector<long long> a(n);
    for (auto &x:a) cin >> x;
    vector<long long> ans(n);
    stack<long long> s;
    for (int i=0; i<n; i++){
        while (!s.empty() && a[s.top()]<=a[i]) s.pop();
        if (!s.empty()) ans[i] = i-s.top();
        else ans[i] = i+1;
        s.push(i);
    }
    for (auto x:ans) cout << x << " ";
    return 0;
}
