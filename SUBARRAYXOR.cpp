#include<bits/stdc++.h>
using namespace std;
void test_case() {
    int N; cin >> N;
    for (int i = 0; i < N; i++) {
        int ans = (i ^ (i + 1));
        cout << ans << ' ';
    }
    cout << '\n';
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt; cin >> tt;
    while (tt--)
    test_case();
    return 0;
}