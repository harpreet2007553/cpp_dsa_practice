#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int i = 2;
    bool isPrime = true;

    while (i <= (n/2)){
        if (n%i == 0){
            cout << n << " is not a prime number" << endl;
            isPrime = false;
            break;
        }
        i++;
    }
    if (isPrime == true){
        cout << n << " is a prime number" << endl;
    }
    
}