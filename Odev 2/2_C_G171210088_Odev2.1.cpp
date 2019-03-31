/****************************************************************************
**					SAKARYA ÜNİVERSİTESİ
**			         BİLGİSAYAR VE BİLİŞİM BİLİMLERİ FAKÜLTESİ
**				    BİLGİSAYAR MÜHENDİSLİĞİ BÖLÜMÜ
**				          PROGRAMLAMAYA GİRİŞİ DERSİ
**
**				ÖDEV NUMARASI…...: Ödev 2.1
**				ÖĞRENCİ ADI...............: Ömer Faruk SARIIŞIK
**				ÖĞRENCİ NUMARASI.: G171210088
**				DERS GRUBU…………: C Grubu
****************************************************************************/

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int vize, Odev1, Odev2, Ksinav1, Ksinav2, final;
	int vizeEtkisi, odevEtkisi, sinavEtkisi, yiliciEtkisi;
	int yilici, yilsonu;

	cout << "Notlari gireceksiniz. Lutfen 0 ile 100 arasinda degerler giriniz !" << endl; 
	cout << "Vize notunu giriniz : ";                                            
	cin >> vize;											// Kullanıcıdan vize notunu alır.
	cout << "1.Odev notunu giriniz : ";
	cin >> Odev1;											// Kullanıcıdan 1.Ödev notunu alır.
	cout << "2.Odev notunu giriniz : ";
	cin >> Odev2;											// Kullanıcıdan 2.Ödev notunu alır.
	cout << "1.Kisa sinav notunu giriniz : ";
	cin >> Ksinav1;											// Kullanıcıdan 1.Kısa sınav notunu alır.
	cout << "2.Kisa sinav notunu giriniz : ";
	cin >> Ksinav2;											// Kullanıcıdan 2.Kısa sınav notunu alır.
	cout << "Final notunu giriniz : ";
	cin >> final;											// Kullanıcıdan final notunu alır.

	cout << "Vizenin yil icine etkisi yuzde ";
	cin >> vizeEtkisi;										// Kullanıcıdan vize etkisini alır
	cout << "Odevlerin yil icine etkisi yuzde ";
	cin >> odevEtkisi;										// Kullanıcıdan ödev etkisini alır.
	cout << "Kisa sinavlarin yil icine etkisi yuzde ";
	cin >> sinavEtkisi;										// Kullanıcıdan sınav etkisini alır.
	cout << "Yil icinin etkisi yuzde ";
	cin >> yiliciEtkisi;									// Kullanıcıdan yıl içi etkisini alır.

	yilici = vize * vizeEtkisi / 100 + ((Odev1 + Odev2) / 2) * odevEtkisi / 100 + ( (Ksinav1 + Ksinav2) / 2) * sinavEtkisi / 100;
	// Final dışındaki notları hesaplar.

	cout << endl;
	yilsonu = (yilici * yiliciEtkisi / 100) + final * (100 - yiliciEtkisi) / 100; // Tüm notları kullanarak yıl sonu puanını hesaplar.
	cout << "Yilsonu puaniniz ";
	cout << yilsonu << endl;
	
	if (yilsonu >= 90)							// Puan değerine göre harf notunu ekrana yazdırır.
		cout << "Notunuz : AA";
	else if (85 <= yilsonu && yilsonu < 90)
		cout << "Notunuz : BA";
	else if (80 <= yilsonu && yilsonu < 85)
		cout << "Notunuz : BB"; 
	else if (75 <= yilsonu && yilsonu < 80)
		cout << "Notunuz : CB";
	else if (65 <= yilsonu && yilsonu < 75)
		cout << "Notunuz : CC";
	else if (58 <= yilsonu && yilsonu < 65)
		cout << "Notunuz : DC";
	else if (50 <= yilsonu && yilsonu < 58)
		cout << "Notunuz : DD";
	else if (yilsonu <= 49)
		cout << "Notunuz : FF";
	cout << endl;

	system("pause");
    return 0;
}

