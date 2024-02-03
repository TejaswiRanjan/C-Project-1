/*
Write a program to calculate the sum of the first and the second last digit of a 5 digit number.

Sample input = 12345
Sample Output = 1 + 4 = 5
*/

#include<iostream>
using namespace std;
int main(){

    int number = 12345;

    number = number / 10;
    number = number % 10;

    cout<<"Output : "<<number;

    
}