#include<iostream>
using namespace std;
main(){
int square_meters;
int width;
int height;
int no_walls;
cout<<" Number of square meters you can print: ";
cin>> square_meters;
cout<<" Width of the single wall (in meters): ";
cin>> width;
cout<<" Height of the single wall (in meters): ";
cin>> height;
no_walls = square_meters / (width*height);
cout<<" Number of walls you can print: "<<no_walls;
}
