#include<iostream>
using namespace std;

int setBits(int n){
    int count= 0;
    for(int i=1; i<=32; i++){
        int bit = n&1;
        if(bit == 1){
            count++;
        }
        n = n>>1;
    }
    return count;
}

int main(){
    int a,b;
    cout << "Enter the value of a:";
    cin >> a;
    cout << "Enter the value of b:";
    cin >> b;

    cout<<"The total number of set bits in a and b is : "<< setBits(a)+setBits(b);
}