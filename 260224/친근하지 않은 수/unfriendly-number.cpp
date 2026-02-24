#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    int cnt=0;

    for(int i=1; i<n+1; i++){
        if(i%2==0||i%3==0||i%5==0){
            cnt++;
        }
    }
        

    cout<<n-cnt;

    return 0;
}