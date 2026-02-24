#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    int sum=0;

    for(int i=1; i<n+1; i++){
        if(i%n!=0){
            n%i==0? sum+=i:false;
        }
    }

    sum==n?cout<<"P":cout<<"N";
    return 0;
}