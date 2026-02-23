#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b;
    cin>>a>>b;

    int first = a<b?true:false;
    int second = a==b?true:false;

    cout<<first<<" "<<second;
    return 0;
}