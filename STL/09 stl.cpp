// #include <iostream>
// #include <map>
// #include <string>
// #include <vector>
// #include <ctime>
// #define plan 0 
// #define artist 1
// #define study 2
// 
// using namespace std;
// class Worker
// {
// public:
// 	string m_name;
// 	int m_salary;
// };
// 
// void createWorker(vector<Worker>& w)
// {
// 	string nameseed = "ABCDEFGHIJ";
// 	for (int i = 0 ; i < 10;i++)
// 	{
// 		Worker worker;
// 		worker.m_name = "employee_";
// 		worker.m_name += nameseed[i];
// 
// 		worker.m_salary = rand() % 10000 + 10000;
// 		w.push_back(worker);
// 	}
// }
// 
// void printWorkerInfo(vector<Worker>& w)
// {
// 	for (vector<Worker>::iterator it = w.begin(); it != w.end(); it++)
// 	{
// 		cout << (*it).m_name << "______________" << (*it).m_salary << endl;
// 	}
// }
// 
// void setGroup(vector<Worker>&w,multimap<int, Worker>& g)
// {
// 	for (vector<Worker>::iterator it = w.begin();it != w.end(); it++)
// 	{
// 		int deptID = rand() % 3; // random number from 0 to 2
// 		g.insert(make_pair(deptID, *it));
// 	}
// }
// 
// void showWorkerByGroup(multimap<int,Worker> &g)
// {
// 	multimap<int, Worker>::iterator pos = g.find(plan);
// 	int count = g.count(plan);
// 	int index = 0;
// 	cout << "Planning Team :" << endl;
// 	for (; pos != g.end() && index < count; pos++, index++)
// 	{
// 		cout << "Name : " << pos->second.m_name << " Salary : " << pos->second.m_salary << endl;
// 	}
// 
// 	pos = g.find(artist);
// 	count = g.count(artist);
// 	index = 0;
// 	cout << "Artist Team :" << endl;
// 	for (; pos != g.end() && index < count; pos++, index++)
// 	{
// 		cout << "Name : " << pos->second.m_name << " Salary : " << pos->second.m_salary << endl;
// 	}
// 
// 	pos = g.find(study);
// 	count = g.count(study);
// 	index = 0;
// 	cout << "Study Team :" << endl;
// 	for (; pos != g.end() && index < count; pos++, index++)
// 	{
// 		cout << "Name : " << pos->second.m_name << " Salary : " << pos->second.m_salary << endl;
// 	}
// }
// 
// void test01() {
// 	vector<Worker>worker;
// 	createWorker(worker);
// 	//printWorkerInfo(worker);
// 
// 	multimap<int, Worker>Group;
// 	setGroup(worker, Group);
// 
// 	showWorkerByGroup(Group);
// 	Group.clear();
// }
// 
// int main()
// {
// 	srand((unsigned int)time(NULL));
// 	test01();
// 	return 0;
// }