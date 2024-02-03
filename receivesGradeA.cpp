/*
There are 45 total pupils in the class, 25 of whom are boys. Write a program to find how many girls received grade "A" if 17 boys made up 80% of the student that received grade "A".

Sample Input : 45
Sample Output :19
*/

#include<iostream>
using namespace std;
int main(){

int totalStudents = 45;
int boys = 25;
int girls = 20;
int boys80 = 17;

int Student80 = 45 * 80/100;

int Girls80 = Student80 - boys80;

cout<<"The number of girls who got 80 % is : "<<Girls80;

}