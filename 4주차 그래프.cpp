#include <fstream>  // text out ofstream
#include <cmath>    // sin
using namespace std;
const float PI = 3.141592;  // define
int main() {
	float t = 0.0, dt, T;
	dt = 1. / 10. / 50;
	T = 1. / 5.;

	ofstream seven("graph.txt");
	for (t = 0.0; t < T; t += dt) {
		seven << t << "    " << 100* cos(20* PI * t)*cos(220 * PI * t);
		seven << "  " << 60 * sin(240 * PI * t) + 80 * sin(220 * PI * t) << endl;
	}
	seven.close();
	return 1234;
}