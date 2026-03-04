#include <iostream>
using namespace std;

void space(int n, int i){
    for(int j=0; j<(n-i)*2; j++) cout<<" ";
}
int main() {
    // Please write your code here.
    int n;
    cin>>n;

    int cnt=1;

    for(int i=n; i>0; i--){
        space(n, i);
        for(int j=0; j<i; j++){
            cnt>9?cnt=1:false;
            cout<<cnt++<<" ";
        }
        cout<<endl;
    }
    return 0;
}