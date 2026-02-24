#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b,c;
    cin>>a>>b>>c;

    int min=a;
    if(min>b){
        min=b;
    }
    if(min>c){
        min=c;
    }
    a==min?cout<<1:cout<<0;
    cout<<" ";
    a==b==c?cout<<1:cout<<0;
    return 0;
}