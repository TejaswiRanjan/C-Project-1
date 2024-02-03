/*
Design a calculator to perform basic arithmetic operation(+,-,/,*)

Sample Input : 8   10
Sample Output :
Sum = 18
Difference = -2
Product = 80
Division = 0.8
*/

#include<iostream>
using namespace std;
int main(){

    float a,b;

    cout<<"Enter a First number : ";
    cin>>a;
    cout<<"Enter a Second number : ";
    cin>>b;

    float sum = a + b;
    cout<<"Sum = "<<sum<<endl;

    float difference = a - b;
    cout<<"Difference = "<<difference<<endl;

    float product = a * b;
    cout<<"Product = "<<product<<endl;

    float division = a / b;
    cout<<"Division = "<<division<<endl;

    



}
