#include <iostream>
using namespace std;
int main() {
    int n, i, j;
    
    cout<<"Masukkan jumlah baris: ";
    cin>>n;
    
    int o= n/2*3;
    
    cout<<"Panah kanan"<<endl;
    for (i=0; i<n; i++){ 
        for (j=0; j<n; j++) { //baris
            if (i==n/2 || j-i==n/2 || i+j==o) { 
                cout<<"*";
            }
            else {
                cout<<" ";
            }
        }
        cout<<endl;   
    }
    
    cout<<"Panah kiri"<<endl;
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            if (i==n/2 || i-j==n/2 || i+j==n/2) {
                cout<<"*";
            }
            else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    
    return 0;
}
    
    
    
