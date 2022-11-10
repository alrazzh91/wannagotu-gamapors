#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main() {
    string datainput;
    
    cout<<"Masukkan data Anda: ";
    cin>>datainput;
    
    string line= "";
    while (getline(line)) {
        int data;
        string tempString;
        string data;
        
        stringstream inputString(line);
        
        getline(inputString, data, '#');
        getline(inputString, tempString, '#');
    }
    
    return 0;
}
