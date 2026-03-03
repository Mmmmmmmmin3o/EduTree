#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b;
    cin>>a>>b;

    for(int i=1; i<10; i++){
        for(int j=b; j>=a; j-=2){
            printf("%d * %d = %d", j,i,j*i);
            j<=a?cout<<endl:cout<<" / ";
        }
    }
    return 0;
}