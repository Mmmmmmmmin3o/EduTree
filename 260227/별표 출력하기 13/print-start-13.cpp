#include <iostream>
using namespace std;

void starWalker(int n, int i){
    if(i%2==0){
        for(int j=n; j>i/2; j--) cout<<"* ";
    }
    else{
        for(int j=0; j<i/2+1; j++) cout<<"* ";
    }
    cout<<endl;
}
int main() {
    // Please write your code here.
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        starWalker(n,i);
    }
    for(int i=n-1; i>=0; i--){
        starWalker(n,i);
    }

    return 0;
}