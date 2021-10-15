// #include <iostream>
// using namespace std;
// #include <vector>
// #include <algorithm>
// 
// class greaterfive
// {
// public:
// 	bool operator()(int val)
// 	{
// 		return val > 5;
// 	}
// };
// 
// void test01()
// {
// 	vector<int>v;
// 	for (int i = 0; i <= 10; i++)
// 	{
// 		v.push_back(i);
// 	}
// 	vector<int>::iterator it = find_if(v.begin(), v.end(), greaterfive());
// 
// 	if (it == v.end())
// 	{
// 		cout << "no found" << endl;
// 	}
// 	else
// 	{
// 		cout << "ya found " << *it << endl;
// 	}
// 
// 	while (it != v.end())
// 	{
// 		cout << *it << endl;
// 		it++;
// 		if (it == v.end())
// 		{
// 			break;
// 		}
// 	}
// }
// 
// int main() {
// 	test01();
// }