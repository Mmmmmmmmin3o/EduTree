#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b,c;

    cin>>a>>b>>c;

    int check=0;

    for(int i=a; i<b+1; i++){
        i%c==0?check++:false;
    }
    
    check>0?cout<<"YES":cout<<"NO";
    return 0;
}