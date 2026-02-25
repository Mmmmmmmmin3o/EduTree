#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int mul=1;
    
    while(true){
        int x,y;
        cin>>x>>y;

        mul=x*y;

        char c;
        cin>>c;

        cout<<mul<<endl;
        
        if(c=='C'){
            break;
        }
    }
    return 0;
}