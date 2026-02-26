#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b,c;
    cin>>a>>b>>c;

    bool check=false;

    for(int i=a;i<b+1; i++){
        if(i%c==0){
            check=true;
            break;
        }
    }

    check?cout<<"NO":cout<<"YES";
    return 0;
}