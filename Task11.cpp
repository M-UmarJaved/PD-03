#include<iostream>
using namespace std;
main(){
int person_age;
int moves;
int avg_years;
cout<<" Enter the person's age: ";
cin >> person_age;
cout<<" Enter the number of times they've moved: ";
cin >> moves;
avg_years = (person_age/(moves+1));
cout<<" Average number of years lived in the same house: " << avg_years;
}