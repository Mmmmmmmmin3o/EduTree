#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    int cnt=n;
    
    for(int i=1; i<n+1; i++){
        for(int j=0; j<n; j++){
            if(j%2==0){
                cout<<i;
            }
            else cout<<cnt;
        }
        cnt--;
        cout<<endl;
    }
    return 0;
}