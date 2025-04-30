#include <iostream>
using namespace std;

int main () {
    int x;
    cout << "Enter the number of rows: ";
    cin >> x;
    cout << "The half pyramid is: " << endl;

    for(int i=0; i<x; i++){
        for (int j=0; j <= i; j++){
            printf(" * ");
        }
        printf("\n");
        
    }
    

  return 0;
}