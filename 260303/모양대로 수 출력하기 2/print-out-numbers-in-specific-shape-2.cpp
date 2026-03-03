#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    int temp=2;


    for(int i=0; i<n; i++){
        for(int j=1; j<n+1; j++){
            temp>8?temp=2: false;
            cout<<temp<<" ";
            temp+=2;
        }
        cout<<endl;
    }
    return 0;
}