/****************************************************************************
**							SAKARYA ÜNİVERSİTESİ
**			         BİLGİSAYAR VE BİLİŞİM BİLİMLERİ FAKÜLTESİ
**						BİLGİSAYAR MÜHENDİSLİĞİ BÖLÜMÜ
**						PROGRAMLAMAYA GİRİŞİ DERSİ
**
**				ÖDEV NUMARASI.......:1.1
**				ÖĞRENCİ ADI.........:Ömer Faruk SARIIŞIK
**				ÖĞRENCİ NUMARASI....:G171210088
**				DERS GRUBU..........:1-A
****************************************************************************/
#include "pch.h"
#include <iostream>

using namespace std;

int main()
{						//i değişkeni hangi satırda olduğumuzu tutar.
	for (int i = 0; i < 11; i++) {		
		for (int j = 0; j < 11; j++) {	//j hangi sütunda olduğumuzu tutar.
			if (j < 5 - i || j > 5 + i || j < i - 5 || j > 15 - i)
				cout << "* ";	// 4 koşuldan herhangi biri doğru ise ekrana yıldız,
			else
				cout << "  ";	// hepsi yanlış ise boşluk yazdırır.
		}
		cout << endl;//o satırdaki tüm sütunlarla  işimiz bitince alt satıra geçer.
	}
	system("PAUSE");
}