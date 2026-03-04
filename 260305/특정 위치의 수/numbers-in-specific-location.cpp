#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n=10;

    int arr[n];

    int sum=0;

    
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(i==2||i==4||i==9){
            sum+=arr[i];
        }
    }

    cout<<sum;
    return 0;
}