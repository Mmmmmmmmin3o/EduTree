#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int check[10];
    int odd, even;
    odd=0;
    even=0;

    for(int i=0; i<10; i++){
        cin>>check[i];
        if(i%2==0) odd+=check[i];
        else even+=check[i];
    }

    if(odd>even) cout<<odd-even;
    else cout<<even-odd;

    return 0;
}