#include <iostream>
using namespace std;

float sum=0;

int main() {
    // Please write your code here.
    float grade[8];

    for(int i=0; i<8; i++){
        cin>>grade[i];
        sum=sum+grade[i];
    }

    float avg=sum/8;

    printf("%.1f", avg);
    return 0;
}