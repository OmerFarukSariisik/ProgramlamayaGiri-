/****************************************************************************
**							SAKARYA ÜNİVERSİTESİ
**					BİLGİSAYAR VE BİLİŞİM BİLİMLERİ FAKÜLTESİ
**						BİLGİSAYAR MÜHENDİSLİĞİ BÖLÜMÜ
**						PROGRAMLAMAYA GİRİŞİ DERSİ
**
**				ÖDEV NUMARASI.......:Proje Ödevi
**				ÖĞRENCİ ADI.........:Ömer Faruk SARIIŞIK
**				ÖĞRENCİ NUMARASI....:G171210088
**				DERS GRUBU..........:1-A
****************************************************************************/
#include "pch.h"
#include <iostream>
#include "Windows.h"
#include "time.h"

using namespace std;


enum YON
{
	YON_YUKARI = 1,
	YON_ASAGI = 2,
	YON_YOK = 3
};

struct UzayGemisi
{
	int x;
	int y;
	YON yon;
	char karakter;
};
UzayGemisi uzayGemisi[5];

struct Dusman
{
	int x;
	int y;
	char karakter;
};
Dusman dusmanlar[80];

struct Mermi
{
	int x;
	int y;
	char karakter;
};
Mermi mermi[80];
bool ates = false;

const int yatay = 90;
const int dikey = 26;
char sahne[yatay][dikey];

char tuslar[256];
const char gemiKarakteri = 219;
const char dusmanKarakteri = 219;
const char mermiKarakteri = 175;


void GemiOlustur()
{
	uzayGemisi[0].x = 1;
	uzayGemisi[0].y = 11;
	uzayGemisi[1].x = 2;
	uzayGemisi[1].y = 12;
	uzayGemisi[2].x = 3;
	uzayGemisi[2].y = 13;
	uzayGemisi[3].x = 2;
	uzayGemisi[3].y = 14;
	uzayGemisi[4].x = 1;
	uzayGemisi[4].y = 15;

	//İlk başta uzay gemisinin yönü olmamalı.
	for (int i = 0; i < 5; i++)
		uzayGemisi[i].yon = YON_YOK;

	//Uzay gemisi karakteri belirlenir.
	for (int i = 0; i < 5; i++)
		uzayGemisi[i].karakter = gemiKarakteri;
}

void DusmanOlustur(int siradakiDusman)
{
	int y = rand() % 21 + 2;
	dusmanlar[siradakiDusman + 3].x = 88;
	dusmanlar[siradakiDusman + 3].y = y;
	dusmanlar[siradakiDusman + 1].x = 88;
	dusmanlar[siradakiDusman + 1].y = y + 1;
	dusmanlar[siradakiDusman].x = 87;
	dusmanlar[siradakiDusman].y = y;
	dusmanlar[siradakiDusman + 2].x = 87;
	dusmanlar[siradakiDusman + 2].y = y + 1;

	//Oluşacak düşmanların karakterini belirler.
	for (int i = siradakiDusman; i < siradakiDusman + 4; i++)
		dusmanlar[i].karakter = dusmanKarakteri;

}

void gemiyiSahneyeYerlestir()
{
	//Sahneye uzay gemisini ekler.
	for (int i = 0; i < 5; i++)
	{
		int x = uzayGemisi[i].x;
		int y = uzayGemisi[i].y;
		sahne[x][y] = uzayGemisi[i].karakter;
	}
}


void yeniDusmanıSahneyeYerlestir(int siradakiDusman)
{
	//Düşmanları sahneye ekler.
	for (int i = 0; i < siradakiDusman; i++)
	{
		int x = dusmanlar[i].x;
		int y = dusmanlar[i].y;
		sahne[x][y] = dusmanlar[i].karakter;
	}
}

void dusmanıHareketEttir(int siradakiDusman)
{
	//Ölmemiş yada gemiye ulaşmamış düşmanlar dışındakileri sola hareket ettirir.
	for (int i = 0; i < siradakiDusman; i++) {
		if (dusmanlar[i].x < 90 && dusmanlar[i].x > 0)
			dusmanlar[i].x  -= 3;
		else {
			dusmanlar[i].karakter = '\0';
			dusmanlar[i].x = 95;
		}
	}
}

void gemiyiHareketEttir()
{
	//Geminin her parçasını yön doğrultusunda hareket ettirir.
	for (int i = 0; i < 5; i++)
	{
		switch (uzayGemisi[i].yon)
		{
		case YON_ASAGI:
			uzayGemisi[i].y++;
			break;
		case YON_YUKARI:
			uzayGemisi[i].y--;
			break;
		}
	}
}

void mermiOlustur(int siradakiMermi)
{
	//Merminin ilk koordinatı...
	mermi[siradakiMermi].x = uzayGemisi[3].x + 1;
	mermi[siradakiMermi].y = uzayGemisi[3].y - 1;
	mermi[siradakiMermi].karakter = mermiKarakteri;
}

void mermiyiHareketEttir(int siradakiMermi)
{
	//Sahne dışına çıkmamış mermileri sağa kaydırır.
	for (int i = 0; i < siradakiMermi; i++)
	{
		if (mermi[i].x < 92 && mermi[i].x > 0)
			mermi[i].x += 3;
		else {
			mermi[i].x = -5;
			mermi[i].karakter = '\0';
		}
	}
}

void IsabetKontrol(int siradakiDusman, int siradakiMermi)
{
	//Koordinatları kontrol ederek düşman vurulduysa mermiyi ve düşmanı yok eder.
	for (int a = 0; a < siradakiMermi; a++)
		for (int b = 0; b < siradakiDusman; b += 2)
		{
			//Y ekseninde aynı doğrultudalarsa, merminin düşmanı geçip geçmediğini kontrol eder.
			if (dusmanlar[b].y == mermi[a].y)
				if (dusmanlar[b].x <= mermi[a].x + 2)
				{
					//4 karakter olan düşmanın öndeki iki karakterden hangisini geçtiyse ona göre işlem yapar.
					//Üstteki karakterse, 4 karakteri de ekranın sağına taşır ve onları null'a eşitler.
					if (b % 4 == 0)
					{
						mermi[a].x = -5;
						mermi[a].karakter = '\0';
						dusmanlar[b].x = 95;
						dusmanlar[b + 1].x = 95;
						dusmanlar[b + 2].x = 95;
						dusmanlar[b + 3].x = 95;
						dusmanlar[b].karakter = '\0';
						dusmanlar[b + 1].karakter = '\0';
						dusmanlar[b + 2].karakter = '\0';
						dusmanlar[b + 3].karakter = '\0';
					}
					//Alttaki karaktere çarptıysa yine aynı işlemi yapar.
					if (b % 4 == 2)
					{
						mermi[a].x = -5;
						mermi[a].karakter = '\0';
						dusmanlar[b - 2].x = 95;
						dusmanlar[b - 1].x = 95;
						dusmanlar[b].x = 95;
						dusmanlar[b + 1].x = 95;
						dusmanlar[b - 2].karakter = '\0';
						dusmanlar[b - 1].karakter = '\0';
						dusmanlar[b].karakter = '\0';
						dusmanlar[b + 1].karakter = '\0';
					}
				}
		}
}

void mermiyiSahneyeYerlestir(int siradakiMermi)
{
	//Her bir merminin koordinatını alır ve sahneye yerleştirir.
	for (int i = 0; i < siradakiMermi + 4; i++)
	{
		int x = mermi[i].x;
		int y = mermi[i].y;
		sahne[x][y] = mermi[i].karakter;
	}
}

void klavyeOku(char tuslar[])
{
	//Klavyeden girilen değeri okumak için gerekli.
	for (int x = 0; x < 256; x++)
		tuslar[x] = (char)(GetAsyncKeyState(x) >> 8);
}
void klavyeKontrol()
{
	//Tuş W ise gemi yukarı, S ise aşağı,ikiside değilse hiçbir yöne yönelir. Boşluk ise ateş değişkenini true yapar.
	klavyeOku(tuslar);

	if (tuslar['W'] != 0)
		for (int i = 0; i < 5; i++)
			uzayGemisi[i].yon = YON_YUKARI;

	else if (tuslar['S'] != 0)
		for (int i = 0; i < 5; i++)
			uzayGemisi[i].yon = YON_ASAGI;

	else
		for (int i = 0; i < 5; i++)
			uzayGemisi[i].yon = YON_YOK;
	if (tuslar[' '] != 0)
		ates = true;
}


void sinirlariOlustur()
{
	//Kenarları çizer.
	for (int x = 0; x < yatay; x++)
	{
		sahne[x][0] = 219;
		sahne[x][dikey - 1] = 219;
	}

	for (int y = 0; y < dikey; y++)
	{
		sahne[0][y] = 219;
		sahne[yatay - 1][y] = 219;
	}

}


void sahneyiTemizle()
{
	//Tüm sahneyi temizler.
	for (int y = 0; y < dikey; y++)
	{
		for (int x = 0; x < yatay; x++)
		{
			sahne[x][y] = ' ';
		}
	}
}

void gotoxy(int x, int y)
{
	//Kürsörü gitmesi gereken koordinata götürür.
	COORD coord;
	coord.X = x;
	coord.Y = y;

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void kursoruGizle()
{
	//Kürsörü gizler.
	HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);

	CONSOLE_CURSOR_INFO     cursorInfo;

	GetConsoleCursorInfo(out, &cursorInfo);
	cursorInfo.bVisible = false;
	SetConsoleCursorInfo(out, &cursorInfo);
}

void sahneyiCiz()
{
	//Tüm sahneyi çizer.
	for (int y = 0; y < dikey; y++)
	{
		for (int x = 0; x < yatay; x++)
		{
			cout << sahne[x][y];
		}
		cout << endl;
	}
}



int main()
{
	srand(time(NULL));
	kursoruGizle();
	GemiOlustur();
	int siradakiDusman = 0;
	int siradakiMermi = 0;
	int i = 15;
	while (true) {
		sahneyiTemizle();
		sinirlariOlustur();
		klavyeKontrol();
		IsabetKontrol(siradakiDusman,siradakiMermi);

		//Boşluğa basıldığında true olduğundan mermi oluşturur.
		if (ates) {
			mermiOlustur(siradakiMermi);
			siradakiMermi++;
			ates = false;
		}
		mermiyiHareketEttir(siradakiMermi);
		mermiyiSahneyeYerlestir(siradakiMermi);
		gemiyiHareketEttir();
		gemiyiSahneyeYerlestir();
		dusmanıHareketEttir(siradakiDusman);
		//Düşmanı belirli aralıklarla oluşturması için tanımladığım değişkeni kontrol eder ve düşmanı oluşturur.
		if (i == 20) {
			DusmanOlustur(siradakiDusman);
			i = 0;
			siradakiDusman += 4;
		}
		yeniDusmanıSahneyeYerlestir(siradakiDusman);
		gotoxy(0, 0);
		sahneyiCiz();
		//Düşman 80 boyutlu olduğundan, düşmanlar biteceği zaman oyun bitmemesi için..
		if (siradakiDusman > 70)
			siradakiDusman = 0;
		//Mermi 80 boyutlu olduğundan, mermiler biteceği zaman oyunun bitmemesi için.
		if (siradakiMermi > 70)
			siradakiMermi = 0;
		i++;
	}
}

