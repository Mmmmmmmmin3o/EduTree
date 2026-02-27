#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    for(int i=1; i<n+1; i++){
        for(int j=0; j<i; j++){
            if(i%2!=0&&i!=1){
                cout<<"*";
                break;
            }
            else{ cout<< "* "; }
        }
        cout<<endl;
    }
    return 0;
}