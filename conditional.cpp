/*
Write a program to take the values of two variables a and b from the keyboard and then check if both the conditions 'a < 50' and 'a < b' are true.

Sample Input : 1,2
Sample Output : 1

Sample Input : 2,2
Sample Output : 0
*/

#include<iostream>
using namespace std;
int  main(){

int a,b;

cout<<"Enter the first variable : ";
cin>>a;
cout<<"Enter the second variable : ";
cin>>b;

cout<<"Output : "<<(a<50 && a<b)<<endl;
}