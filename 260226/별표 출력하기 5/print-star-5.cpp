#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    for(int a=n; a>0; a--){
        for(int i=0; i<a; i++){
            for(int j=0; j<a; j++){
                cout<<"*";
            }
            cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}