#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int m;
    cin>>m;
    for(int i=0; i<m; i++){
        int n;
        cin>>n;
        int stack=0;

        while(true){
            if(n==1) break;
            n%2==0?n/=2:n=n*3+1;
            stack++;
        }

        cout<<stack<<endl;
    }
    return 0;
}