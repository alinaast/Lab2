#include <iostream>
using namespace std;
int main() {
	int x1, x2, y1, y2, a, b, p, s, d;
	cin >> x1 >> x2 >> y1 >> y2;
	a = abs(x1 - x2);
	b = abs(y1 - y2);
	d = sqrt(a * a + b * b);
	p = 2 * a + 2 * b;;
	s = 8 * d * d;
	cout << p << endl << s;
	return 0;
}
