// #include <iostream>
// using namespace std;
// #include <vector>
// #include <algorithm>
// 
// class Person
// {
// public:
// 	Person() {}
// 	Person(string name, int age) : m_name(name), m_age(age) {}
// 	string m_name;
// 	int m_age;
// private:
// 
// };
// 
// void printInfo(int val)
// {
// 	cout << val << endl;
// }
// 
// void test01()
// {
// 	vector<int> num;
// 	num.push_back(10);
// 	num.push_back(20);
// 	num.push_back(30);
// 	num.push_back(40);
// 
// 	// 	vector<int>::iterator itBegin = num.begin();
// 	// 	vector<int>::iterator itEnd = num.end();
// 	// 
// 	// 	while (itBegin != itEnd)
// 	// 	{
// 	// 		cout << *itBegin << endl;
// 	// 		itBegin++; // move pointer forward
// 	// 	}
// 	// 	for (vector<int>::iterator it = num.begin();it != num.end();it++) //initial a number then compare to end number then ++ initialed number
// 	// 	{
// 	// 		cout << *it << endl;
// 	// 	}
// 	for_each(num.begin(), num.end(), printInfo);
// }
// 
// void test02()
// {
// 	vector<Person>p;
// 	Person p1("ccr", 12);
// 	Person p2("ccr2", 13);
// 	Person p3("ccr3", 14);
// 	Person p4("ccr4", 15);
// 
// 	p.push_back(p1);
// 	p.push_back(p2);
// 	p.push_back(p3);
// 	p.push_back(p4);
// 
// 	for (vector<Person>::iterator it = p.begin(); it != p.end(); it++)
// 	{
// 		cout << "Name : " << (*it).m_name << endl;
// 		cout << "Age : " << (*it).m_age << endl << endl;
// 	}
// }
// 
// void test02()
// {
// 	vector<Person*>p;
// 	Person p1("ccr", 12);
// 	Person p2("ccr2", 13);
// 	Person p3("ccr3", 14);
// 	Person p4("ccr4", 15);
// 
// 	p.push_back(&p1);
// 	p.push_back(&p2);
// 	p.push_back(&p3);
// 	p.push_back(&p4);
// 
// 	for (vector<Person*>::iterator it = p.begin(); it != p.end(); it++)
// 	{
// 		cout << "Name : " << (*it)->m_name << endl;
// 		cout << "Age : " << (*it)->m_age << endl << endl;
// 	}
// }
// 
// int main()
// {
// 	//test01();
// 	test02();
// }