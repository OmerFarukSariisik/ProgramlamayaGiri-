/****************************************************************************
**							SAKARYA ÜNİVERSİTESİ
**					BİLGİSAYAR VE BİLİŞİM BİLİMLERİ FAKÜLTESİ
**						BİLGİSAYAR MÜHENDİSLİĞİ BÖLÜMÜ
**						PROGRAMLAMAYA GİRİŞİ DERSİ
**
**				ÖDEV NUMARASI.......:3
**				ÖĞRENCİ ADI.........:Ömer Faruk SARIIŞIK
**				ÖĞRENCİ NUMARASI....:G171210088
**				DERS GRUBU..........:1-A
****************************************************************************/

#include "pch.h"
#include <iostream>
#include <iomanip>

using namespace std;

struct Islem
{
	int giris[5][5] = { 3,2,5,1,4,
						6,2,1,0,7,
						3,0,0,2,0,
						1,1,3,2,2,
						0,3,1,0,0 };
	int cekirdek[5][5];
	int sonuc[100][100];
	int kaymaMiktari = 1;
	int cekirdekBoyutu;
	int sonucBoyut;
};
Islem islem;

void degerAl() {
	do {
		cout << "Cekirdek boyutunu giriniz:";
		cin >> islem.cekirdekBoyutu;
		cout << "\nKayma miktarini giriniz:";
		cin >> islem.kaymaMiktari;
		// Örnek olarak giriş matrisi 5x5 iken çekirdek boyutu da 5x5 ise hata vermemeli.

		if (islem.cekirdekBoyutu == size(islem.giris) && islem.kaymaMiktari == 1)
			break;		//Alttaki koşul kayma miktarının fazla girilmesini engeller.
		else if (islem.kaymaMiktari > size(islem.giris) - islem.cekirdekBoyutu) {
			cout << "Bu islem yapilamaz...";
			system("PAUSE");
		}//Örnek olarak çekirdek boyutu ve kayma miktarı 2 iken, son satırda çarpılmayan bir satır kalır. Alttaki koşul bunu engeller.
		else if (size(islem.giris) % islem.kaymaMiktari != 0 && size(islem.giris) != islem.cekirdekBoyutu + islem.kaymaMiktari) {
			cout << "Bu islem yapilamaz!..";
			system("PAUSE");
		}	//Yukarıdaki else if'lere girmez ise döngüden çıksın.

	} while (islem.kaymaMiktari > size(islem.giris) - islem.cekirdekBoyutu ||
		size(islem.giris) % islem.kaymaMiktari != 0 && size(islem.giris) != islem.cekirdekBoyutu + islem.kaymaMiktari);


	for (int i = 0; i < islem.cekirdekBoyutu; i++) //Çekirdek matrisinin elemanlarını kullanıcıdan alır.
		for (int j = 0; j < islem.cekirdekBoyutu; j++) {
			cout << "\ncekirdek[" << i << "][" << j << "] = ";
			cin >> islem.cekirdek[i][j];
		}
}

void HesaplaVeYaz(int cikisBoyut) {

	int sonucDegeri;
	for (int i = 0; i < islem.sonucBoyut; i++) { //Sonuç matrisinin elemanlarını hesaplamak için sonuç matrisinin
		for (int j = 0; j < islem.sonucBoyut; j++) { //boyutu kadar dönen döngü.

			sonucDegeri = 0;
			for (int m = 0; m < islem.cekirdekBoyutu; m++) //Çekirdeğin tüm elemanları ile çarpmak için bu elemanlara erişmeliyiz.
				for (int n = 0; n < islem.cekirdekBoyutu; n++) {
					sonucDegeri += islem.cekirdek[m][n] * islem.giris[m + islem.kaymaMiktari * i][n + islem.kaymaMiktari * j];
				}												 //Kayma miktarına göre işleme girecek elemanı bulur.

			islem.sonuc[i][j] = sonucDegeri;
			cout << setw(5) << left;
			cout << islem.sonuc[i][j];
		}
		cout << endl;
	}
}
int main()
{
	degerAl();		//Kullanıcıdan çekirdek boyutu, kayma miktarı ve çekirdek matrisi elemanlarını alır.

	cout << endl << endl;

	islem.sonucBoyut = ((size(islem.giris) - islem.cekirdekBoyutu) / islem.kaymaMiktari) + 1;

	HesaplaVeYaz(islem.sonucBoyut);		// İşlemi yapar ve sonuç matrisini ekrana yazdırır.

	system("PAUSE");
}
