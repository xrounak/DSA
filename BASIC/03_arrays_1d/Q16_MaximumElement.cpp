#include <iostream>
using namespace std;   

// void printarray(int arr[], int n){

//     for(int i = 0; i<n; i++){
//         int x = arr[i];
//         cout << x << endl;
//     }
// }

int findMax(int arr[], int n){

    int max = arr[0];

    for(int i=0; i<n; i++){
        if(max<arr[i]){max = arr[i];}
    }

    return max;
}

int main() {

    int garr[5]={32,1,32,65,32};
    // printarray(garr,5);
    cout << "Max number is " << findMax(garr,5);

    return 0;
}