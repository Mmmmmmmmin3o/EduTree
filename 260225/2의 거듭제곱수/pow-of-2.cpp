#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    int square=n;
    int cnt=0;


    while(square>1){
        square/=2;
        cnt++;
    }

    cout<<cnt;
    return 0;
}