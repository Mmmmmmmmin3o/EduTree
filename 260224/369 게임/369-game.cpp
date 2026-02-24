#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;

    cin>>n;

    for(int i=1; i<=n; i++){
        int count=true;
        int temp=i;
        if(i%3==0){
            count=false;
        }
        while(temp>0){
            int digit=temp%10;
            if(digit==3||digit==6||digit==9){
                count=false;
                break;
            }
            temp/=10;
        }

        if(count==false){
            cout<<count<<" ";
        }
        else cout<<i<<" ";
        
    }
    return 0;
}