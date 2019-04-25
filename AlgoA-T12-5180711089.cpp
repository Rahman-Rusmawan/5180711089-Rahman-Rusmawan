#include <conio.h>
#include <iostream>
using namespace std;

main()
{
int L[10],ganti, hapus, cari, ketemu = 0,temp,j,i,n,r;

    cout<<"\n======= INSERT DATA ======"<<endl<<endl;
	cout << "Masukkan jumlah data : ";
	cin >>n;
	if (n>=10)
	{
		cout << "\nMaaf, max jumlah data adalah 10!\n\n";
		do
        {
            cout << "Masukkan jumlah data : ";
            cin >>n;
        }
        while(n>=9);
	}
	else
	{
        for(int i=0;i<n;i++)
        {
          cout<<"Masukkan data ke-" << i + 1 << " : ";
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
        }
        cout<<"\nSetelah Sorting : "<<endl;
        for(int i=0;i<n;i++){cout<<"\nData Ke["<<i+1<<"]="<<L[i];}
	}

	cout<<"\n\n======= SEARCHING DATA ======"<<endl;

	cout << "\nMasukkan nilai data yang akan dicari = "; cin >> cari;
	for (int q = 0; q<n; q++)
	{
		if (cari == L[q])
        {
			cout << "\nNilai " << cari << " ditemukan pada index = " << q <<endl;
			ketemu = 1;break;
		}
	}
	if (ketemu == 0) cout << "Maaf data yang Anda cari tidak ada";

	cout<<"\n======= HAPUS DATA ======\n";

	cout << "\nMasukkan nilai data yang akan dihapus = ";
	cin >> hapus;
	for (int j = 0; j < n; j++)
	{
		if (hapus == L[j])
		{
			for (int k = j; k < n; k++)
			{
				L[k]= L[k + 1];
			}
			n-= 1;
			break;
		}
	}
	cout << "\n\nData Baru :";
	for (int p = 0; p<n; p++)
	{
		cout << "\nData Ke[" << p+1 << "]= " << L[p];
	}

	cout<<"\n\n======= EDIT DATA ======"<<endl;

	cout << "\nMasukkan nilai data yang akan diubah = "; cin >> ganti;
	for (int g = 0; g<n; g++)
	{
		if (L[g] == ganti)
		{
			cout << "Masukka nilai baru = "; cin >> L[g];
		}
	}
	for(int i=n-2;i>=0;i--)
    {
        for(int r=0;r<=i;r++)
        {
            if(L[r]>L[r+1])
            {
                temp=L[r];
                L[r]=L[r+1];
                L[r+1]=temp;
            }
        }
    }
    cout << "\nData setelah diubah";
    for(int h=0;h<n;h++){cout<<"\nData Ke["<<h+1<<"]="<<L[h];}
}
