#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b;
    cin>>a>>b;

    int square=1;

    for(int i=1; i<b+1; i++){
        square*=a;
    }

    cout<<square;
    return 0;
}