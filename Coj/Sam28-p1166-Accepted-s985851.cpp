	#include <iostream>
	using namespace std;

	int main(int argc, char const *argv[])
	{
		
		int iN;
		cin >> iN;

		for (int i = 0; i < iN; ++i)
		{
			int iSecond, iEvens, iOdds;
			string sResultado;
	iEvens = 0;
			iOdds = 0;
			cin >> 	iSecond;
		

				for (int j = 0; j < iSecond; ++j)
				{
					int iNumber;

						cin >> iNumber;
					if (iNumber%2 == 0)
					{
						iEvens++;

					}
					else if (iNumber%2 != 0){
						iOdds++;
					}

				}

					cout << iEvens << " even and " << iOdds << " odd." << endl;

		}


		return 0;
	}