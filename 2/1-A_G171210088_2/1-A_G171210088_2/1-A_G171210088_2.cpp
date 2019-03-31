/****************************************************************************
**							SAKARYA ÜNİVERSİTESİ
**			         BİLGİSAYAR VE BİLİŞİM BİLİMLERİ FAKÜLTESİ
**						BİLGİSAYAR MÜHENDİSLİĞİ BÖLÜMÜ
**						PROGRAMLAMAYA GİRİŞİ DERSİ
**
**				ÖDEV NUMARASI.......:2
**				ÖĞRENCİ ADI.........:Ömer Faruk SARIIŞIK
**				ÖĞRENCİ NUMARASI....:G171210088
**				DERS GRUBU..........:1-A
****************************************************************************/

#include "pch.h"
#include <iostream>
#include <time.h>

using namespace std;
int main()
{
	bool kontrol = false;
	bool farkli = false;
	char temp;
	char Harf[5][10];
	srand(time(NULL));

	cout << endl << "Tekrarsiz ve Rastgele Dizi" << endl;
	for (int i = 0; i < 5; i++) {				//Hangi satırda olduğu bilgisini tutar.
		for (int j = 0; j < 10; j++) {				//Hangi sütunda olduğu bilgisini tutar.
			if (j % 2 == 0)								//Çift sayı olan sütunlarda büyük harf
				Harf[i][j] = rand() % 26 + 65;
			else											//Tek sayı olan sütunlarda küçük harf
				Harf[i][j] = rand() % 26 + 97;
			while (!farkli) {				//Yazılacak harf daha önce yazılmış mı diye kontrol eder.
				kontrol = false;			//Daha önce yazdırılan harflere eşitse tekrar rastgele sayı atar.
				for (int x = 0; x <= i; x++) {//Bu işlem, atanan harf önceki tüm harflerden farklı olana kadar devam eder.
					for (int y = 0; (x < i && y < 10) || (x == i && y < j); y++) {//Bulunduğumuz satırdaysa bulunduğumuz sütuna kadar, değilse tüm sütunları kontrol eder.
						if (Harf[i][j] == Harf[x][y]) {	//Yeni atanan önce yazdırılana eşitse ve,
							if (j % 2 == 0)					//sütun çiftse büyük harf,
								Harf[i][j] = rand() % 26 + 65;
							else							//sütun tekse küçük harf atar.
								Harf[i][j] = rand() % 26 + 97;
							kontrol = true;		//5. harf yazdıracaksak ve 4. harfe eşitse burda tekrar atama yaptığı
						}					//için 4.den öncekileri tekrar kontrol etmesi gerekir.
					}
				}
				if (kontrol == false) //Yeni harf önceki hiçbir harfe eşit değilse tekrar kontrol edilmez.
					farkli = true;	//Bu durumda while döngüsünden çıkar ve yeni harfi yazdırır.
			}
			farkli = false;

			cout << Harf[i][j] << "    ";
		}
		cout << endl << endl;
	}

	cout << endl << endl << "Siralanmis Dizi" << endl;
	for (int i = 0; i < 5; i++) {				//Hangi satırda olduğu bilgisini tutar.
		for (int j = 0; j < 10; j++) {				//Hangi sütunda olduğu bilgisini tutar.
			for (int m = i; m < 5; m++) {		//Kontrol edilecek satır.
				if (j != 9) {					//Değişecek harf son sütundaki harf değil ise,
					if (m == i)	//ve değişecek harfin olduğu satırdaysak,
						for (int n = j + 1; n < 10; n++) {	//o satırda bulunduğumuz sütundan sonraki sütunlara bakar.
							if (Harf[i][j] > Harf[m][n]) {	//Eğer değişecek harf kontrol edilenden büyükse,
								temp = Harf[i][j];
								Harf[i][j] = Harf[m][n];	//ikisinin değerlerini takas eder.
								Harf[m][n] = temp;
							}
						}
					else	//Değişecek harfin olduğu satırda değilsek, sütun 0 dan başlamalı.
						for (int n = 0; n < 10; n++) {	// O satırdaki tüm sütunları kontrol eder.
							if (Harf[i][j] > Harf[m][n]) {	//Eğer değişecek harf kontrol edilenden büyükse,
								temp = Harf[i][j];
								Harf[i][j] = Harf[m][n];	//ikisinin değerlerini takas eder.
								Harf[m][n] = temp;
							}
						}
				}
				else {			//Son sütundaki harfi değiştireceksek kontrole alt satırdan başlamalı.
					if (m == i && i != 4) //Aynı satırdaysa ve son satırda değilse alt satıra geçmeli.
						m++;
					if (i != 4)				//Son satırın son sütununda değişim işlemine ihtiyaç yoktur.
						for (int n = 0; n < 10; n++) {	// O satırdaki tüm sütunları kontrol eder.
							if (Harf[i][j] > Harf[m][n]) {	//Eğer değişecek harf kontrol edilenden büyükse,
								temp = Harf[i][j];
								Harf[i][j] = Harf[m][n];	//ikisinin değerlerini takas eder.
								Harf[m][n] = temp;
							}
						}
				}
			}
			cout << Harf[i][j] << "    ";
		}
		cout << endl << endl;
	}
	system("PAUSE");
}