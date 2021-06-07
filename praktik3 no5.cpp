#include <iostream>
using namespace std;
 
int main () {
int p = 0; //banyaknya element data
int i; //untuk iterasi for
int sum = 0, max = 0, min = 0;
 		cout<<"Rafi Aulia Permana \n";
		cout<<"20051397071/D4 MI 2020A \n";
//minta user input banyaknya data
cout << "Banyaknya element yang diinput :";
cin >> p;
 
//bikin array dengan panjang a
int data[p];
 
//minta user input untuk tiap-tiap element
for(i = 0; i<p; i++) {
cout << "Input element ke ";
cout << i+1;
cout << " : ";
cin >> data[i];
}
//pake array
cout << "\n Pake Array :";
cout << "\n data yang anda masukan adalah "; //// hapus baris yang ini kalo nggag mau nampilin lagi elemennya
max = min = data[0];
for(i=0; i<p; i++) {
cout << data[i] << ','; // hapus baris yang ini kalo nggag mau nampilin lagi elemenya
sum = sum + data[i];
if (max < data[i]) {
max = data[i];
}
if (min > data[i]) {
min = data[i];
}
}
cout << "\n Jumlah data : " << sum;
cout << "\n Rata-rata : " << sum/p;
cout << "\n terkecil :" << min;
cout << "\n terbesar : " << max;
cout << "\n---------------------------\n";
 
//Pake pointer
sum = 0;
int *ptr;
ptr = data;
 
cout << "\n Pake Pointer :";
cout << "\n data yang anda masukan adalah "; 
max = min = *ptr;
for(i = 0; i<p; i++) {
cout << *(ptr + i) << ','; 
 
sum = sum + *(ptr + i);
if (max < *(ptr + i)) {
max = *(ptr + i);
}
if (min > *(ptr + i)) {
min = *(ptr + i);
}
}
cout << "\n Jumlah data : " << sum;
cout << "\n Rata-rata : " << sum/p;
cout << "\n terkecil :" << min;
cout << "\n terbesar : " << max;
return 0;
}
