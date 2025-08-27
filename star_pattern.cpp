#include<iostream>
using namespace std;

int main(){
    int rows;
    cout << " Enter the number of rows :";
    cin >> rows;

    // int i=1;
    // while (i <= rows){
    //     int j=1;
    //     while(j <= rows-i){
    //         cout << " ";
    //         j++;
    //     }

    //     int k=1;
    //     while( k <= i){
    //         cout << "*";
    //         k++;
    //     }
    //     i++;
    //     cout<< endl;
    // }

    int i=0;
    while (i <= rows){
        int j=1;
        while(j <= rows-i){
            cout << "*";
            j++;
        }

        int k=1;
        while( k <= i){
            cout << " ";
            k++;
        }
        i++;
        cout<< endl;
    }
}