#include <iostream>
#include <cstdlib>
using namespace std;

bool check_validity(int a, int b)
{
	    return b > a;
}

int sum_up(int a, int b)
{
	 int sum = 0;
	 for (int i = a; i <= b; i++)
		 sum += i;
	 return sum;
}

int main(int argc, char *argv[])
{
	int a, b, sum;

	 a = atoi(argv[1]);
	 b = atoi(argv[2]);

	if (check_validity(a, b))
	 {
		sum = sum_up(a, b);
		cout << sum << endl;
	}

	return 0;
}
