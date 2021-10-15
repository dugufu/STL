// #include <iostream>
// using namespace std;
// #include <functional>
// #include <vector>
// #include <algorithm>
// 
// void printVector(int val)
// {
// 	cout << val << " ";
// }
// 
// class printVectorClass
// {
// public:
// 	void operator()(int val)
// 	{
// 		cout << val << " ";
// 	}
// };
// 
// void test01()
// {
// 	vector<int>v;
// 	for (int i = 0 ;i<10 ;i++)
// 	{
// 		v.push_back(i);
// 	}
// 	
// 
// 	cout << "Function :" << endl;
// 	for_each(v.begin(), v.end(), printVector);
// 	cout << endl;
// 	cout << "Function Object :" << endl;
// 	for_each(v.begin(), v.end(), printVectorClass());
// 	cout << endl;
// }
// 
// int main() {
// 	test01();
// }