#include <iostream>
using namespace std;

void StarPrinter(int n, int i){
    if(i==0||i==n-1){
        for(int j=0; j<n; j++){
            cout<<"* ";
        }
    }
    else{
        for(int j=0; j<n; j++){
            if(j==n-1||j==0) cout<<"* ";
            else if(j<i) cout<<"* ";
            else cout<<"  ";
        }
    }
    cout<<endl;
}

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        StarPrinter(n,i);
    }
    return 0;
}