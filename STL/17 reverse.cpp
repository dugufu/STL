// #include <iostream>
// using namespace std;
// #include <vector>
// #include <algorithm>
// 
// void myPrint(int val)
// {
// 	cout << val << " ";
// }
// 
// void test01()
// {
// 	vector<int>v1;
// 	vector<int>v2;
// 
// 	for (int i = 0; i < 10 ; i++)
// 	{
// 		v1.push_back(i);
// 		v2.push_back(i+5);
// 	}
// 
// 	vector<int>vTarget;
// 	vTarget.resize(max(v1.size(), v2.size()));
// 	vector<int>::iterator itend = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), vTarget.begin()); // ( a.begin, a.end, b.begin, b.end, target ) a compare to b and looking for the dif val
// 	for_each(vTarget.begin(), itend, myPrint); //pushing
// }
// 
// int main()
// {
// 	test01();
// }