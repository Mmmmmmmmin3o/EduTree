#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;

    cin>>n;

    int sum=0;
    for(int i=1; sum+i<=n; i++){
        sum+=i;
    }
    cout<<sum;
    return 0;
}