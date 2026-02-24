#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;

    cin>>n;

    for(int i=1; i<=n; i++){
        i%3==0||i%10==3||i%10==6||i%10==9? cout<<0:cout<<i;
        cout<<" ";
    }
    return 0;
}