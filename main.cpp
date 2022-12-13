#include <iostream>
#include <cmath>
using namespace std;
float conversion ();
int main (){
    conversion();
    return 0;
               }
float conversion (){
    float kmh;
    cout<<"Enter speed in km/h:";
    cin>>kmh;
    float ms = (kmh * 5)/18;
    cout<<"The speed "<<kmh<<" is in km/h"<< endl;
    cout<<"It has been converted into: "<< ms<<" m/s."<< endl;
    return ms;
}

