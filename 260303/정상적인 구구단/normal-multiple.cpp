#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    for(int i=1; i<n+1; i++){
        for(int j=1; j<n+1; j++){
            printf("%d * %d = %d",i,j,i*j);
            j==n?cout<<endl:cout<<", ";
        }
    }
    return 0;
}