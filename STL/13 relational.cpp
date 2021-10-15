// #include <iostream>
// using namespace std;
// #include <functional>
// #include <vector>
// #include <algorithm>
// 
// class GreaterFive
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
// 	v.push_back(10);
// 	v.push_back(20);
// 	v.push_back(30);
// 	v.push_back(40);
// 	v.push_back(50);
// 
// 	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
// 	{
// 		cout << *it << " ";
// 	}
// 	cout << endl;
// 
// 	//sort(v.begin(), v.end(), GreaterFive());
// 	sort(v.begin(), v.end(), greater<int>());
// 
// 	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
// 	{
// 		cout << *it << " ";
// 	}
// }
// 
// void test02()
// {
// 	
// }
// 
// int main() {
// 	test01();
// }