#include <iostream>
using namespace std;

;int main () {
    cout << "Enter three numbers. ";
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    if (a>b){
        if(a>c){
            cout << a << " is the biggest among three.";
        }
    }
    else{
        if (b>c){
            cout << b << " is the biggest among three.";
        }

        else{
            cout << c << " is the biggest among three.";
        }
        
    }


    return 0;
}