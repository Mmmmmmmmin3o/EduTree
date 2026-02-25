#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;

    cin>>n;

    int cnt=0;

    while(true){
        if(n==1){
            break;
        }
        n%2==0?n/=2:n=n*3+1;
        cnt++;
    }

    cout<<cnt<<endl;

    return 0;
}