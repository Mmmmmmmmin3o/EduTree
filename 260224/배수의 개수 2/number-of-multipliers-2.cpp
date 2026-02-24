#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int cnt=0;

    for(int i=0; i<10; i++){
        int temp;
        cin>>temp;

        temp%2!=0?cnt++:true;
    }
    cout<<cnt;
    return 0;
}