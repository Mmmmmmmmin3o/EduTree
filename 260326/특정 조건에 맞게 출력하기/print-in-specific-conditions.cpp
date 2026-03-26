#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    while(true){
        int num;
        cin>>num;
        if(num==0) break;
        else if(num%2==0) num=num/2;
        else num=num+3;

        cout<<num<<" ";
    }
    return 0;
}