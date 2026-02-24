#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    int i;
    for(i=1; n/i>=1; i++){
        n=n/i;
    }


    cout<<i<<endl;
    return 0;
}