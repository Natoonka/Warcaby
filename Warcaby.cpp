// Warcaby.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	char tab[8][8];
	int i, j, m, n;

	for (i = 0; i < 8; i++)
		for (j = 0; j < 8; j++)
			tab[i][j] = 0;

	for (i = 0; i < 3; i++)
	{
		if (i == 1)
		{
			for (j = 0; j < 8; j = j + 2)
				tab[i][j] = 1;
		}
		else
		{
			for (j = 1; j < 8; j = j + 2)
				tab[i][j] = 1;
		}
	}

	for (i = 5; i < 8; i++)
	{
		if (i == 6)
		{
			for (j = 1; j < 8; j = j + 2)
				tab[i][j] = 2;
		}
		else
		{
			for (j = 0; j < 8; j = j + 2)
				tab[i][j] = 2;
		}
	}

	for (i = 0; i < 8; i++)
		for (j = 0; j < 8; j++)
		{
			if (tab[i][j] == 0)
				cout << "|-";

			else if (tab[i][j] == 1)
				cout << "|o";

			else if (tab[i][j] == 2)
				cout << "|x";

			if (j == 7)
				cout << "|" << endl;
		}

	for (int l=1; ;l++)
	{
		system("CLS");

		for (i = 0; i < 8; i++)
			for (j = 0; j < 8; j++)
			{
				if (tab[i][j] == 0)
					cout << "|-";

				else if (tab[i][j] == 1)
					cout << "|o";

				else if (tab[i][j] == 2)
					cout << "|x";

				if (j == 7)
					cout << "|" << endl;
			}
		cout << "!!!UWAGA! PRZY RUCHU PIONKOW POLA LICZYMY OD 0!!!" << endl;
		if (l % 2)
		{
			cout << "BIALE: Ktory pionek chcesz ruszyc? (wspolrzedne: wiersz;kolumna):" << endl;
			cin >> i;
			cin >> j;

			cout << "BIALE: Gdzie chcesz go ruszyc? (wspolrzedne: wiersz;kolumna):" << endl;
			cin >> m;
			cin >> n;

			if (tab[i][j] == 1)
			{
				if (m == i + 1)
				{
					if (n == j + 1)
					{
						if (tab[m][n] == 0)
						{
							tab[i][j] = 0;
							tab[m][n] = 1;
						}
						else if (tab[m][n] == 2)
						{
							tab[i][j] = 0;
							tab[m][n] = 1;
						}
						else
						{
							cout << "Nie mozesz sie tak ruszyc." << endl;
							system("PAUSE");
							l = l - 1;
						}
					}
					else if (n == j - 1)
					{
						if (tab[m][n] == 0)
						{
							tab[i][j] = 0;
							tab[m][n] = 1;
						}
						else if (tab[m][n] == 2)
						{
							tab[i][j] = 0;
							tab[m][n] = 1;
						}
						else
						{
							cout << "Nie mozesz sie tak ruszyc." << endl;
							system("PAUSE");
							l = l - 1;
						}
					}
				}
				else if (m == i - 1)
				{
					if (n == j + 1)
					{
						if (tab[m][n] == 0)
						{
							tab[i][j] = 0;
							tab[m][n] = 1;
						}
						else if (tab[m][n] == 2)
						{
							tab[i][j] = 0;
							tab[m][n] = 1;
						}
						else
						{
							cout << "Nie mozesz sie tak ruszyc." << endl;
							system("PAUSE");
							l = l - 1;
						}
					}
					else if (n == j - 1)
					{
						if (tab[m][n] == 0)
						{
							tab[i][j] = 0;
							tab[m][n] = 1;
						}
						else if (tab[m][n] == 2)
						{
							tab[i][j] = 0;
							tab[m][n] = 1;
						}
						else
						{
							cout << "Nie mozesz sie tak ruszyc." << endl;
							system("PAUSE");
							l = l - 1;
						}
					}
					else
					{
						cout << "Nie mozesz sie tak ruszyc." << endl;
						system("PAUSE");
						l = l - 1;
					}
				}
				else
				{
					cout << "Nie mozesz sie tak ruszyc." << endl;
					system("PAUSE");
					l = l - 1;
				}
			}
			else
			{
				cout << "Nie mozesz sie tak ruszyc." << endl;
				system("PAUSE");
				l = l - 1;
			}
		}
		else
		{
			cout << "CZARNE: Ktory pionek chcesz ruszyc? (wspolrzedne: wiersz;kolumna):" << endl;
			cin >> i;
			cin >> j;

			cout << "CZARNE: Gdzie chcesz go ruszyc? (wspolrzedne: wiersz;kolumna):" << endl;
			cin >> m;
			cin >> n;

			if (tab[i][j] == 2)
			{
				if (m == i + 1)
				{
					if (n == j + 1)
					{
						if (tab[m][n] == 0)
						{
							tab[i][j] = 0;
							tab[m][n] = 2;
						}
						else if (tab[m][n] == 1)
						{
							tab[i][j] = 0;
							tab[m][n] = 2;
						}
						else
						{
							cout << "Nie mozesz sie tak ruszyc." << endl;
							system("PAUSE");
							l = l - 1;
						}
					}
					else if (n == j - 1)
					{
						if (tab[m][n] == 0)
						{
							tab[i][j] = 0;
							tab[m][n] = 2;
						}
						else if (tab[m][n] == 1)
						{
							tab[i][j] = 0;
							tab[m][n] = 2;
						}
						else
						{
							cout << "Nie mozesz sie tak ruszyc." << endl;
							system("PAUSE");
							l = l - 1;
						}
					}
				}
				else if (m == i - 1)
				{
					if (n == j + 1)
					{
						if (tab[m][n] == 0)
						{
							tab[i][j] = 0;
							tab[m][n] = 2;
						}
						else if (tab[m][n] == 1)
						{
							tab[i][j] = 0;
							tab[m][n] = 2;
						}
						else
						{
							cout << "Nie mozesz sie tak ruszyc." << endl;
							system("PAUSE");
							l = l - 1;
						}
					}
					else if (n == j - 1)
					{
						if (tab[m][n] == 0)
						{
							tab[i][j] = 0;
							tab[m][n] = 2;
						}
						else if (tab[m][n] == 1)
						{
							tab[i][j] = 0;
							tab[m][n] = 2;
						}
						else
						{
							cout << "Nie mozesz sie tak ruszyc." << endl;
							system("PAUSE");
							l = l - 1;
						}
					}
				}
				else
				{
					cout << "Nie mozesz sie tak ruszyc." << endl;
					system("PAUSE");
					l = l - 1;
				}
			}
			else
			{
				cout << "Nie mozesz sie tak ruszyc." << endl;
				system("PAUSE");
				l = l - 1;
			}
		}
	}
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
