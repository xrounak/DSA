#include <iostream>
using namespace std;

void printarray(int arr[], int n){

    for(int i = 0; i<n; i++){
        int x = arr[i];
        cout << x << " ";
    }

    cout << endl;
}

int isInscresing(int arr[], int n){

    for(int i=0; i<n-1; i++){
        if(arr[i]>arr[i+1]){
            return 0;
        }
    }
    return 1;
}

int isDecresing(int arr[], int n){

    for(int i=0; i<n-1; i++){
        if(arr[i]<arr[i+1]){
            return 0;
        }
    }
    return 1;
}

int main() {
    int n=7;
    int array[n] = {45,55,23,54,54,21,2};
    int array2[n] = {1,2,3,4,5,6,7};
    int array3[n] = {9,8,7,6,5,4,3};

    cout << isInscresing(array3,n);
    cout << isDecresing(array3,n);
    
    return 0;
}