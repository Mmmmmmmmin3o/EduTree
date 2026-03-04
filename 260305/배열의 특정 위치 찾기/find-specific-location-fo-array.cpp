#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[10];

    int sum_2=0;
    int sum_3=0;

    float avg=0;

    for(int i=1; i<11; i++){
        cin>>arr[i];
        if(i%2==0){
            sum_2+=arr[i];
        }
        else if(i%3==0){
            sum_3+=arr[i];
            avg++;
        }
    }

    avg=sum_3/avg;

    printf("%d %.1f", sum_2, avg);
    return 0;
}