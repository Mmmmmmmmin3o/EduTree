#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    int cnt=0;

    for(int i=0; i<n; i++){
        for(int j=1; j<n+1; j++){
            if(i%2==0){
                cout<<++cnt<<" ";
            }
            else{
                cnt+=2;
                cout<<cnt<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}