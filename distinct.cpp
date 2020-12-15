#include <bits/stdc++.h>
#include <set>
using namespace std;

int main() {
	char ch;
	set<char> elements;

	while (cin >> ch) {
		if (ch != '{' && ch != ',' && ch != '}')
			elements.insert(ch);
	}

	cout << elements.size() << endl;

}
