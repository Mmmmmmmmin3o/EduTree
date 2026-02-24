#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    int a=1;

    while(a<n+1){
        if(a%3==0){
            cout<<a<<" ";
        }
        a++;
    }
    return 0;
}