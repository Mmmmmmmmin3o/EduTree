#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int money;
    cin>>money;

    int book=3000;
    int mask=1000;
    int pen=500;

    if(money>=book){
        cout<<"book";
    }
    else if(money>=mask){
        cout<<"mask";
    }
    else if(money>=pen){
        cout<<"pen";
    }
    else{
        cout<<"no";
    }
    return 0;
}