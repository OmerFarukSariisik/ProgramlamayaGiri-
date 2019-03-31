/****************************************************************************
**							SAKARYA ÜNİVERSİTESİ
**					BİLGİSAYAR VE BİLİŞİM BİLİMLERİ FAKÜLTESİ
**						BİLGİSAYAR MÜHENDİSLİĞİ BÖLÜMÜ
**						PROGRAMLAMAYA GİRİŞİ DERSİ
**
**				ÖDEV NUMARASI.......:4
**				ÖĞRENCİ ADI.........:Ömer Faruk SARIIŞIK
**				ÖĞRENCİ NUMARASI....:G171210088
**				DERS GRUBU..........:1-A
****************************************************************************/
#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class Sifre
{
public:
	Sifre(char* alfabe, char* sifre) {
		this->alfabe = alfabe;
		sifrekelimesi = sifre;
	};

	//char* sifrele(char* metin);

	//char* sifrecoz(char*);
	//void sifreKelimesiAta(char* metin);
private:
	char* alfabe;
	char* sifrekelimesi;
};

int main()
{	
	cout << "ALFABE                  :";
	char alf[27];
	cin >> alf;
	cout << "SIFRE                   :";
	char sifre[20];
	cin >> sifre;
	cout << "METIN                   :";
	char metin[50];
	cin >> metin;

	//Alfabedeki harfleri kullanarak vigenere tablosunu oluşturur.
	char vigenere[27][27];
	for (int i = 0; i < strlen(alf) + 1; i++)
		for (int j = 0; j < strlen(alf) + 1; j++) {
			if (i != 0 || j != 0) {
				if (i - 1 + j <= strlen(alf) - 1)
					vigenere[i][j] = alf[i - 1 + j];
				else
					vigenere[i][j] = alf[i - 1 + j - strlen(alf)];
			}
		}
	
	//Şifre BSM ise, "BSMBSMBSMBSM...." olacak şekilde yeni değişkene atar.
	//Yani girilen metin uzunluğunda yeni bir diziye atar.
	char sifrekelimesi[50];
	for (int i = 0; i < strlen(metin); i++)
		sifrekelimesi[i] = sifre[i % strlen(sifre)];

	//sifrekelimesini kaybedeceğim için başka bir değişkende tutmak istedim.
	char sifrekelimesi1[50];
	for (int i = 0; i < strlen(metin); i++)
		sifrekelimesi1[i] = sifrekelimesi[i];

	char* sifrelenmisMetin = sifrekelimesi; // sifrelenmis metin değiştiğinde sifrekelimesi de değişiyor.
	int satir, sutun;

	//Burada vigenere tablosu ilk satırından metnin harflerini, ilk sütunundan şifrenin harflerini buluyorum.
	//Sonra karşılık geldiği şifre karakterini (S-satır, B-sütun iken şifre U) pointer ile tutuyorum.
	for (int i = 0; i < strlen(metin); i++) {

		for (int x = 0; x < strlen(alf) + 1; x++) {
			if (vigenere[0][x] == metin[i])
				sutun = x;
		}

		for (int y = 0; y < strlen(alf) + 1; y++) {
			if (vigenere[y][0] == sifrekelimesi[i])
				satir = y;
		}
		sifrelenmisMetin[i] = vigenere[satir][sutun];
	}

	//Şifrelenmiş metni (örn:UTXCKL...) ekrana yazar.
	cout << "SIFRELENMIS METIN       :";
	for (int i = 0; i < strlen(metin); i++)
		cout << sifrelenmisMetin[i];

	//Deşifre metni (örn: SAKARYAUNIVERSITESI) ekrana yazar.
	cout << endl << "DESIFRE METIN           :";
	for (int i = 0; i < strlen(metin); i++) {
		if(sifrelenmisMetin[i] > sifrekelimesi1[i])
			cout << (char)(sifrelenmisMetin[i] - sifrekelimesi1[i] + 64);
		else
			cout << (char)(sifrelenmisMetin[i] - sifrekelimesi1[i] + 64 + strlen(alf));
	}
	cout << endl;
	system("PAUSE");
}

