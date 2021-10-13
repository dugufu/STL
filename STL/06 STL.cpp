// #include <iostream>
// #include <queue>
// #include <string>
// using namespace std;
// 
// class Person
// {
// public:
// 	Person(string name, int age)
// 	{
// 		this->m_name = name;
// 		this->m_age = age;
// 	}
// 
// 	string m_name;
// 	int m_age;
// };
// 
// void test01()
// {
// 	queue<Person>p;
// 	Person p1 = { "ccr", 12};
// 	Person p2 = { "ccr2", 22};
// 	Person p3 = { "ccr3", 32};
// 	Person p4 = { "ccr4", 42};
// 	p.push(p1);
// 	p.push(p2);
// 	p.push(p3);
// 	p.push(p4);
// 	cout << "starting queeu size : " << p.size() << endl;
// 	while (!p.empty())
// 	{
// 		cout << "Queue Head Name:"<< p.front().m_name << endl;
// 		cout << "Queue Head Age:"<< p.front().m_age << endl;
// 		cout << "------------------------------------------------" << endl;
// 		cout << "Queue Tail Name:"<< p.back().m_age << endl;
// 		cout << "Queue Tail Age:"<< p.back().m_age << endl << endl;
// 		p.pop();
// 	}
// 	cout << "Final queue size : " << p.size() << endl;
// }
// 
// int main()
// {
// 	test01();
// 	system("pause");
// 	return 0;
// }