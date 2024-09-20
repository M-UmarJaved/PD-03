#include<iostream>
using namespace std;
main(){
float imposter_count;
float player_count;
float chances;
cout<<" Enter Imposter Count: ";
cin >> imposter_count;
cout<<" Enter Player Count: ";
cin >> player_count;
chances = 100 * (imposter_count/player_count);
cout<< " Chance of being an imposter: " << chances <<"%";
}
