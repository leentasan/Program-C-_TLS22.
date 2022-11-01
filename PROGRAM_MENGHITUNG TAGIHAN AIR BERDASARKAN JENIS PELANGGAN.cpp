//PROGRAM UNTUK MENGHITUNG JUMLAH TAGIHAN AIR BERDASARKAN JENIS PELANGGAN

#include <iostream>
using namespace std;

int main()
{
    char JenisPelanggan; 
	int MeterAir, HargaSementara, HargaAkhir;
	bool isNunggak = true;
    int R[12]={1000,2000,3000,4000,5000,6000,7000,8000,9000,10000,11000,12000};

    
    cout << "jenis pelanggan yang manakah anda? (Tuliskan dengan memasukkan angka!)" << endl;
    cout << "1. Jenis pelanggan kelas A \n2. Jenis pelanggan kelas B \n3. Jenis pelanggan kelas C \n4. Jenis pelanggan kelas D \n5. Keluar program" << endl;
    cin >> JenisPelanggan;
    cout << "\nSeberapa banyak konsumsi air anda? (Tuliskan dalam meter kubik)" << endl;
    cin >> MeterAir;
    
    switch(JenisPelanggan){
        case '1':{
			if (MeterAir >= 0 && MeterAir <= 10){
                HargaSementara = MeterAir * R[0];
            } else if (MeterAir >= 11 && MeterAir <= 21){
                HargaSementara = MeterAir * R[1];
            } else if(MeterAir > 21){
                HargaSementara = MeterAir * R[2];
            }
			break;
		} case '2':{
        	if (MeterAir >= 0 && MeterAir <= 10){
                HargaSementara = MeterAir * R[3];
            } else if (MeterAir >= 11 && MeterAir <= 21){
                HargaSementara = MeterAir * R[4];
            } else if(MeterAir > 21){
                HargaSementara = MeterAir * R[5];
            }
			break;
		} case '3':{
        	if (MeterAir >= 0 && MeterAir <= 10){
                HargaSementara = MeterAir * R[6];
            } else if (MeterAir >= 11 && MeterAir <= 21){
                HargaSementara = MeterAir * R[7];
            } else if(MeterAir > 21){
                HargaSementara = MeterAir * R[8];
            } 
			break;
		} case '4':{
        	if (MeterAir >= 0 && MeterAir <= 10){
                HargaSementara = MeterAir * R[9];
            } else if (MeterAir >= 11 && MeterAir <= 21){
                HargaSementara = MeterAir * R[10];
            } else if(MeterAir > 21){
                HargaSementara = MeterAir * R[11];
            } 
			break;
		} case '5':{
			break;
		}       
        }
        
	    cout << "\nApakah anda telat dalam membayar tagihan? \n(ketik 0 untuk tidak dan 1 untuk ya)" << endl; 
		cin >> isNunggak ;
		  
		if (isNunggak){
		  	HargaAkhir = HargaSementara + 30000;
		} else {
			HargaAkhir = HargaSementara + 10000;
		} 
		
		cout << "\nTagihan yang harus anda bayarkan adalah Rp. " << HargaAkhir << endl;
  
  
    return 0;

}
