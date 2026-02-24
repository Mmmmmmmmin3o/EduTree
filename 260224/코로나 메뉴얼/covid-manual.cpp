#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char a,b,c;
    int temp_a,temp_b,temp_c;

    char answer='N';

    cin>>a>>temp_a>>b>>temp_b>>c>>temp_c;

    if(a=='Y' and temp_a>=37){
        if(b=='Y' and temp_b>=37){
            answer='E';
        }
        if(c=='Y' and temp_c>=37){
            answer='E';
        }
    }

    cout<<answer;
    
    return 0;
}