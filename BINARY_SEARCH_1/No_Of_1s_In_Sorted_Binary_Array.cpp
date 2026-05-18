// Add implementation to count number of 1's in a sorted binary array
#include <iostream>
#include <vector>
using namespace std;

int firstOneIndex(const vector<int>& a) {
    int n = (int)a.size();
    int l = 0, r = n - 1, ans = -1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (a[mid] == 1) { ans = mid; r = mid - 1; }
        else { l = mid + 1; }
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n)) return 0; // no input
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    int idx = firstOneIndex(a);
    int count = (idx == -1) ? 0 : (n - idx);
    cout << count << "\n";
    return 0;
}
