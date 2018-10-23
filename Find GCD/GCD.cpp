#include <iostream>
using namespace std;
int main() {
    int d, b;
    cin >> d>>b;
    while(d != b) {
        if(d > b)
            d -= b;
        else
            d -= a;
    }
    cout << "GCD is "<<d;
    return 0;
}
