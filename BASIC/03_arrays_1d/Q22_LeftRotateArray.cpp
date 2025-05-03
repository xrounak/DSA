#include <iostream>
using namespace std;   

void printarray(int arr[], int n){

    for(int i = 0; i<n; i++){
        int x = arr[i];
        cout << x << endl;
    }
}



void leftRotate(int arr[], int n){

    int first = arr[0];
    for(int i=0; i<n-1; i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]= first;
    printarray(arr,n);
}



int main() {
    int garr[5]={11,22,33,44,55};
    cout << "Before rotation" << endl;
    printarray(garr,5);
    cout << "After rotation" << endl;
    leftRotate(garr,5);
    cout << "After rotation" << endl;
    leftRotate(garr,5);
    cout << "After rotation" << endl;
    leftRotate(garr,5);
    return 0;
}