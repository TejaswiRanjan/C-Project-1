/*
Write a program to calculate the sum of digits a 3 digit number.

Sample Input : 123
Sample Output : 6

*/

#include<iostream>
using namespace std;
int main(){

int a,m,sum = 0;
cout<<"Enter a three digit number : ";
cin>>a;

for(int i = 0;i<3;i++){

    m=a%10;
    sum = sum +m;
    a=a/10;
}
cout<<"The sum is : "<<sum<<endl;
}