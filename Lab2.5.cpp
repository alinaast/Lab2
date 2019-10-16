#include <iostream>
using namespace std;
int main() {
	int x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	int a = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	int b = sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2));
	int c = sqrt(pow((x3 - x1), 2) + pow((y3 - y1), 2));
	int P = a + b + c;
	int p = (a + b + c) / 2;
	int s = sqrt(p * (p - a) * (p - b) * (p - c));
	cout << P << " " << s;
	return 0;
}
