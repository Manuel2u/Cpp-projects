#include<iostream>

using namespace std;

int main(){

float feet = 0, meters = 0, conversion = 0;

cout << "Enter your length in feet: " ;

cin >> feet;

conversion = 0.3048*feet ;

cout << "The length in meters is: "<< conversion;

return 0;

}
