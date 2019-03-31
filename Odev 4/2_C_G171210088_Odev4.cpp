
/****************************************************************************
**					SAKARYA ÜNİVERSİTESİ
**			         BİLGİSAYAR VE BİLİŞİM BİLİMLERİ FAKÜLTESİ
**				    BİLGİSAYAR MÜHENDİSLİĞİ BÖLÜMÜ
**				          PROGRAMLAMAYA GİRİŞİ DERSİ
**
**				ÖDEV NUMARASI…...: 4.Ödev
**				ÖĞRENCİ ADI...............: Ömer Faruk Sarıışık
**				ÖĞRENCİ NUMARASI.: G171210088
**				DERS GRUBU…………: 2.Öğretim  - C Grubu
****************************************************************************/

#include "stdafx.h"
#include <iostream>
using namespace std;

int i = 0, u = 0, randSayisi = 0;
int matris[10][10];

void olustur()
{
	for (i = 0; i < 10; i++)
	{
		for (u = 0; u < 10; u++)				//Matris olusturur.
		{
			matris[i][u] = rand() % 100 + 1;
			randSayisi++;
			for (int d = 0; d < i; d++)
				for (int f = 0; f < u; f++)			// Matris elemanlarinin birbirinden barkli olmasini saglar.
				{
					if (matris[i][u] == matris[d][f])
					{
						matris[i][u] = rand() % 100 + 1;
						randSayisi++;
					}
				}
		}
	}

}

void matrisYaz()
{
	for (i = 0; i < 10; i++)			// Matrisi ekrana yazdırır.
	{
		for (u = 0; u < 10; u++)
			cout << matris[i][u] << "\t";

		cout << endl;
	}
}

void sirala()
{
	int x = 100;
	for (i = 0; i < 10; i++)			// Matrisi siralar.
	{
		for (u = 0; u < 10; u++)
		{
			matris[i][u] = x;
			x--;
		}
	}
}


int main()
{
	cout << "Rasgele olusan ve elemanlari birbirinden farkli olan matris : " << endl;
	olustur();
	matrisYaz();
	cout << endl << endl;
	cout << "Buyukten Kucuge Siralanmis Matris : " << endl;
	sirala();
	matrisYaz();

	system("pause");
	return 0;
}

