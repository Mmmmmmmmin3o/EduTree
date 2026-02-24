#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b;

    cin>>a>>b;

    while(a<b+1){
        cout<<a<<" ";
        a%2==0?a=a+3:a=a*2;
    }
    return 0;
}