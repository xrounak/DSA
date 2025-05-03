#include <iostream>
using namespace std;

void printarray(int arr[], int n){

    for(int i = 0; i<n; i++){
        int x = arr[i];
        cout << x << " ";
    }

    cout << endl;
}

void revrse(int arr[], int n){
    int revArr[n];

    for(int i=0; i<n; i++){
        revArr[n-i-1]=arr[i];
    }
    printarray(revArr,n);

}

int main() {
    int n=7;
    int array[n] = {45,55,23,54,54,21,2};
    printarray(array,n);
    revrse(array,n);
    
    return 0;
}