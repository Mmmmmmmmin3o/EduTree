#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    int row=n+2;

    for(int i=0; i<n; i++){
        for(int x=row; x>0; x--){
            cout<<" ";
        }
        row-=2;
        for(int j=0; j<=2*i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}