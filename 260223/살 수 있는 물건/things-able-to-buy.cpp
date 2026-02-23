#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    int book=3000;
    int mask=1000;

    if(n>=book){
        cout<<"book";
    }
    else if(n>=mask){
        cout<<"mask";
    }
    else{
        cout<<"no";
    }
    return 0;
}