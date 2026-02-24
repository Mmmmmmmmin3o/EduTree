#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int answer=0;
    int cnt=0;
    for(int i=0; i<5; i++){
        int temp;
        cin>>temp;
        temp%2==0?cnt++:false;
    }
    cout<<cnt;
    return 0;
}