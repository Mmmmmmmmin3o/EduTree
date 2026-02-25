#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    float avg=0;
    int cnt=0;
    while(true){
        int temp;
        cin>>temp;

        if(temp>29||temp<20){
            break;
        }

        avg+=temp;
        cnt++;
    }
    avg/=cnt;
    printf("%.2f",avg);
    return 0;
}