#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<< "Enter the number of rows:";
    cin>> rows;

    int i=1;
    while(i<= rows){
        int j=1;
        while(j <= rows-i+1){
            cout<< j << " ";
            j++;
        }
        
        int k= 1;
        while(k <= i-1){
            cout<< "*" << " ";
            k++;
        }

        int h=1;
        while(h <= i-1){
            cout<< "*" << " ";
            h++;
        }

        int l=1;
        int val = rows - i + 1;
        while(l <= rows-i+1){
            cout<< val - l + 1 << " ";
            l++;
        }

        i++;
        cout<< endl;
    }
}