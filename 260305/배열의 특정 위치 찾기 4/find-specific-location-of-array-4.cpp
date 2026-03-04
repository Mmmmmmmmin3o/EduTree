#include <iostream>
using namespace std;

int cnt=0;
int sum=0;

int main() {
    // Please write your code here.
    int a[10];
    for(int i=0; i<10; i++){
        cin>>a[i];
        if(a[i]==0)break;
        else if(a[i]%2==0){
            cnt++;
            sum+=a[i];
        }
    }

    cout<<cnt<<" "<<sum;
    return 0;
}