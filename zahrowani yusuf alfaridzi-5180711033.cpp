#include <iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>


using namespace std;
struct data{
int hrg,banyak;
char nma[10];
double totalbarang;};
struct member{
string nma,nmr;
};
data input[200];
data sorting;
member mem[5];
int i,a,n;
float total=0,h,j,diskon,totalbarang,potongan;
string member,nomormember,namapelanggan,yes,out;
char ke;



int main(){
mem [0].nma="Bayu";
mem [1].nma="Irvan";
mem [2].nma="Susiati";
mem [3].nma="Diana";
mem [4].nma="Roni";
mem [0].nmr="A001";
mem [1].nmr="A002";
mem [2].nmr="A003";
mem [3].nmr="A007";
mem [4].nmr="A008";
cout<<"***************SELAMAT DATANG DI TOKO MASUK***************"<<endl;
cout<<"APAKAH PELANGAN MEMBER(ya/tidak)? :"; cin>>member;
 if (member=="ya"){
cout<<"nomor member :";cin>>nomormember;
for(i=0;i<5;i++){
if (member=="tidak"){
cout<<"NAMA PELANGGAN :"; cin>>namapelanggan;
diskon=1;
potongan=0;out="BUKAN MEMBER";}
if(nomormember==mem[i].nmr){
    yes="ya";
    ke=i;}
}
if (yes=="ya"){
    cout<<"member yang ditemukan"<<endl;
    cout<<"nomor :"<<mem[ke].nmr<<endl;
    cout<<"nma  :"<<mem[ke].nma<<endl;
    diskon=0.95;
    potongan=5;out="mem";
}
else {cout<<"Nomor member tidak ditemukan !!!"<<endl;
      cout<<"nma pelanggan :"; cin>>namapelanggan;
      diskon=1;
      potongan=0;out="nonmem";}}

cout<<"JUMLAH ANDA BELANJA: ";
cin>>n;cout<<endl;
for (i=0;i<n;i++){
    cout<<"       Barang ke-"<<i+1<<endl;
    cout<<" NAMA BARANG      :" ;cin>>input[a].nma;
    cout<<" HARGA BARANG       :" ;cin>>input[a].hrg;
    h=input[a].hrg;
    cout<<" JUMLAH Barang     :" ;cin>>input[a].banyak;
    j=input[a].banyak;
    a++;
    input[a].totalbarang=j*h;
    cout<<"hrg total      :"<<input[a].totalbarang<<endl;
total=total+input[a].totalbarang;}

 int b;
 for(i=0;i<n;i++){
        for(b=0;b<n-1;b++){
if(input[b].hrg>input[b+1].hrg)
{
sorting.hrg=input[b].hrg;
input[b].hrg=input[b+1].hrg;
input[b+1].hrg=sorting.hrg;

strcpy(sorting.nma,input[b].nma);
strcpy(input[b].nma,input[b+1].nma);
strcpy(input[b+1].nma,sorting.nma);

sorting.banyak=input[b].banyak;
input[b].banyak=input[b+1].banyak;
input[b+1].banyak=sorting.banyak;
}}}

getch();system ("CLS");

cout<<endl;
a=b;
cout<<"Barang belanjaan"<<endl<<endl;
for(i=0;i<=a;i++){
cout<<" BARANG KE-"<<i+1<<endl<<endl;
cout<<" HARGA       :" <<input[i].hrg<<endl;
cout<<" BANYAK      :" <<input[i].banyak<<endl;
cout<<" NAMA        :" <<input[i].nma<<endl;}
cout<<"DISKON        :"<<potongan<<endl;
cout<<"BELANJA TOTAL :"<<total*diskon;
cout<<endl;
cout<<"***************TERIMAKSIH TELAH BERBELANJA***************"<<endl;

}
