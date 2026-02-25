#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int cnt=0;

    while(true){
        int temp;
        cin>>temp;

        if(temp%2==0){
            temp=temp/2;
            cout<<temp<<endl;
            cnt++;
        }
        if(cnt==3){
            break;
        }
    }
    return 0;
}