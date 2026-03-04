#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int i=0;

    int arr[100];

    while(true){
        cin>>arr[i];
        if(arr[i]==0||i>101) break;
        i++;
    }

    int sum=0;


    for(int j=i-1; j>i-4; j--){
        sum=sum+arr[j];
    }

    cout<<sum;
    return 0;
}