#include<iostream>
using namespace std;
main(){
float veg_price;
float fruit_price;
int total_veg;
int total_fruit;
float earning;
cout<<" Enter vegetable price per kilgram (in coins): ";
cin>> veg_price;
cout<<" Enter fruit price per kilogram (in coins): ";
cin>> fruit_price;
cout<<" Enter total kilograms of vegetables: ";
cin>> total_veg;
cout<<" Enter total kilograms of fruits: ";
cin>> total_fruit;
earning = ((total_veg * veg_price) + (total_fruit * fruit_price))/1.94;
cout<<" Total earning in Rupees (Rps): " << earning;
}