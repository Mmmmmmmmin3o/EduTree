#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;

    cin>>n;

    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;

        if(temp%3==0&&temp%2!=0) cout<<temp<<endl;
    }
    return 0;
}