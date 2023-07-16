#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int time;
    int young = 0, min = 0;

    cin >> time;

    for (int i = 0; i < time; i++) {
        int temp;
        cin >> temp;
        young += (temp / 30 + 1) * 10;
        min += (temp / 60 + 1) * 15;
    }

    if (min < young) {
        cout << "M " << min;
    } else if (min > young) {
        cout << "Y " << young;
    } else {
        cout << "Y M " << min;
    }

    return 0;
}
