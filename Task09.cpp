#include<iostream>
using namespace std;
main(){
int number;
int sum;
int first_no;
int second_no;
int third_no;
int fourth_no;
cout<<" Enter a 4-digit: ";
cin >> number;
fourth_no = number % 10;
third_no = (number/10) % 10;
second_no = (number/100) % 10;
first_no = (number/1000) % 10;
sum = first_no + second_no + third_no + fourth_no;
cout<< " Sum of the individual digits: "<<sum;
}
