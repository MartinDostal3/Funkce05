// Funkce05.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>
using namespace std;


bool JeLiche(int n, double& ap, int& pocet)
{
	int soucetL = 0;
	int pocetL = 0;
	ap = 0;
	bool jeLiche = false;
	if (n % 2 != 0)
	{
		jeLiche = true;

		
		int pocetS = 0;
		while (n > 0)
		{
			int cifra = n % 10;
			if (cifra % 2 != 0)
			{
				pocetL++;
				soucetL += cifra;
				

			}
			if (cifra % 2 == 0)
			{
				pocetS++;
			}
			n = n / 10;
		
			
		}
		pocet = pocetS;
		
	}
	if (pocetL > 0)
	{
		ap = (double)soucetL / pocetL;
	}
	

	
	

	return jeLiche;
}



int main()
{
	int n{0}, pocet{0};
	double ap = 0;
	cout << "Zadej cislo a program urci jestli je cislo liche: ";
	cin >> n;

	if (JeLiche(n, ap, pocet))
	{
		cout << "\ncislo je liche" << endl;
		cout << "Aritmeticky prumer lichych cifer je " << ap << endl;
		cout << "pocet sudych cifer je " << pocet << endl;
		
	}
	else
	{
		cout << "\ncislo neni liche";
	}


	getchar();
	return 0;

 
}

