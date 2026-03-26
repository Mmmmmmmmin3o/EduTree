#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    int count=2;
    int arr[n];
    arr[0]=1;
    arr[1]=n;

    while(true){
        arr[count]=arr[count-1]+arr[count-2];
        if(arr[count]>99) break;
        count++;
    }

    for(int i=0; i<count+1; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}