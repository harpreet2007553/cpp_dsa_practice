#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ans=0;
    int bit;

    while(n!=0){
        bit = !(n&1);
        ans = ans*10 + bit;
        
        n = n>>1;
    }
    cout<< ans<< endl;
    int comp_bit;
    int i=0;
    int result = 0;
    while(ans != 0){
        comp_bit = ans&1;
        result = result + comp_bit*pow(2,i);
        i++;
        ans = ans>>1;
    }
    cout << result;
}