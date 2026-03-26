#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    int check=0;
    int loop=1;

    while(true){
        cout<<n*loop<<" ";
        if(n*loop%5==0){
            check++;
        }
        if(check==2){
            break;
        }
        loop++;
    }
    return 0;
}