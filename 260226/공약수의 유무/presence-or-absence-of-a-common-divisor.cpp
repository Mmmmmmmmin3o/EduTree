#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b;
    cin>>a>>b;

    int cnt=0;

    for(int i=a; i<b+1; i++){
        1920%i==0&&2880%i==0?cnt++:false;
    }
    
    cnt>0?cout<<1:cout<<0;
    return 0;
}