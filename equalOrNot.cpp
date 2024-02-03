/*
Write a program to check whether two numbers (entered by user) are equal or not.

Sample Input : 1,2
Sample Output : 0

Sample Input : 2,2
Sample Output : 1
*/

#include<iostream>
using namespace std;
int main(){

    int a,b;

    cout<<"Enter the first number : ";
    cin>>a;
    cout<<"Enter the Second Number : ";
    cin>>b;

    cout<<"Output : "<<(a==b)<<endl;
}