#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,a;
    cin>>n>>a;

    int i=1;

    while(i<n+1){
        i++%a==0?cout<<1:cout<<0;
        cout<<endl;
    }
    return 0;
}