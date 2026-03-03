#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b;
    cin>>a>>b;

    int cnt=0;

    for(int i=1; i<10; i++){
        cnt=0;
        for(int j=b; j>=a; j-=2){
            printf("%d * %d = %d", j,i,j*i);
            cnt<b/a-1?cout<<" / ":cout<<endl;
            cnt++;
        }
    }
    return 0;
}