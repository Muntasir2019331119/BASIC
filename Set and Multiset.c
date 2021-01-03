#include<bits/stdc++.h>
using namespace std;
int main()
{
	/**************************************SET****************************************/

//unique number/value

//always in an ascending order..(by default)
	set<int>s;
//for descending order
//set<int,greater<int> >s;
	for (int i = 0; i < 5; i++)
	{	int k;
		cin >> k;
		s.insert(k);
	}
//pair in set
//set<pair<int,int> >s;
//s.find()
//s.erase()//    //caution : erase use er age must check end naki ?
//s.count()
//s.empty()
	for (auto it = s.begin(); it != s.end(); it++)
	{
		cout << *it << endl;
	}
	/*****************************MULTISET*****************************************/

//everything is same as set........
//Main Difference is:
//It can have same number...that means non unique number....
//default in ascending order:
 multiset<int>s;
 //for descending order:
 multiset<int,greater<int> >s;


}
