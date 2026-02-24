#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b;
    cin>>a>>b;

    if(a>b){
        for(int i=a; i>b-1; i--){
            cout<<i<<" ";
        }
    }
    else if(a<b){
        for(int i=b; i>a-1; i--){
            cout<<i<<" ";
        }
    }
    else{
        cout<<a;
    }
    return 0;
}