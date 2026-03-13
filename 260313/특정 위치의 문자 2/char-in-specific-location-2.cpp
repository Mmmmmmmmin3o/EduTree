#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int stack=0;
    while(true){
        char temp;
        cin>>temp;

        if(stack==4||stack==7||stack==1){
            cout<<temp<<" ";
        }
        if(stack<10){
            stack++;
        }
        if(stack==9){
            break;
        }
    }
    return 0;
}