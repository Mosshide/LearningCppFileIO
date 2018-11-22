#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main ()
{
	ofstream file;
	ifstream filez;
	file.open ("test.wyz");
	int a;
	string line;
	struct product {
		int weight;
		float price;
	} ;
	file << sizeof (char) << endl;
	file << sizeof (int) << endl;
	file << sizeof (float) << endl;
	file << sizeof (product) << endl;
	file.close();
	cin >> a;
	filez.open ("test.wyz");
	while (! filez.eof() )
	{
		getline (filez, line);
		cout << line << endl;
	}
	cin >> a;
	return 0;
}
