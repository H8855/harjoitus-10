#include <iostream>
using namespace std;

void main(void)
{
	int maara = 0, luku = 1, pos = 0, neg = 0, luvut[50];

	do
	{
		cout << "Anna luku: ";
		cin >> luku;
		if (luku != 0)
		{
			luvut[maara] = luku;
			maara++;
		}
		else
			maara--;
	} while (luku != 0);
	do
	{
		if (luvut[maara] > 0)
			pos++;
		if (luvut[maara] < 0)
			neg++;
		maara--;
	} while (maara > -1);

	cout << "Syötit kokonaisluvut seuraavasti:\n\n";
	cout << "Negatiiviset " << neg << " kpl " << (neg / (neg + pos)) * 100 << " %\n";
	cout << "Positiiviset " << pos << " kpl " << (pos / (pos + neg)) * 100 << " %\n";
	cout << "Yhteensä " << pos + neg << " kpl " << ((pos + neg) / (pos + neg)) * 100 << " %\n";
}