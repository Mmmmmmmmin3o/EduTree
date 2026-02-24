#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    int i=1;
    while(true){
        n=n/i;
        if(n<=1){
            cout<<i<<endl;
            break;
        }
        i++;
    }
    return 0;
}