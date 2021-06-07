#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    //Deklarasi variabel
   int val[50];
   int i, n, t;

   //Input
   cout <<endl;
   cout <<"-----Pengurutan Menaik Metode Shell Shot---- \n\n";
   cout <<"Masukkan Total Data yg akan diurutkan : "; cin >>n;
   cout <<endl;
    for (i=0; i < n; i++)
   {
       cout <<"Nilai ke-"<<1+i<<"  : ";cin>>val[i];
   }

   //Shell Sort
    for (int w = n/2; w > 0;w=w/2)
    {
       for (int x = w; x < n; x++)
      {
          for (int y = x-w; y >= 0; y-=w)
         {
             if(val[y+w] < val[y]) //Note
            {
                t=val[y+w];
               val[y+w]=val[y];
               val[y]=t;
            }
         }
      }
   }

   //Mencetak data setelah diurutkan
   cout <<endl;
   cout <<" DATA YG TELAH DIURUTKAN DENGAN MENGGUNAKAN SHELL SORT  \n";
   cout <<endl;
   for (i = 0; i < n; i++)
   {
       cout <<val[i]<<" ";
   }
   getch();
}
