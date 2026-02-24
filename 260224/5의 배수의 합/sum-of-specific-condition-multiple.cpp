#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b;
    cin>>a>>b;

    int sum=0;

    if(a>b){
        for(int i=b; i<=a; i++){
            i%5==0?sum+=i:false;
        }
    }
    else if(a<b){
        for (int i=a; i<=b; i++){
            i%5==0?sum+=i:false;
        }
    }
    else{
        a%5==0?sum+=a:sum=0;
    }

    cout<<sum;
    return 0;
}