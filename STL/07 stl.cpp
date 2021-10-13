// #include <iostream>
// #include <list>
// #include <string>
// using namespace std;
// 
// class Person
// {
// public:
// 	Person(string name, int age, int height)
// 	{
// 		this->m_name = name;
// 		this->m_age = age;
// 		this->m_height = height;
// 
// 	}
// 
// 	string m_name;
// 	int m_age;
// 	int m_height;
// };
// 
// bool comparePerson(Person &p1, Person &p2)
// {
// 	if (p1.m_age == p2.m_age)
// 	{
// 		return p1.m_height > p2.m_height;
// 	}
// 	else
// 	{
// 		return p1.m_age > p2.m_age;
// 	}
// }
// 
// void test01()
// {
// 	list<Person>p;
// 
// 	Person p1("ccr", 12, 160);
// 	Person p2("cca", 22, 130);
// 	Person p3("ccb", 32, 180);
// 	Person p4("ccc", 42, 200);
// 	Person p5("ccd", 52, 110);
// 	Person p6("cce", 52, 180);
// 	Person p7("ccf", 52, 280);
// 
// 	p.push_back(p1);
// 	p.push_back(p2);
// 	p.push_back(p3);
// 	p.push_back(p4);
// 	p.push_back(p5);
// 	p.push_back(p6);
// 	p.push_back(p7);
// 
// 	for (list<Person>::iterator LI = p.begin(); LI != p.end(); LI++)
// 	{
// 		cout << "Name : " << (*LI).m_name<< " Age : "<< (*LI).m_age << " Height : "<< (*LI).m_height << endl;
// 	}
// 
// 	cout << "sorting......" << endl;
// 	p.sort(comparePerson);
// 	for (list<Person>::iterator LI = p.begin(); LI != p.end(); LI++)
// 	{
// 		cout << "Name : " << (*LI).m_name << " Age : " << (*LI).m_age << " Height : " << (*LI).m_height << endl;
// 	}
// }
// 
// int main()
// {
// 	test01();
// 	system("pause");
// 	return 0;
// }