#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	double sum7 = 0, sumN = 0, km = 10;
	int day = 1, n;

	cout.precision(2);
	cout << "Enter n (number of days): ";
	cin >> n;

	for (int i = 0; i < 10; i++) {
		cout << day << " day: " << km << fixed << "km" << endl;

		if (day < 8) sum7 = sum7 + km;
		if (day <= n) sumN = sumN + km;

		day++;
		km = km * 1.1;
	}

	cout << "Distance in 7 days: " << sum7 << endl;
	cout << "Distance in N days: " << sumN << endl;

	return 0;
}
