#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char a,b,c;
    int temp_a,temp_b,temp_c;

    int cnt=0;

    cin>>a>>temp_a>>b>>temp_b>>c>>temp_c;

    if(a=='Y' and temp_a>=37){
        cnt++;
    }
    if(b=='Y' and temp_b>=37){
        cnt++;
    }
    if(c=='Y' and temp_c>=37){
        cnt++;
    }
    
    if(cnt>1) cout<<'E';
    else cout<<'N';
    
    return 0;
}