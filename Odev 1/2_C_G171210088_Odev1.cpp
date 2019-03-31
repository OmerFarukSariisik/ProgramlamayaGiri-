
/****************************************************************************
**					SAKARYA �N�VERS�TES�
**			         B�LG�SAYAR VE B�L���M B�L�MLER� FAK�LTES�
**				    B�LG�SAYAR M�HEND�SL��� B�L�M�
**				          PROGRAMLAMAYA G�R��� DERS�
**
**				�DEV NUMARASI�...: 1.�dev
**				��RENC� ADI...............: �mer Faruk Sar����k
**				��RENC� NUMARASI.: G171210088
**				DERS GRUBU����: 2.��retim  - C Grubu
****************************************************************************/


#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Turkish");

	int tekrarSayisi;
	
	for (tekrarSayisi = 0; tekrarSayisi < 24; tekrarSayisi++) // ��kt�n�n ilk sat�r�na 24 adet y�ld�z ekler.
	{
		cout << "*   ";
	}

	cout << endl;
	
	for (tekrarSayisi = 0; tekrarSayisi < 24; tekrarSayisi++) // 2. sat�ra  "SAU BILGISAYAR" yazar.
	{
		switch (tekrarSayisi)
		{
		case 0:	cout << "*   ";	break;
		case 1: cout << "S   "; break;
		case 2: cout << "A   "; break;
		case 3: cout << "U   "; break;
		case 5: cout << "B   "; break;
		case 6: cout << "I   "; break;
		case 7: cout << "L   "; break;
		case 8: cout << "G   "; break;
		case 9: cout << "I   "; break;
		case 10: cout << "S   "; break;
		case 11: cout << "A   "; break;
		case 12: cout << "Y   "; break;
		case 13: cout << "A   "; break;
		case 14: cout << "R   "; break;
		case 23: cout << "*   "; break;
		default: cout << "    ";
		}

	}

	cout << endl;

	for (tekrarSayisi = 0; tekrarSayisi < 24; tekrarSayisi++) //// 3.sat�r i�in gerekli s�tunlara y�ld�z ekler.
	{
		if (tekrarSayisi == 0 || tekrarSayisi == 23)
			cout << "*   ";
		else
			cout << "    ";
	}

	cout << endl;

	for (tekrarSayisi = 0; tekrarSayisi < 24; tekrarSayisi++) // 4.sat�r i�in gerekli s�tunlara y�ld�z ekler.
	{
		switch (tekrarSayisi)
		{
		case 0: cout << "*   ";	break;
		case 6: cout << "*   ";	break;
		case 17: cout << "*   "; break;
		case 20: cout << "*   "; break;
		case 21: cout << "*   "; break;
		case 22: cout << "*   "; break;
		case 23: cout << "*   "; break;
		default: cout << "    "; break;

		}
	}

	cout << endl;

	for (tekrarSayisi = 0; tekrarSayisi < 24; tekrarSayisi++) // 5.sat�r i�in gerekli s�tunlara y�ld�z ekler.
	{
		switch (tekrarSayisi)
		{
		case 0: cout << "*   ";	break;
		case 5: cout << "*   ";	break;
		case 6: cout << "*   ";	break;
		case 7: cout << "*   ";	break;
		case 16: cout << "*   "; break;
		case 17: cout << "*   "; break;
		case 18: cout << "*   "; break;
		case 21: cout << "*   "; break;
		case 23: cout << "*   "; break;
		default: cout << "    "; break;
		}
	}

	cout << endl;


	for (tekrarSayisi = 0; tekrarSayisi < 24; tekrarSayisi++) // 6.sat�r i�in gerekli s�tunlara y�ld�z ekler.
	{
		switch (tekrarSayisi)
		{
		case 0: cout << "*   ";	break;
		case 4: cout << "*   ";	break;
		case 5: cout << "*   ";	break;
		case 6: cout << "*   ";	break;
		case 7: cout << "*   "; break;
		case 8: cout << "*   "; break;
		case 15: cout << "*   "; break;
		case 16: cout << "*   "; break;
		case 17: cout << "*   "; break;
		case 18: cout << "*   "; break;
		case 19: cout << "*   "; break;
		case 23: cout << "*   "; break;
		default: cout << "    "; break;
		}
	}

	cout << endl;

	for (tekrarSayisi = 0; tekrarSayisi < 24; tekrarSayisi++) // 7.sat�r i�in gerekli s�tunlara y�ld�z ekler.
	{
		switch (tekrarSayisi)
		{
		case 1: cout << "    ";	break;
		case 2: cout << "    ";	break;
		case 10: cout << "    "; break;
		case 11: cout << "    "; break;
		case 12: cout << "    "; break;
		case 13: cout << "    "; break;
		case 21: cout << "    "; break;
		case 22: cout << "    "; break;
		default: cout << "*   "; break;
		}
	}

	cout << endl;

	for (tekrarSayisi = 0; tekrarSayisi < 24; tekrarSayisi++) // 8.sat�r i�in gerekli s�tunlara y�ld�z ekler.
	{
		switch (tekrarSayisi)
		{
		case 1: cout << "    ";	break;
		case 11: cout << "    "; break;
		case 12: cout << "    "; break;
		case 22: cout << "    "; break;
		default: cout << "*   "; break;
		}
	}

	cout << endl;

	for (tekrarSayisi = 0; tekrarSayisi < 24; tekrarSayisi++) // 9.sat�r i�in gerekli s�tunlara y�ld�z ekler.
	{
		cout << "*   ";
	}

	cout << endl;

	for (tekrarSayisi = 0; tekrarSayisi < 24; tekrarSayisi++) // 10.sat�r i�in gerekli s�tunlara y�ld�z ekler.
	{
		if (tekrarSayisi == 0 || tekrarSayisi == 23)
			cout << "*   ";
		else
			cout << "    ";
	}

	cout << endl;

	for (tekrarSayisi = 0; tekrarSayisi < 24; tekrarSayisi++) // 11. sat�ra  "MUHENDISLIGI BOLUMU" yazar.
	{
		switch (tekrarSayisi)
		{
		case 0:	cout << "*   ";	break;
		case 1: cout << "M   "; break;
		case 2: cout << "U   "; break;
		case 3: cout << "H   "; break;
		case 4: cout << "E   "; break;
		case 5: cout << "N   "; break;
		case 6: cout << "D   "; break;
		case 7: cout << "I   "; break;
		case 8: cout << "S   "; break;
		case 9: cout << "L   "; break;
		case 10: cout << "I   "; break;
		case 11: cout << "G   "; break;
		case 12: cout << "I   "; break;
		case 14: cout << "B   "; break;
		case 15: cout << "O   "; break;
		case 16: cout << "L   "; break;
		case 17: cout << "U   "; break;
		case 18: cout << "M   "; break;
		case 19: cout << "U   "; break;
		case 23: cout << "*   "; break;
		default: cout << "    ";
		}

	}

	cout << endl;

	for (tekrarSayisi = 0; tekrarSayisi < 24; tekrarSayisi++) // 12.sat�r i�in gerekli s�tunlara y�ld�z ekler.
	{
		if (tekrarSayisi == 0 || tekrarSayisi == 23)
			cout << "*   ";
		else
			cout << "    ";
	}

	cout << endl;

	for (tekrarSayisi = 0; tekrarSayisi < 24; tekrarSayisi++) // 13.sat�r i�in gerekli s�tunlara y�ld�z ekler.
	{
		switch (tekrarSayisi)
		{
		case 0: cout << "*   ";	break;
		case 6: cout << "*   ";	break;
		case 9: cout << "*   "; break;
		case 10: cout << "*   "; break;
		case 11: cout << "*   "; break;
		case 17: cout << "*   "; break;
		case 23: cout << "*   "; break;
		default: cout << "    "; break;

		}
	}

	cout << endl;

	for (tekrarSayisi = 0; tekrarSayisi < 24; tekrarSayisi++) // 14.sat�r i�in gerekli s�tunlara y�ld�z ekler.
	{
		switch (tekrarSayisi)
		{
		case 0: cout << "*   ";	break;
		case 5: cout << "*   ";	break;
		case 6: cout << "*   ";	break;
		case 7: cout << "*   ";	break;
		case 10: cout << "*   "; break;
		case 16: cout << "*   "; break;
		case 17: cout << "*   "; break;
		case 18: cout << "*   "; break;
		case 23: cout << "*   "; break;
		default: cout << "    "; break;
		}
	}

	cout << endl;

	for (tekrarSayisi = 0; tekrarSayisi < 24; tekrarSayisi++) // 15.sat�r i�in gerekli s�tunlara y�ld�z ekler.
	{
		switch (tekrarSayisi)
		{
		case 0: cout << "*   ";	break;
		case 4: cout << "*   ";	break;
		case 5: cout << "*   ";	break;
		case 6: cout << "*   ";	break;
		case 7: cout << "*   "; break;
		case 8: cout << "*   "; break;
		case 15: cout << "*   "; break;
		case 16: cout << "*   "; break;
		case 17: cout << "*   "; break;
		case 18: cout << "*   "; break;
		case 19: cout << "*   "; break;
		case 23: cout << "*   "; break;
		default: cout << "    "; break;
		}
	}

	cout << endl;

	for (tekrarSayisi = 0; tekrarSayisi < 24; tekrarSayisi++) // 16.sat�r i�in gerekli s�tunlara y�ld�z ekler.
	{
		switch (tekrarSayisi)
		{
		case 1: cout << "    ";	break;
		case 2: cout << "    ";	break;
		case 10: cout << "    ";	break;
		case 11: cout << "    ";	break;
		case 12: cout << "    "; break;
		case 13: cout << "    "; break;
		case 21: cout << "    "; break;
		case 22: cout << "    "; break;
		default: cout << "*   "; break;
		}
	}

	cout << endl;

	for (tekrarSayisi = 0; tekrarSayisi < 24; tekrarSayisi++) // 17.sat�r i�in gerekli s�tunlara y�ld�z ekler.
	{
		switch (tekrarSayisi)
		{
		case 1: cout << "    ";	break;
		case 11: cout << "    ";	break;
		case 12: cout << "    "; break;
		case 22: cout << "    "; break;
		default: cout << "*   "; break;
		}
	}

	cout << endl;

	for (tekrarSayisi = 0; tekrarSayisi < 24; tekrarSayisi++) // 18.sat�r i�in gerekli s�tunlara y�ld�z ekler.
	{
		cout << "*   ";
	}

	cout << endl;

	for (tekrarSayisi = 0; tekrarSayisi < 24; tekrarSayisi++) // 19.sat�r i�in gerekli s�tunlara y�ld�z ekler.
	{
		if (tekrarSayisi == 0 || tekrarSayisi == 23)
			cout << "*   ";
		else
			cout << "    ";
	}

	cout << endl;

	for (tekrarSayisi = 0; tekrarSayisi < 24; tekrarSayisi++) // 20.sat�r i�in gerekli s�tunlara y�ld�z ekler.
	{
		cout << "*   ";
	}

	cout << endl;
	cin >> tekrarSayisi;

	system("pause");
	return 0;
}