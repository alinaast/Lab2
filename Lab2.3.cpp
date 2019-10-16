#include <iostream>
using namespace std;
int main() {
	int x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	float AC = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	float BC = sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2));
	float p = AC * BC;
	cout << AC << " " << BC << " " << p;
	return 0;
}