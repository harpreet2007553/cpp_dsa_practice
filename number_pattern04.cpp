#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<< "Enter the number of rows:";
    cin>>rows;

    int i=1;
    while(i <= rows){
        int k=1;
        while(k <= i-1){
            cout<< " ";
            k++;
        }

        int j=1;
        while(j <= rows-i+1){
            cout << i+j-1;
            j++;
        }
        i++;
        cout<<endl;
    }
}