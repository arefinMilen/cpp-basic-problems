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

        // Count the number of negative elements
        int countNeg = count_if(a.begin(), a.end(), [](int x) { return x < 0; });

        // If there are no negative elements, the answer is 0
        if (countNeg == 0) {
            cout << "0\n";
        } else {
            // Otherwise, the answer is 1, and we make the smallest negative element 0
            cout << "1\n";
            auto minNeg = min_element(a.begin(), a.end());
            int index = distance(a.begin(), minNeg);
            cout << index + 1 << " 0\n";
        }
    }

    return 0;
}
