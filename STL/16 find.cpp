#include <iostream>
using namespace std;
#include <functional>
#include <vector>
#include <algorithm>

void myPrint(int val)
{
	cout << val << endl;
}

void test01()
{
	vector<int>v;
	vector<int>v2;

	for (int i = 0 ; i < 10 ; i+=1)
	{
		v.push_back(i);
	}
	for (int i = 0; i < 10; i +=2)
	{
		v2.push_back(i);
	}

	
}

int main() {
	test01();
}
