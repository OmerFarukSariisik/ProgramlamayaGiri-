/****************************************************************************
**					SAKARYA ÜNİVERSİTESİ
**			         BİLGİSAYAR VE BİLİŞİM BİLİMLERİ FAKÜLTESİ
**				    BİLGİSAYAR MÜHENDİSLİĞİ BÖLÜMÜ
**				          PROGRAMLAMAYA GİRİŞİ DERSİ
**
**				ÖDEV NUMARASI…...: 2.3
**				ÖĞRENCİ ADI...............: Ömer Faruk SARIIŞIK
**				ÖĞRENCİ NUMARASI.: G171210088
**				DERS GRUBU…………: C Grubu
****************************************************************************/

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	float a, b, c;  // (ax² + bx + c = 0)
	float delta;
	cout << " Fonksiyon icin a, b, c degerlerini giriniz." << endl;
	cout << " a : ";
	cin >> a;
	cout << " b : ";
	cin >> b;
	cout << " c : ";
	cin >> c;

	if (a == 1)			// 'a' değeri 1 ise gözükmemesini sağlar.
		cout << "Fonksiyonunuz : " << "x^2 + " << b << "x + " << c;
	else if (a == 0)	// 'a' değerinin 0 girilememesini sağlar.
	{
		cout << "Lutfen ikinci dereceden denklem giriniz.";
		system("pause");
		return 0;
	}
	else			// Fonksiyonu yazdırır.
		cout << "Fonksiyonunuz : " << a << "x^2 + " << b << "x + " << c;

	delta = b*b - 4 * a*c;
	if (delta < 0)   // Deltayı kontrol eder.
		cout << "\nBu fonksiyonun reel koku yok.";
	else if (delta == 0)    // Deltayı kontrol eder.
		cout << "\nBu fonksiyonun birbirine esit iki koku var.\n X = " << -b / (2 * a);
	else if (delta > 0)    // Deltayı kontrol eder.
	{
		cout << "\nIki ayri kok var.";
		cout << "\nX1 = " << (-b - sqrt(delta)) / (2 * a);
		cout << "\nX2 = " << (-b + sqrt(delta)) / (2 * a);
	}
	cout << endl;
	system("pause");
    return 0;
}

