#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        vector<pair<int, char>> operations;
        int cntB = 0, cntA = 0;
        bool found = false;

        for (int i = 0; i < n; i++) {
            if (s[i] == 'B') {
                cntB++;
            } else {
                cntA++;
            }

            if (cntB == k && cntA > 0) {
                found = true;
                operations.push_back({i + 1, 'A'});
                break;
            }
        }

        if (!found) {
            for (int i = n - 1; i >= 0; i--) {
                if (s[i] == 'A') {
                    operations.push_back({i + 1, 'B'});
                    k--;
                }
                if (k == 0) {
                    break;
            }
        }

        cout << operations.size() << endl;
        for (auto op : operations) {
            cout << op.first << " " << op.second << endl;
        }
    }

    return 0;
}

}