#include <iostream>
using namespace std;
#include <functional>
#include <vector>
#include <algorithm>

void printVector(int val)
{
	cout << val << " ";
}

class Transform
{
public:
	int operator()(int val)
	{
		return val + 10;
	}
};
// update 1st abc123 1212
void test01()
{
	vector<int> v;
	for (int i = 0; i <= 10; i++)
	{
		v.push_back(i);
	}
	vector<int> v2;
	v2.resize(v.size());

	transform(v.begin(), v.end(), v2.begin(), Transform());
	for_each(v2.begin(), v2.end(), printVector);
}

int main()
{
	test01();
}
