#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]) {
	cout << "Count: " << argc << endl;
	for (int i = 1; i < argc; i++) {
		cout << "Argv[" << i << "] = " << argv[i] << endl;
	}
	char op;
	int res = atoi(argv[1]);
	op = argv[2][0];
	if ((isdigit(argv[1][0])) && (isdigit(argv[1][0]))) {
		switch (op) {
			case '+':
				res = res + atoi(argv[3]);
				break;
			case '-':
				res = res - atoi(argv[3]);
				break;
			default:
				cout << "ERROR" << endl;
		}
	}
	else {
		cout << "ERROR" << endl;
	}
	cout << "Result: " << res << endl;
}
