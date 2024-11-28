#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;
int main()
{
	ifstream f("input.txt");
	if (!f)
	{  
		cerr << "Error opening file input.txt" << '\n';
		return 1;
	}
	int x[14];
	int n{};
	f >> n;
	for (int i{ 0 }; i < n; i++)
	{
		f >> x[i];
		cout << x[i] << " ";
	}
	cout << '\n';
	struct S
	{
		int id{};
		char s{};
		string N{};
	};
	S m[5];
	ifstream g("input2.txt");
	if (!g)
	{
		cerr << "Error opening file input2.txt" << '\n';
		return 1;
	}
	int i{ 0 };
	string l;
	while (getline(g, l))
	{
		istringstream G(l);
		G >> m[i].id >> m[i].s;
		getline(G, m[i].N);
		cout << "NIM:" << m[i].id << " sex:" << m[i].s << "	name: " << m[i].N << '\n';
		i++;
	}
	return 0;
}