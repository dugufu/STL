// #include <iostream>
// using namespace std;
// #include <deque>
// 
// void printdeque(const deque<int>&d1)
// {
// 	for (deque<int>::const_iterator it = d1.begin(); it != d1.end(); it++)
// 	{
// 		cout << *it << " ";
// 	}
// 	cout << endl;
// }
// 
// void test01()
// {
// 	deque<int> d1;
// 	for (int i = 0 ;i < 10; i++)
// 	{
// 		d1.push_back(i);
// 	}
// 	printdeque(d1);
// 
// 	deque<int>d3;
// 	d3.assign(d1.begin(), d1.end());
// 	printdeque(d3);
// 
// 	deque<int>d4;
// 	d4.assign(10, 100);
// 	printdeque(d4);
// 
// 	if (d1.empty())
// 	{
// 		cout << "null" << endl;
// 	}
// 	else{
// 		cout << "No null" << endl;
// 		cout << "Size" << d1.size() << endl; //display size 
// 		d1.resize(15, 1); //resize and set deafult ot 1
// 		printdeque(d1);
// 	}
// 	
// }
// 
// int main()
// {
// 	test01();
// 	return 0;
// }