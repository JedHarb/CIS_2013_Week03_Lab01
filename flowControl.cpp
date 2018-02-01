#include<iostream>
using namespace std;

int main()
{
	char continueProgram = 'a';

	for (int i = 99; i >= 0; i = i - 1) {
		cout << i << " bottles of beer on the wall" << endl;
	}

	//while (continueProgram == 'y') {
	//	cout << "Do you want to continue (y/n)?";
	cin >> continueProgram;

	//	switch (continueProgram) {
	//	case 'y':
	//		cout << "Going to continue" << endl;
	//		break;

	//	case 'n':
	//		cout << "Going to exit" << endl;
	//		break;

	//	default:
	//		continueProgram = 'y';
	//	}
	//}

	return 0;
}
