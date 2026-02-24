#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    long long a,b;
    cin>>a>>b;

    cout<<a/b<<".";

    long long answer=a%b;

    for(int i=0; i<20;i++){
        answer*=10;
        cout<<answer/b;
        answer%=b;
    }
    return 0;
}