#include <iostream>
using namespace std;
int main() {
    int jb, harga, bayar, kembali, i, total=0;
    string nama, input, stop;
    
    cout<<"Program Kasir"<<endl;


        cout<<"Masukkan input: ";
        cin>>input;
            while (input=="stop") {
                cout<<"Program kasir berhenti"<<endl;
                break;
                cout<<endl;
            }

    while(input!="stop") {
        cout<<"Masukkan nama barang: ";
        cin>>nama;
        cout<<"Masukkan harga barang: ";
        cin>>harga;
        cout<<"Masukkan jumlah barang: ";
        cin>>jb;
        cout<<"Nama barang: "<<nama<<endl;
        cout<<"Harga barang: Rp "<<harga<<endl;
        cout<<"Jumlah barang: "<<jb<<endl;
        bayar= harga*jb;
        cout<<"Total bayar: "<<bayar<<endl;
        
        total=total+bayar;
        cout<<"Sub total: "<<total<<endl;
        cout<<endl; 
        cout<<"Masukkan input: ";
        cin>>input;
    }
        
    

    
  /*  while(input!="stop") {
        cout<<"Nama barang: "<<nama<<endl;
        cout<<"Harga barang: Rp "<<harga<<endl;
        cout<<"Jumlah barang: "<<jb<<endl;
        bayar= harga*jb;
        cout<<"Total bayar: "<<bayar;
    cout<<endl;
    }
  */  
    
    
    
    return 0;
}
