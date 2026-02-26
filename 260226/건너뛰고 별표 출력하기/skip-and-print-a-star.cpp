#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;



    for(int j=0; j<n; j++){
        for(int k=0; k<j+1; k++){
            cout<<"*";
        }
        cout<<"\n\n";
    }

    for(int i=n-1; i>0; i--){
        for(int j=i; j>0; j--){
            cout<<"*";
        }
        cout<<"\n\n";
    }
    return 0;
}