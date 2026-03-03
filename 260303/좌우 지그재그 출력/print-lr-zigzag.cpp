#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    int cnt;
    int cnt2=0;

    for(int i=0; i<n; i++){
        cnt=(i+1)*n;
        for(int j=0; j<n; j++){
            cnt2++;
            if(i%2==0){
                cout<<cnt2<<" ";
            }
            else{
                cout<<cnt--<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}