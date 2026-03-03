#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int a,b;

    cin>>a>>b;

    for(int i=1; i<a+1; i++){
        for(int j=1; j<b+1; j++){
            cout<<i*j<<" ";
        }
        cout<<endl;
    }
    return 0;
}