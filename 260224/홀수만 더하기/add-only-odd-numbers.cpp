#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    int sum=0;

    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        if(temp%2!=0&&temp%3==0) sum+=temp;
    }

    cout<<sum;

    return 0;
}