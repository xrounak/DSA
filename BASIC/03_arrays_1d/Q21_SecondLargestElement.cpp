#include <iostream>
using namespace std;   



int find2Max(int arr[], int n){

    int max = arr[0];
    int Smax = arr[0];

    for(int i=0; i<n; i++){
        if(max<arr[i]){max = arr[i];}
    }
   
    for(int i=0; i<n; i++){
        if(Smax<arr[i] && max != arr[i]){
            Smax=arr[i];
        }
    }
    return Smax;
}

int main() {
    int garr[5]={32,1,32,65,32};
    cout << "Max number is " << find2Max(garr,5);
    return 0;
}