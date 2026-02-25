#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin>>N;

    int cnt=0;

    while(N<1000){
        N%2==0?N=N*3+1:N=N*2+2;
        cnt++;
    }

    cout<<cnt;
    return 0;
}