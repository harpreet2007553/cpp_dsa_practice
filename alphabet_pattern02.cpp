#include<iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Enter the number of rows:";
    cin>> rows;

    int i=1;
    
    while(i<= rows){
        // char ch = 'A' + i -1;
        int j=1;
        while(j <= i){
            char ch = 'A' + j + rows - i - 1;
            cout << ch << " ";
            j++;
        }
        i++;
        cout << endl;
    }
}