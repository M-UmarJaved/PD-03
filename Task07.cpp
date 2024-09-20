#include<iostream>
using namespace std;
main(){
string movie_name;
int adult_ticket;
int child_ticket;
int no_adult_tickets;
int no_child_tickets;
int donation_percent;
int reamining;
int total;
cout<<" Enter the movie name: ";
cin >> movie_name;
cout<<" Enter the adult ticket price: $";
cin >> adult_ticket;
cout<<" Enter the child tickets price: $";
cin >> child_ticket;
cout<<" Enter the number of adult tickets sold: ";
cin >> no_adult_tickets;
cout<<" Enter the child tickets sold: ";
cin >> no_child_tickets;
cout<<" Enter the percentage of the amount to be donated to charity: ";
cin >> donation_percent;
total = (no_adult_tickets*adult_ticket) + (no_child_tickets*child_ticket);
donation_percent = (total*10)/100;
reamining = total - donation_percent;
cout<<"Movie: "<< movie_name << endl;
cout<<"Total amount of generated from ticket sales: $"<< total << endl;
cout<<"Donation to charity (10%): $"<< donation_percent << endl;
cout<<"Remaining amount after donation: $"<< reamining << endl;
}


