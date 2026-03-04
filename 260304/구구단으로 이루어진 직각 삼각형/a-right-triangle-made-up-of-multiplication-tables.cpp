#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    for(int i=n; i>0; i--){
        for(int j=1; j<i+1; j++){

            printf("%d * %d = %d",n-i+1,j,(n-i+1)*j);
            j==i?cout<<endl:cout<<" / ";


        }
    }
    return 0;
}