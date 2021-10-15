// #include <iostream>
// using namespace std;
// #include <vector>
// #include <algorithm>
// 
// class MyCompare
// {
// public:
// 	bool operator()(int val, int val2)
// 	{
// 		return val > val2;
// 	}
// };
// 
// void test01()
// {
// 	vector<int>v;
// 	for (int i= 0;i <= 10;i++)
// 	{
// 		v.push_back(i);
// 	}
// 
// 	//sort(v.begin(), v.end());
// 	sort(v.begin(), v.end(), MyCompare());
// 	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
// 	{
// 		cout << *it << endl;
// 	}
// 	sort(v.begin(), v.end());
// 	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
// 	{
// 		cout << *it << endl;
// 	}
// }
// 
// int main() {
// 	test01();
// }