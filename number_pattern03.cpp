#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<< "Enter the number of rows:";
    cin>> rows;

    int i=1;
    while (i<=rows){
        int j=1;
        while(j <= i-1){
            cout << " ";
            j++;
        }

        int k=1;
        while(k <= rows-i+1){
            cout << i;
            k++;
        }
        i++;
        cout<< endl;
    }

}