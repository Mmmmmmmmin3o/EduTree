#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    for(int i=1; i<n+1; i++){
        i%2==0||i%3==0?cout<<1:cout<<0;
        cout<<" ";
    }
    return 0;
}