#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    int i, jumlah;
    char nama_mahasiswa [50][100];
    float nilai_tugas   [10];
    float nilai_uts     [10];
    float nilai_uas     [10];
    float total   [10];
    
    cout<<"\n========================================================================\n\n";
    cout<<"\n=============== PROGRAM MENAMPILKAN PROGRAM NILAI MAHASISWA ============\n\n";
    cout<<"\n===============               MUHAMMAD RAFI FARHAN          ============\n\n";
    cout<<"\n===============                     202131145               ============\n\n";
    cout<<"\n========================================================================\n\n";

   
        cout<<" Masukkan Jumlah mahasiswa = ";
		cin>>jumlah;
        cout<<endl;
       
        for (i=1;i<=jumlah;i++)
        {
            cout<<" Mahasiswa ke - "<<i<<endl; 
            cout<<" Nama Mahasiswa  = ";
			cin>>nama_mahasiswa [i];
            cout<<" Nilai Tugas     = ";
			cin>>nilai_tugas [i];
            cout<<" Nilai UTS       = ";
			cin>>nilai_uts [i];
            cout<<" Nilai UAS       = ";
			cin>>nilai_uas [i];
            total [i]=(nilai_tugas[i]*0.20)+(nilai_uts[i]*0.30)+(nilai_uas[i]*0.50);
            cout<<endl;
        }
        cout<<endl;
 
          cout<<" No   Nama Mahasiswa      Tugas  UTS  UAS    RATA  "<<endl;
          cout<<" --------------------------------------------------------------- "<<endl;   
       
        for (i=1;i<=jumlah;i++)
        {
            cout<<setiosflags (ios::left)<<"  "<<setw (8)<<i;
            cout<<setiosflags (ios::left)<<" "<<setw (15)<<nama_mahasiswa[i];
            cout<<setiosflags (ios::left)<<" "<<setw (5)<<nilai_tugas [i];
            cout<<setiosflags (ios::left)<<" "<<setw (5)<<nilai_uts [i];
            cout<<setiosflags (ios::left)<<" "<<setw (5)<<nilai_uas [i];
            cout<<setiosflags (ios::left)<<" "<<setw (5)<<total [i];
           
            cout<<endl;
        }

        cout<<endl<<endl;

}
