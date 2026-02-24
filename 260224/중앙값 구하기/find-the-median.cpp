#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b,c;

    cin>>a>>b>>c;

    a>b?(a>c?(c>b?cout<<c:cout<<b):cout<<a):(b>c?(c>a?cout<<c:cout<<a):cout<<b);
    return 0;
}