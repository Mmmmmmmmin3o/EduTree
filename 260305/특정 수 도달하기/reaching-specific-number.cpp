#include <iostream>
using namespace std;

int sum=0;

int main() {
    // Please write your code here.
    int a[10];

    float avg=0;

    for(int i=0; i<10; i++){
        cin>>a[i];
    }
    
    for(int i=0; i<10; i++){
        if(a[i]>=250) break;

        sum+=a[i];
        avg++;
    }
    avg=sum/avg;

    printf("%d %.1f",sum,avg);
    return 0;
}