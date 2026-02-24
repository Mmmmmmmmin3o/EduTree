#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    (n%2!=0||n%8==0)?cout<<31:(n==2?cout<<28:cout<<30);
    return 0;
}