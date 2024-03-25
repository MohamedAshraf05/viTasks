/*Write a program in C++ to read n number of values in an array and display it in 
reverse order. */


#include <iostream> 
using namespace std;
int main(){
    int size ;


    cout << "Enter the number of values : " ;
    cin >> size ; 

    // creating the array 

    int arr[size];

    // adding data inside the array
    cout << "Enter your elements : " <<endl;
    for (int i = 0; i <= size; i++)
    {
        cout << "Element " << i+1  <<" : ";
        cin >> arr[i];
    }
    cout << "Values of the array in the reversed order : " << endl;
    for (int i = size ; i >= 0; i--)
    {
        cout << arr[i] << endl;
    }
    
}