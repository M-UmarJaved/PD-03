#include<iostream>
using namespace std;
main(){
int velocity;
int acceleration;
int time;
int final_vel;
cout<<" Enter Initial Velocity (m/s): ";
cin >> velocity;
cout<<" Enter Acceleration (m/s^2): ";
cin>> acceleration;
cout<<" Enter Time (s): ";
cin>> time;
final_vel = (acceleration*time) + velocity;
cout<< " Final Velocity (m/s): "<< final_vel;
}
