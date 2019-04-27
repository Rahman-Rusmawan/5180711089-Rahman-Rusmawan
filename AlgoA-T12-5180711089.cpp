#include<stdlib.h>
#include<iostream>
#include<math.h>

using namespace std;

main()
{
int L[10],edit, hapus, cari, ketemu = 0,temp,j,r,a,h,m,n,u,s,w;
bool keadaan=0;

    cout<<"\n======= INSERT DATA ======"<<endl<<endl;
	cout << "Masukkan jumlah data : ";
	cin >>n;
	if (n>=10)
	{
		cout << "\nMaaf,Batas Max adalah 10!\n\n";
		do
        {
            cout << "Masukkan Jumlah Data = ";
            cin >>n;
        }
        while(n>=10);
	}
	else
	{
        for(int i=0;i<n;i++)
        {
          cout<<"Masukkan Data Ke-" << i + 1 << " : ";
          cin>>L[i];
        }
        for(int i=n-2;i>=0;i--)
        {
            for(int j=0;j<=i;j++)
            {
              if(L[j]>L[j+1])
                {
                    temp=L[j];
                    L[j]=L[j+1];
                    L[j+1]=temp;
                }
            }
            system("CLS");
        }
        for(int i=0;i<n;i++){cout<<"\nData Ke-"<<i+1<<" = "<<L[i];}
	}

	cout<<"\n\n======= SEARCHING DATA ======"<<endl;

	cout << "\nMasukkan Nilai Data Yang Dicari = "; cin >> cari;
	for (int r = 0; r<n; r++)
	{
		if (cari == L[r])
        {
            keadaan=true;
            keadaan++;
            if(keadaan==1)
            {
                cout << "\nNilai " << cari << " Terdapat pada index Ke- " << r+1 <<endl;
                ketemu = 1;
            }
		}
	}
	if (ketemu == 0) cout << "Maaf Data Yang Anda Cari Tidak Ditemukan!";

	cout<<"\n======= HAPUS DATA ======\n";

	cout << "\nMasukkan Nilai Data Yang Akan Dihapus = ";
	cin >> hapus;
	for (int a = 0; a < n; a++)
	{
		if (hapus == L[a])
		{
			for (int h = a; h < n; h++)
			{
				L[h]= L[h + 1];
			}
			n-= 1;
		}
	}
	cout << "\n\nData Baru :";
	for (int m = 0; m<n; m++)
	{
		cout << "\nData Ke-" << m+1 << " = " << L[m];
	}

	cout<<"\n\n======= EDIT DATA ======"<<endl;

	cout << "\nMasukkan Nilai Data Yang Diedit = "; cin >> edit;
	for (int u = 0; u<n; u++)
	{
		if (L[u] == edit)
		{
			cout << "Masukka Nilai Baru = "; cin >> L[u];
		}
	}
	for(int i=n-2;i>=0;i--)
    {
        for(int w=0;w<=i;w++)
        {
            if(L[w]>L[w+1])
            {
                temp=L[w];
                L[w]=L[w+1];
                L[w+1]=temp;
            }
        }
    }
    cout << "\nData Setelah Diedit = ";
    for(int s=0;s<n;s++){cout<<"\nData Ke-"<<s+1<<" ="<<L[s];}
}
