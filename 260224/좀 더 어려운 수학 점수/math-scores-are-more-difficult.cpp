#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a1,a2,b1,b2;

    cin>>a1>>a2>>b1>>b2;

    if(a1>b1){
        cout<<"A";
    }
    else if(b1>a1){
        cout<<"B";
    }
    else if(a1==b1){
        if(a2>b2){
            cout<<"A";
        }
        else if(b2>a2){
            cout<<"B";
        }
    }
    return 0;
}