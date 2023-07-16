#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n;
    vector<int> n1;
    vector<int> n2;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        n1.push_back(k);
    }

    for (int i = 0; i < n; i++) {
        int l;
        cin >> l;
        n2.push_back(l);
    }

    sort(n1.begin(), n1.end());
    sort(n2.begin(), n2.end(), greater<>());

    int total = 0;
    for (int i = 0; i < n; i++) {
        total += n1[i] * n2[i];
    }
    cout << total;

    return 0;
}
