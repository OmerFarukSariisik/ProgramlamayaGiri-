/****************************************************************************
**					SAKARYA ÜNİVERSİTESİ
**			         BİLGİSAYAR VE BİLİŞİM BİLİMLERİ FAKÜLTESİ
**				    BİLGİSAYAR MÜHENDİSLİĞİ BÖLÜMÜ
**				          PROGRAMLAMAYA GİRİŞİ DERSİ
**
**				ÖDEV NUMARASI…...: 2.2
**				ÖĞRENCİ ADI...............: Ömer Faruk SARIIŞIK
**				ÖĞRENCİ NUMARASI.: G171210088
**				DERS GRUBU…………: C Grubu - 2.Öğretim
****************************************************************************/


#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

int main() {
	int N = 0, okIsareti = 0;
	int dizi[100];
	char secim;

	cout << "Dizi boyutunu giriniz :";
	cin >> N;

	srand(time(NULL));

	for (int i = 0; i < N; i++)		// Dizinin her elemanına rastgele bir sayı atar.
	{
		dizi[i] = rand() % 10;
	}

	do 
	{
		for (int i = 0; i < N; i++)		// Ok işaretini ve diziyi ekrana yazdırır.
		{
			if (i == okIsareti)
				cout << "--->" << dizi[i] << endl;
			else
				cout << setw(5) << dizi[i] << endl;
		}
		cout << "Girilen karakter 'a' veya 'A' ise asagi goturur." << endl;
		cout << "Girilen karakter 'd' veya 'D' ise yukari goturur." << endl;
		cout << "Girilen karakter 'c' veya 'C' ise program sonlanacak." << endl;
		cin >> secim;

		if (secim == 'a' || secim == 'A')	// Ok işaretini aşağı taşır.
		{
			if (okIsareti != N - 1)
				okIsareti++;
			system("cls");
		}
		else if (secim == 'd' || secim == 'D')	// Ok işaretini yukarı taşır.
		{
			if (okIsareti != 0)
				okIsareti--;
			system("cls");
		}
		cout << endl;
	} while (secim != 'c' && secim != 'C');		// Programı kapatır.

	return 0;
}