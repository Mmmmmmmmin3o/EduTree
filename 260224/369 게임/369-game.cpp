#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;

    cin>>n;

    for(int i=1; i<=n; i++){
        i%3==0 && (i%6==0||i%9==0)? cout<<0:cout<<i;
        cout<<" ";
    }
    return 0;
}