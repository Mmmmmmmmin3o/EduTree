#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    int sum=0;

    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        sum+=temp;
    }

    printf("%d %.1f",sum,float(sum)/n);
    return 0;
}