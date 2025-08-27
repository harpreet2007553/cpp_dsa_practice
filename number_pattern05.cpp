#include<iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Enter the number of rows:";
    cin>> rows;

    int i=1;
    while(i<=rows){
        int k=1;
        while(k<= rows-i){
            cout<< "  ";
            k++;
        }
        int j=1;
        while(j<=i){
            cout<< j << " ";
            j++;
        }

        int c=1;
        while(c<= i-1){
            cout<< c << " ";
            c++;
        }

        i++;
        cout << endl;
    }
}