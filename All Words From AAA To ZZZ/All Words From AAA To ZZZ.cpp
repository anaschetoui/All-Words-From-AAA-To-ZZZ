#include <iostream>
using namespace std;


void PrintAllWordsFromAAAToZZZ()
{
	
	for (int i = 65; i <= 90; i++)
	{
	cout << "\nLetter " << char(i) << ":\n";
		
		

		for (int j = 65; j <= 90; j++)
		{
			

			for (int k = 65; k <= 90; k++)
			{
				cout << char(i)<<char(j)<<char(k) << endl;
			}			
		}
		
		cout << "___________________________\n";
	}
}

int main()
{
	PrintAllWordsFromAAAToZZZ();

	return 0;

}