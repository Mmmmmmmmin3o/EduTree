#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        int a,b;
        cin>>a>>b;

        int multiple=1;

        for(int j=a; j<=b; j++){
            multiple*=j;
        }
        cout<<multiple<<endl;
    }


    return 0;
}