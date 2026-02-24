#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;

    cin>>n;

    int sum=0;
    for(int i=1; i<101; i++){
        if(sum+i<n){
            sum+=i;
            break;
        }
    }
    cout<<sum;
    return 0;
}