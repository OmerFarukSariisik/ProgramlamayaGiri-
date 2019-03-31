/****************************************************************************
**					SAKARYA ÜNİVERSİTESİ
**			         BİLGİSAYAR VE BİLİŞİM BİLİMLERİ FAKÜLTESİ
**				    BİLGİSAYAR MÜHENDİSLİĞİ BÖLÜMÜ
**				          PROGRAMLAMAYA GİRİŞİ DERSİ
**
**				ÖDEV NUMARASI…...: Ödev 3
**				ÖĞRENCİ ADI...............: Ömer Faruk SARIIŞIK
**				ÖĞRENCİ NUMARASI.: G171210088
**				DERS GRUBU…………: C Grubu 2.Öğretim
****************************************************************************/

#include "stdafx.h"
#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main()
{
	int kelimeSayisi = 1;
	int noktIsaretSayisi = 0;
	string cumle;
	getline(cin, cumle);

	
	cout << endl << "Noktalama Isaretleri : ";

	for (int i = 0; i < cumle.length(); i++)		//Cumledeki tum noktalama isaretlerini bulur ve ekrana yazar. Ayrica noktalama isareti sayisini hesaplar
	{
		if (cumle[i] == '!') {
			cout << " ! ";
			noktIsaretSayisi++;
		}
		if (cumle[i] == '\'') {
			cout << " ' ";
			noktIsaretSayisi++;
		}
		if (cumle[i] == ':') {
			cout << " : ";
			noktIsaretSayisi++;
		}
		if (cumle[i] == '.') {
			cout << " . ";
			noktIsaretSayisi++;
		}
		if (cumle[i] == ',') {
			cout << " , ";
			noktIsaretSayisi++;
		}
		if (cumle[i] == ';') {
			cout << " ; ";
			noktIsaretSayisi++;
		}
		if (cumle[i] == '?') {
			cout << " ? ";
			noktIsaretSayisi++;
		}
		if (cumle[i] == '"') {
			cout << " \" ";
			noktIsaretSayisi++;
		}
	}

	for (int i = 0; i < cumle.length(); i++)		//Cumledeki bosluk sayisini kullanarak kelime sayisini hesaplar.
	{
		if (cumle[i] == ' ')
		{
			kelimeSayisi++;
		}
	}
	cout << "\n\nKelime Sayisi = " << kelimeSayisi << endl;
	cout << "Harf Sayisi = " << cumle.length() - kelimeSayisi + 1 - noktIsaretSayisi << endl;

	system("pause");
	return 0;
}

