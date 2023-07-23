#include <iostream>
#include <algorithm>
//#include <vector>

using namespace std;

int main() {
    int num;
    int a, b, temp;

    cin >> num;

    int va[num];
    int vb[num];

    for (int i=0; i<num; i++){
        cin >> a >> b;
        va[i] = a;
        vb[i] = b;
    }
    
    sort(va, va+5);
    sort(vb, vb +5);

    for (int i=0; i<num; i++){
        printf("%d %d\n", va[i], vb[i]);
    }

    return 0;
}