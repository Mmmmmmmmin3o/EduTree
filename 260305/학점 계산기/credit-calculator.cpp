#include <iostream>
using namespace std;

float sum=0;

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    float grade[n];

    for(int i=0; i<n; i++){
        cin>>grade[i];
        sum+=grade[i];
    }

    float avg=sum/n;

    printf("%.1f\n",avg);

    avg>3.9?cout<<"Perfect":(avg>2.9?cout<<"Good":cout<<"Poor");
    return 0;
}