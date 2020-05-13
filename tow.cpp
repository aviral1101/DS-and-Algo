#include <iostream>
#include<cmath>
#include <cstring>
using namespace std;
void tower(int n, string source , string destination, string helper)
{

	if (n == 0)
	{
		return ;
	}
	tower(n - 1, source, helper, destination);
	cout << "Move " << n << "th disc from " << source << " to " << destination << endl;
	tower(n - 1, helper, destination, source);

}
int main()
{
	int n;
	cin >> n;
	int sum = 0;
	tower(n, "T1", "T2", "T3");
	for (int i = 1; i <= n; i++)
	{
		sum = sum + pow(2, i - 1);
	}
	cout << sum;
	return 0;
}