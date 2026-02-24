#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b,c;

    cin>>a>>b>>c;

    a>b?(a>c?cout<<a:cout<<c):(b>c?cout<<b:cout<<c);
    return 0;
}