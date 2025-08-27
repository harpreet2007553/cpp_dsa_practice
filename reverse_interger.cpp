#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>> n;
    int reversedNumber;
    
    for(int i=0;n != 0; i++){
        int rem = n%10;
        cout<< rem;
        reversedNumber += rem;
        n = n/10;
    }
    cout<< endl;
}