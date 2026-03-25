#include <iostream>
using namespace std;

int square(int x, int square){
    x*=x;
    return x;
}

int main() {
    // Please write your code here.
    int N;
    cin>>N;
    int arr[N];

    for(int i=0; i<N; i++){
        int num;
        cin>>num;
        arr[i]=square(num, N);

        cout<<arr[i]<<" ";
    }
    return 0;
}