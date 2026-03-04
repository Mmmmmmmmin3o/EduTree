#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char alphabet=65;

    int n;
    cin>>n;

    for(int i=n; i>0; i--){
        for(int j=0; j<(n-i)*2; j++) cout<<" ";
        for(int j=0; j<i; j++){
            cout<<alphabet++<<" ";
            if(alphabet>90) alphabet=65;
        }
        cout<<endl;
    }
    return 0;
}