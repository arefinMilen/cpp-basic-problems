#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int countNeg = count_if(a.begin(), a.end(), [](int x) { return x < 0; });

        // If all elements are non-negative, the answer is 0
        if (countNeg == 0) {
            cout << "0\n";
        } else {
            // Otherwise, the answer is 1 for each negative element
            cout << countNeg << endl;
            for (int i = 0; i < n; ++i) {
                if (a[i] < 0) {
                    cout << i + 1 << " 0\n";
                }
            }
        }
    }

    return 0;
}

