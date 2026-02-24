#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;

    cin>>n;

    int sum=0;

    int i=0;

    if(n>100){
        cout<<10;
    }
    else{
        while(sum+i<=n){
            sum+=i++;
        }
    }

    cout<<sum;
    return 0;
}