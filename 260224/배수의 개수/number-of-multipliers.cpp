#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int cnt_3=0;
    int cnt_5=0;

    for(int i=0; i<10; i++){
        int temp;
        cin>>temp;

        temp%3==0?cnt_3++:false;
        temp%5==0?cnt_5++:false;
    }
    cout<<cnt_3<<" "<<cnt_5;
    return 0;
}