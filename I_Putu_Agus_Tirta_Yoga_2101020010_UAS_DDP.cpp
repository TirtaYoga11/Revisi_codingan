/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main(){
    int 
        harga_makanan_minuman=0,
        jumlah_makanan_minuman=0,
        total_harga=0,
        jumlah_pemesanan=0,
        total_pembayaran=0,
        pembayaran,
        kembalian,
        diskon,
        kupon;
    char 
        menu,
        pilihan,
        ulang;
   
    string 
        nama,
        member;
    //menu
    cout << "=========================MENU=======================" << endl;
    cout << "===================DEMEN MAKAN RESTO================" << endl;
    cout << "--------Makanan---------||||||-------Minuman--------" << endl;
    cout << "A. Nasi Jinggo____Rp5.000|||G.Es Buah_______Rp10.000" << endl;
    cout << "B. Bakso_________Rp10.000|||H. Es Cincau____Rp15.000" << endl;
    cout << "C. Lalapan ayam__Rp20.000|||I. Es Cendol_____Rp7.000" << endl;
    cout << "D. AYam Geprek___Rp15.000|||J. Thai Tea_____Rp10.000" << endl;
    cout << "E. Nasi Campur___Rp10.000|||K. Cappucino____Rp10.000" << endl;
    cout << "F. Pecel Lele_____Rp5.000|||L. Air Mineral___Rp6.000" << endl;
    cout << "____________TERIMA KASIH SUDAH MEMESAN______________" << endl;
    cout << "=======Tekan 0 Untuk Menyelesaikan Pemesanan========" << endl;
    cout << endl;
    cout << "====================================================" << endl;
    cout << "Nama Pelanggan  \t \t \t \t: " ;
    cin >> nama ;
    cout << "====================================================z" << endl;
    cout << endl;
    //perulangan do while
    cout << "Silahkan Masukan Kode Pemesanan Yang Akan Anda Beli \t \t: " ;
    do {
    cin >> pilihan ;
    switch (pilihan) {
        case 'A' :
        case 'a' :
            cout << "Nasi jinggo  \t \t" ;
            harga_makanan_minuman = 5000 ;
            cout << " masukan jumlah pemesanan : " ;
            cin >> jumlah_makanan_minuman ;
            jumlah_pemesanan += jumlah_makanan_minuman ;
            cout << "\t \t \t total \t \t: Rp." << harga_makanan_minuman * jumlah_makanan_minuman << endl;
            cout << "\t \t \t \t \t : " ;
            total_pembayaran += harga_makanan_minuman * jumlah_makanan_minuman ;
            break ;
            
        case 'B' :
        case 'b' :
            cout << "Bakso  \t \t" ;
            harga_makanan_minuman = 10000 ;
            cout << " masukan jumlah pemesanan : " ;
            cin >> jumlah_makanan_minuman ;
            jumlah_pemesanan += jumlah_makanan_minuman ;
            cout << "\t \t \t total \t \t: Rp." << harga_makanan_minuman * jumlah_makanan_minuman << endl;
            cout << "\t \t \t \t \t : " ;
            total_pembayaran += harga_makanan_minuman * jumlah_makanan_minuman ;
            break ;
            
        case 'C' :
        case 'c' :
            cout << "Lalapan ayam \t \t" ;
            harga_makanan_minuman = 20000 ;
            cout << "masukan jumlah pemesanan  : " ;
            cin >> jumlah_makanan_minuman ;
            jumlah_pemesanan += jumlah_makanan_minuman ;
            cout << "\t \t \t total \t \t: Rp." << harga_makanan_minuman * jumlah_makanan_minuman << endl;
            cout << "\t \t \t \t \t : " ;
            total_pembayaran += harga_makanan_minuman * jumlah_makanan_minuman ;
            break ;
            
        case 'D' :
        case 'd' :
            cout << "Ayam Geprek \t \t" ;
            harga_makanan_minuman = 15000 ;
            cout << " masukan jumlah pemesanan   : " ;
            cin >> jumlah_makanan_minuman ;
            jumlah_pemesanan += jumlah_makanan_minuman ;
            cout << "\t \t \t total \t \t: Rp." << harga_makanan_minuman * jumlah_makanan_minuman << endl;
            cout << "\t \t \t \t \t : " ;
            total_pembayaran += harga_makanan_minuman * jumlah_makanan_minuman ;
            break ;
            
        case 'E' :
        case 'e' :
            cout << "Nasi Campur\t \t" ;
            harga_makanan_minuman = 10000 ;
            cout << " masukan jumlah pemesanan : " ;
            cin >> jumlah_makanan_minuman ;
            jumlah_pemesanan += jumlah_makanan_minuman ;
            cout << "\t \t \t total \t \t: Rp." << harga_makanan_minuman * jumlah_makanan_minuman << endl;
            cout << "\t \t \t \t \t : " ;
            total_pembayaran += harga_makanan_minuman * jumlah_makanan_minuman ;
            break ;
            
        case 'F' :
        case 'f' :
            cout << "Pecel Lele \t \t " ;
            harga_makanan_minuman = 12000 ;
            cout << " masukan jumlah pemesanan  : " ;
            cin >> jumlah_makanan_minuman ;
            jumlah_pemesanan += jumlah_makanan_minuman ;
            cout << "\t \t \t total \t \t: Rp." << harga_makanan_minuman * jumlah_makanan_minuman << endl;
            cout << "\t \t \t \t \t : " ;
            total_pembayaran += harga_makanan_minuman * jumlah_makanan_minuman ;
            break ;
            
        case 'G' :
        case 'g' :
            cout << "Es Buah \t \t" ;
            harga_makanan_minuman = 10000 ;
            cout << " masukan jumlah pemesanan : " ;
            cin >> jumlah_makanan_minuman ;
            jumlah_pemesanan += jumlah_makanan_minuman ;
            cout << "\t \t \t total \t \t: Rp." << harga_makanan_minuman * jumlah_makanan_minuman << endl;
            cout << "\t \t \t \t \t : " ;
            total_pembayaran += harga_makanan_minuman * jumlah_makanan_minuman ;
            break ;
            
        case 'H' :
        case 'h' :
            cout << "Es Cincau \t \t" ;
            harga_makanan_minuman = 15000 ;
            cout << " masukan jumlah pemesanan : " ;
            cin >> jumlah_makanan_minuman ;
            jumlah_pemesanan += jumlah_makanan_minuman ;
            cout << "\t \t \t total \t \t: Rp." << harga_makanan_minuman * jumlah_makanan_minuman << endl;
            cout << "\t \t \t \t \t : " ;
            total_pembayaran += harga_makanan_minuman * jumlah_makanan_minuman ;
            break ;
            
        case 'I' :
        case 'i' :
            cout << "Es Cendol \t \t" ;
            harga_makanan_minuman = 10000 ;
            cout << " masukan jumlah pemesanan : " ;
            cin >> jumlah_makanan_minuman ;
            jumlah_pemesanan += jumlah_makanan_minuman ;
            cout << "\t \t \t total \t \t: Rp." << harga_makanan_minuman * jumlah_makanan_minuman << endl;
            cout << "\t \t \t \t \t : " ;
            total_pembayaran += harga_makanan_minuman * jumlah_makanan_minuman ;
            break ;
            
        case 'J' :
        case 'j' :
            cout << "Thai Tea \t \t" ;
            harga_makanan_minuman = 10000 ;
            cout << " masukan jumlah pemesanan : " ;
            cin >> jumlah_makanan_minuman ;
            jumlah_pemesanan += jumlah_makanan_minuman ;
            cout << "\t \t \t total \t \t: Rp." << harga_makanan_minuman * jumlah_makanan_minuman << endl;
            cout << "\t \t \t \t \t : " ;
            total_pembayaran += harga_makanan_minuman * jumlah_makanan_minuman ;
            break ;
            
        case 'K' :
        case 'k' :
            cout << "Cappucino \t \t" ;
            harga_makanan_minuman = 10000 ;
            cout << " masukan jumlah pemesanan : " ;
            cin >> jumlah_makanan_minuman ;
            jumlah_pemesanan += jumlah_makanan_minuman ;
            cout << "\t \t \t total \t \t: Rp." << harga_makanan_minuman * jumlah_makanan_minuman << endl;
            cout << "\t \t \t \t \t :  " ;
            total_pembayaran += harga_makanan_minuman * jumlah_makanan_minuman ;
            break ;
        
        
        case 'L' :
        case 'l' :
            cout << "Air Mineral \t \t" ;
            harga_makanan_minuman = 5000 ;
            cout << " masukan jumlah pemesanan : " ;
            cin >> jumlah_makanan_minuman ;
            jumlah_pemesanan += jumlah_makanan_minuman ;
            cout << "\t \t \t total \t \t: Rp." << harga_makanan_minuman * jumlah_makanan_minuman << endl;
            cout << "\t \t \t \t \t : " ;
            total_pembayaran += harga_makanan_minuman * jumlah_makanan_minuman ;
            break ;
            
        case '0' :
            cout << "=========================================" << endl;
            cout << "total pemesanan \t \t \t \t: " << jumlah_pemesanan << endl;
            cout << "total belanja\t \t \t \t \t:Rp." << total_pembayaran << endl;
            cout << "=========================================" << endl;
            pilihan = 0 ;
            break ;
        
        default :
            cout << "kode anda salah tolong anda memasukan kode yang benar  !!!" << endl;
            break ;
        }
    
    }while (pilihan != 0 ) ;
        
            cout << "memiliki member Ya/Tidak?\t \t \t: ";
            cin >> member;
            cout << "========================================" <<endl;
            cout << "\t \t| PEMBAYARAN |\t \t" << endl;
            cout << "========================================" <<endl;
        
       if (member == "Ya") {
           cout << "Tersedia 3 Kupon khusus member yaitu : " << endl;
           cout << "1. Kupon 1 \n" << "2. Kupon 2 \n" << "3. Kupon 3\n" << "Pilih Kupon : ";
            cin >> kupon;
            switch(kupon) {
                case 1 :
                cout << "Kupon 1" << endl;
                cout << "Anda mendapatkan diskon 10% !";
                if ((total_pembayaran >= 50000) && (total_pembayaran < 70000)) {
                    diskon = total_pembayaran * 0.1 ;
                    total_harga = total_pembayaran - diskon ;
                    cout << "\t \t diskon 10%"" \t \t-Rp." << diskon << endl;
                } else if ((total_pembayaran >= 70000) && (total_pembayaran < 100000)){
                    diskon = total_pembayaran * 0.1 ;
                    total_harga = total_pembayaran - diskon ;
                    cout << "\t \tdiskon 10%""\t \t-Rp."<< diskon << endl;
                }else if (total_pembayaran >= 100000){
                    diskon = total_pembayaran * 0.1 ;
                    total_harga = total_pembayaran - diskon ;
                    cout << "\t \tdiskon 10%""\t \t-Rp." << diskon << endl;
                }else {total_harga = total_pembayaran ;}
                break;

                case 2 :
                cout << "Kupon 2" << endl;
                cout << "Anda mendapatkan diskon 10% !";
                if ((total_pembayaran >= 50000) && (total_pembayaran < 70000)) {
                    diskon = total_pembayaran * 0.1 ;
                    total_harga = total_pembayaran - diskon ;
                    cout << "\t \t diskon 10%"" \t \t-Rp." << diskon << endl;
                } else if ((total_pembayaran >= 70000) && (total_pembayaran < 100000)){
                    diskon = total_pembayaran * 0.1 ;
                    total_harga = total_pembayaran - diskon ;
                    cout << "\t \tdiskon 10%""\t \t-Rp."<< diskon << endl;
                }else if (total_pembayaran >= 100000){
                    diskon = total_pembayaran * 0.1 ;
                    total_harga = total_pembayaran - diskon ;
                    cout << "\t \tdiskon 10%""\t \t-Rp." << diskon << endl;
                }else {total_harga = total_pembayaran ;}
                break;

                case 3:
                cout << "Kupon 3" << endl;
                cout << "Anda mendapatkan diskon 10% !";
                if ((total_pembayaran >= 50000) && (total_pembayaran < 70000)) {
                    diskon = total_pembayaran * 0.1 ;
                    total_harga = total_pembayaran - diskon ;
                    cout << "\t \t diskon 10%"" \t \t-Rp." << diskon << endl;
                } else if ((total_pembayaran >= 70000) && (total_pembayaran < 100000)){
                    diskon = total_pembayaran * 0.1 ;
                    total_harga = total_pembayaran - diskon ;
                    cout << "\t \tdiskon 10%""\t \t-Rp."<< diskon << endl;
                }else if (total_pembayaran >= 100000){
                    diskon = total_pembayaran * 0.1 ;
                    total_harga = total_pembayaran - diskon ;
                    cout << "\t \tdiskon 10%""\t \t-Rp." << diskon << endl;
                }else {total_harga = total_pembayaran ;}
                break;
            }
        }else if (member == "Tidak"){
            if (total_pembayaran >= 0){
            cout << "Anda tidak mendapat diskon karena anda tidak memiliki member di Resto kami"<< endl;
            total_harga = total_pembayaran;
        }
        }
        
            cout << "\t \ttotal pembayaran \t Rp." << total_harga << endl;
            cout << "\t \tjumlah pembayaran\t Rp." ;
            cin >> pembayaran ;
            cout << "\t \t========================================" << endl;
            kembalian = pembayaran - total_harga ;
            cout << " \t \ttotal kembalian \t Rp." << kembalian << endl;
            cout << endl;
            cout << "\t \tterimakasih sudah berbelanja di Resto kami\t \t" << endl;
            
}