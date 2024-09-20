#include<iostream>
using namespace std;
main(){
string person;
int target_weight;
int days;
cout<< " Enter the Name of the person: ";
cin >> person;
cout<< " Enter the target weight loss in kilgrams: ";
cin >> target_weight;
days = target_weight * 15;
cout<< person<<" will need "<< days<< " days to lose "<< target_weight<<" kg of weight by following the doctor's suggestions";
}