#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	
	int iX, iY, iFx, iFy, iMoves;
	cin >> iX >> iY;
	cin >> iFx >> iFy >> iMoves;

	for (int i = 0; i < iMoves; ++i)
	{
		char cMove;
		int iMovements;
		cin >> cMove >> iMovements;

		if (cMove == 'E')
		{
			iFy -= iMovements;
		}
		if (cMove == 'W')
		{
			iFy += iMovements;
		}
		if (cMove == 'N')
		{
			iFx += iMovements;
		}
		if (cMove == 'S')
		{
			iFx -= iMovements;
		}
	}

	cout << iFx << " " << iFy << endl;
	return 0;
}