#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

bool isTrue(char* s) {
	char* iuy;
	iuy = strchr(s, 'no');
	if (iuy == NULL) {
		iuy = strchr(s, 'on');
	}
	if (iuy != NULL) {
		return 1;
	}
	else {
		return 0;
	}
}

char* change(char* s) {
	char* buf = new char((strlen(s) - 1) * 2 + 1);
	int l = 0;
	for (size_t i = 0; s[i] != '\0'; i++) {
		if ((s[i] == 'n' && s[i + 1] == 'o') || (s[i] == 'o' && s[i + 1] == 'n')) {
			buf[l] = '*';
			buf[l + 1] = '*';
			buf[l + 2] = '*';
			l += 3;
			i++;
		}
		else {
			buf[l] = s[i];
			l++;
		}
	}
	buf[l] = '\0';

	return buf;
}


int main() {
	char s[51];
	int p;
	bool it;
	char* buf;

	cout << "Enter string: "; cin.getline(s, 100);

	it = isTrue(s);

	buf = change(s);


	cout << "line: ";
	for (int i = 0; buf[i] != '\0'; i++) {
		cout << buf[i];
	}
	cout << endl;
	cout << it;
}

