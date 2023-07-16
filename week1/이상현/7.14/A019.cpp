#include <string>
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main(){
    int total = 1;
    int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0, i = 0, j = 0;

    for(int i=0; i< 3; i++){
        int k;
        cin >> k;
        while (k < 100 || k >= 1000){
            cin >> k;
        }
        total = total * k;
    }

    string total_st = to_string(total);
    for (char digit : total_st) {
        switch(digit){
            case '1':
                a++;
                break;
            case '2':
                b++;
                break;
            case '3':
                c++;
                break;
            case '4':
                d++;
                break;
            case '5':
                e++;
                break;
            case '6':
                f++;
                break;
            case '7':
                g++;
                break;
            case '8':
                h++;
                break;
            case '9':
                i++;
                break;
            case '0':
                j++;
                break;
        }
    }

    cout << j << "\n" << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << "\n" << f << "\n" << g << "\n" << h << "\n" << i << "\n";

    return 0;
}
