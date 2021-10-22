#include <iostream>
using namespace std;
typedef struct
{
    int nim;
    char matkul[50];
    float ip, poin, sks;
} data;
typedef data ip[101];
int main()
{
    ip daftar;
    int banyak;
    char lagi;
    do {
    cout<<"=APLIKASI MENGHITUNG IP/IPK="<<endl<<endl;
    cout<<"+---------------+"<<endl;
    cout<<"|    POIN       |"<<endl;
    cout<<"+---------------+"<<endl;
    cout<<"|    A  : 4     |"<<endl;
    cout<<"|    A- : 3.75  |"<<endl;
    cout<<"|    A/B: 3.5   |"<<endl;
    cout<<"|    B+ : 3.25  |"<<endl;
    cout<<"|    B  : 3     |"<<endl;
    cout<<"|    B- : 2.75  |"<<endl;
    cout<<"|    B/C: 2.5   |"<<endl;
    cout<<"|    C+ : 2.25  |"<<endl;
    cout<<"|    C  : 2     |"<<endl;
    cout<<"|    C- : 1.75  |"<<endl;
    cout<<"|    C/D: 1.5   |"<<endl;
    cout<<"|    D+ : 1.25  |"<<endl;
    cout<<"|    D  : 1     |"<<endl;
    cout<<"|    D- : 0.75  |"<<endl;
    cout<<"|    D/E: 0.5   |"<<endl;
    cout<<"|    E+ : 0.25  |"<<endl;
    cout<<"|    E  : 0     |"<<endl;
    cout<<"+---------------+"<<endl;
    cout<<endl<<"Banyak Matakuliah : ";
    cin>>banyak;
    cout<<endl;
    float total, skspoin, totalsks, ips;
    total=0;
    totalsks=0;
    for (int i=1;i<=banyak;i++)
    {
        cout<<"Matakuliah ke "<<i<<endl;
        cout<<"SKS      : ";
        cin>>daftar[i].sks;
        cout<<"Poin   : ";
        cin>>daftar[i].poin;
        skspoin=daftar[i].sks*daftar[i].poin;
        total=total+skspoin;
        totalsks=totalsks+daftar[i].sks;
        cout<<endl;
    }
    ips=total/totalsks;
    cout<<endl<<"Total SKS    : "<<totalsks<<endl;
    cout<<"IP Semester  : "<<ips<<endl;
    cout<<"Lagi ? [y/n] : ";
    cin>>lagi;
    }while (lagi!='n');
    return 0;}
