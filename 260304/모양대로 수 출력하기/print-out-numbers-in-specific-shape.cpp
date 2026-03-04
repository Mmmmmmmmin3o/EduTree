#include <iostream>
using namespace std;

void space(int n, int i){
    for(int j=0; j<(n-i)*2; j++){
        cout<<" ";
    }
}
int main() {
    // Please write your code here.
    int n;
    cin>>n;

    for(int i=n; i>0; i--){
        space(n, i);
        for(int j=i; j>0; j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}