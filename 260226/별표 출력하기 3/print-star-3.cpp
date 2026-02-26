#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    int check=n;

    for(int i=n; i>0; i--){
        for(int j=0; j<2*i-1; j++){
            cout<<"* ";
        }
        cout<<endl;
        for(int x=n-i; x>=0; x--){
            cout<<"  ";
        }
    }
    return 0;
}