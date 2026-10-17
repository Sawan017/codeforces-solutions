#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        string s;
        cin >> n >> s;

        int first = -1, last = -1, cnt = 0;

        for (int j = 0; j < n; j++) {
            if (s[j] == '1') {
                cnt++;

                if (first == -1) {
                    first = j;
                }

                last = j;
            }
        }

        if (cnt == 2) {
            cout << 1 << '\n';
        } else {
            cout << last - first << '\n';
        }
    }

    return 0;
}