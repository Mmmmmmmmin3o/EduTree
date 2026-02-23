#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;

    cin>>n;

    int answer=n*n;

    if(n>4){
        printf("%d",answer);
    }
    else{
        printf("%d\ntiny",answer);
    }
    return 0;
}