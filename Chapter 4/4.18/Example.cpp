#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int N=1;

	cout << "\tN" << "\t10*N" << "\t100*N" << "\t1000*N" << endl << endl;
	while (N <= 5)
	{		
		cout << "\t" << N << "\t" << 10 * N << "\t" << 100 * N << "\t" << 1000*N << endl;
		N++;
	}

return 0;
}
