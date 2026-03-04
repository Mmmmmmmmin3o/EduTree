#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a[10];
    float avg=0;
    int sum=0;
    for(int i=0; i<10; i++){
        cin>>a[i];
        sum+=a[i];
        if(a[i]!=0) avg++;
        else break;
    }

    avg=sum/avg;

    printf("%d %.1f",sum,avg);
    return 0;
}