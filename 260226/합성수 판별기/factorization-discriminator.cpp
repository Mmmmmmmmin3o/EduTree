#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    int check=0;

    for(int i=2; i<n; i++){
        n%i==0?check++:false;
    }

    check>0?cout<<"C":cout<<"N";

    return 0;
}