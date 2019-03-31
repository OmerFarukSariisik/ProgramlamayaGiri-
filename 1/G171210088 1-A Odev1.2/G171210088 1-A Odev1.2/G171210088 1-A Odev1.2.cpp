/****************************************************************************
**							SAKARYA ÜNİVERSİTESİ
**			         BİLGİSAYAR VE BİLİŞİM BİLİMLERİ FAKÜLTESİ
**						BİLGİSAYAR MÜHENDİSLİĞİ BÖLÜMÜ
**						PROGRAMLAMAYA GİRİŞİ DERSİ
**
**				ÖDEV NUMARASI.......:1.2
**				ÖĞRENCİ ADI.........:Ömer Faruk SARIIŞIK
**				ÖĞRENCİ NUMARASI....:G171210088
**				DERS GRUBU..........:1-A
****************************************************************************/

#include "pch.h"
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	char harf;
	int sayiA = 0, sayiE = 0, sayiO = 0, sayiO2 = 0, sayiI = 0, sayiI2 = 0, sayiU = 0, sayiU2 = 0;
	int enBuyuk = 0;
	bool devam = true;
	int sayac = 0;
	char karakter[50];
	cout << "Lütfen en fazla 50 karakterlik cümle giriniz:\n";
	while (devam) {					//Enter tuşuna basılana kadar girilen karakterleri alır 
		karakter[sayac] = _getwche();	// ve sesli harflerden biri ise o sesli harfin sayacını artırır.
		harf = karakter[sayac];
		if (karakter[sayac] != 'Ö' && karakter[sayac] != 'Ü' && karakter[sayac] != 'I' && karakter[sayac] != 'İ')
		{
			harf = tolower(karakter[sayac]);	// Büyük harfleri küçültür.
		}
		switch (harf)
		{
		case 'a': sayiA++;
			break;
		case 'e': sayiE++;
			break;
		case '1': sayiI++;
			break;
		case 'ı': sayiI++;
			break;
		case 'I': sayiI++;
			break;
		case 'i': sayiI2++;
			break;
		case '0': sayiI2++;
			break;
		case 'o': sayiO++;
			break;
		case 'ö': sayiO2++;
			break;
		case 'Ö': sayiO2++;
			break;
		case 'u': sayiU++;
			break;
		case 'ü': sayiU2++;
			break;
		case 'Ü': sayiU2++;
			break;
		default:
			break;
		}
		if (karakter[sayac] == char(13))	// Girilen karakter enter ise döngüden çıkar.
			devam = false;
		sayac++;
	}
	// En çok girilen sesli harfi bulur ve tekrar sayısını tutar.
	enBuyuk = max(max(max(max(max(max(max(sayiA, sayiE), sayiI), sayiI2), sayiO), sayiO2), sayiU), sayiU2);

	cout << "\n\nH\t\tTS";
	for (int i = 1; i <= enBuyuk; i++) {  //1 den başlayarak en çok tekrar sayısına kadar sayıları ekrana yazdırır.
		cout << "\t" << i;
	}
	cout << "\na\t\t" << sayiA << "\t";
	for (int i = 0; i < sayiA; i++) {  // A harfini, tekrar sayısı kadar ekrana yazdırır.
		cout << "a\t";
	}
	cout << "\ne\t\t" << sayiE << "\t";
	for (int i = 0; i < sayiE; i++) {  // E harfini, tekrar sayısı kadar ekrana yazdırır.
		cout << "e\t";
	}
	cout << "\nı\t\t" << sayiI << "\t";
	for (int i = 0; i < sayiI; i++) {  // I harfini, tekrar sayısı kadar ekrana yazdırır.
		cout << "ı\t";
	}
	cout << "\ni\t\t" << sayiI2 << "\t";
	for (int i = 0; i < sayiI2; i++) {  // İ harfini, tekrar sayısı kadar ekrana yazdırır.
		cout << "i\t";
	}
	cout << "\no\t\t" << sayiO << "\t";
	for (int i = 0; i < sayiO; i++) {  // O harfini, tekrar sayısı kadar ekrana yazdırır.
		cout << "o\t";
	}
	cout << "\nö\t\t" << sayiO2 << "\t";
	for (int i = 0; i < sayiO2; i++) {  // Ö harfini, tekrar sayısı kadar ekrana yazdırır.
		cout << "ö\t";
	}
	cout << "\nu\t\t" << sayiU << "\t";
	for (int i = 0; i < sayiU; i++) {  // U harfini, tekrar sayısı kadar ekrana yazdırır.
		cout << "u\t";
	}
	cout << "\nü\t\t" << sayiU2 << "\t";
	for (int i = 0; i < sayiU2; i++) {  // Ü harfini, tekrar sayısı kadar ekrana yazdırır.
		cout << "ü\t";
	}
	cout << endl;
	system("PAUSE");
}