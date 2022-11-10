#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double x1, x2, y1, y2, distance;
    cout<<"x1: ";
    cin>>x1;
    cout<<"y1: ";
    cin>>y1;
    cout<<"x2: ";
    cin>>x2;
    cout<<"y2: ";
    cin>>y2;
    
    distance= pow(pow((x1-x2), 2) + pow((y1-y2), 2), 0.5);
    cout<<"Distance: "<<distance;
    
    return 0;
} 

