#include<iostream>
using namespace std;
main(){
int minutes;
int frames;
int total_Frames;
cout<< " Number of Minutes: ";
cin >> minutes;
cout<< " Frames per second: ";
cin >> frames;

total_Frames = (minutes*60)*frames;
cout<<" Total number of Frames: "<< total_Frames;
}
