#include<iostream>
using namespace std ;
#include<list>
#include<cstdlib>
//list 容器

void printList(const list<int>&L)
{
	for (list<int>::const_iterator it=L.begin(); it !=L.end();it++)
	{
		cout<<*it <<" ";

	}
	cout<<endl;

}
void test()
{
	//创建list容器
	list<int>L1;

	//添加数据
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	// 遍历list容器
	printList(L1);

	//区间方式构造
	list<int>L2(L1.begin(), L1.end());
	printList(L2);

	//拷贝构造
	list<int>L3(L2);
	printList(L3);
	

	//n个elelm
	list<int>L4(10,1000);
	printList(L4);

	//赋值 operatot =赋值

	list<int>L5(L2);
	printList(L5);

	list<int>L6;
	L6.assign(L2.begin(), L2.end());
	printList(L6);

	list<int>L7;
	L7.assign(10,800);
	printList(L7);
	


}

int main(){


	test();
	system("pause");
	return 0;
}
