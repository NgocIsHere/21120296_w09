#include "divde_two_integer.h"
using namespace std;
int main() {
		Divide* d = new Divide;
		d->input();
		try {
			cout << "Result:"
				<< d->division() << endl;
		}
		catch (...) {
			cout << "Phep chia cho zero!" << endl;
		}

	return 0;
}