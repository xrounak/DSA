#include <iostream>
using namespace std;
 int main () {
    int n, fact = 1;
    cout << "Factorial of N. Where N = " << endl;
    cin >> n;
    for (int i=1; i<=n; i++){
        fact = i * fact;
    }
    cout << "is " << fact << endl;
    return 0;
 }