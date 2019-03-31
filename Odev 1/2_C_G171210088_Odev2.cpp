/****************************************************************************
**					SAKARYA ÜNİVERSİTESİ
**			         BİLGİSAYAR VE BİLİŞİM BİLİMLERİ FAKÜLTESİ
**				    BİLGİSAYAR MÜHENDİSLİĞİ BÖLÜMÜ
**				          PROGRAMLAMAYA GİRİŞİ DERSİ
**
**				ÖDEV NUMARASI…...: 2.Ödev
**				ÖĞRENCİ ADI...............: Ömer Faruk Sarıışık	
**				ÖĞRENCİ NUMARASI.: G171210088
**				DERS GRUBU…………: 2.Öğretim - C Grubu
****************************************************************************/


#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int a, b, x = 0;

	cout << "20'den kucuk bir a degeri giriniz: ";
	cin >> a;
	cout << "a degerinden kucuk bir b degeri giriniz: ";
	cin >> b;

	while (a >= 20)    // Kullanıcı 20'den büyük bir değer girerse yeniden bir değer ister.
	{
		cout << "Olmadi. Bir a degeri giriniz: ";
		cin >> a;
		cout << "a degerinden kucuk bir b degeri giriniz: ";
		cin >> b;
	}

	while (a <= b)   // Kullanıcı a değerini b'den küçük girerse yeniden değer girmesini ister.
	{
		cout << "Olmadi. Bir a degeri giriniz: ";
		cin >> a;
		cout << "a degerinden kucuk bir b degeri giriniz: ";
		cin >> b;
	}

	cout << "1   ";

	for (x = 1; b > x; x++)		// x < b ise 1.satırda boşluk bırakır.
		cout << "    ";

	for (x = b; x <= a; x++)     // x, b ile a ya eşit veya arasında ise 1.satırda boşluk bırakır.
		cout << "    ";

	for (x = a + 1; x <= 20; x++)  // x, a'dan büyük ve 20'den küçük ise yıldız ekler.
		cout << "*   ";

	cout << endl << "0   ";

	for (x = 1; b > x; x++)  // x < b ise 0.satırda boşluk bırakır.
		cout << "    ";

	for (x = b; x <= a; x++)   // x, b ile a ya eşit veya arasında ise 0.satıra yıldız ekler.
		cout << "*   ";

	for (x = a + 1; x <= 20; x++)   // x, a'dan büyük ve 20'den küçük ise boşluk bırakır.
		cout << "    ";

	cout << endl << "-1  ";

	for (x = 1; b > x; x++)  // x < b ise -1.satıra yıldız ekler.
		cout << "*   ";

	for (x = b; x <= a; x++)   // x, b ile a ya eşit veya arasında ise -1.satırda boşluk bırakır.
		cout << "    ";

	for (x = a + 1; x <= 20; x++)   // x, a'dan büyük ve 20'den küçük ise boşluk bırakır.
		cout << "    ";

	cout << endl;

	system("pause");
	return 0;
}

