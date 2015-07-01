// GitProject.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <iostream>
#include <list>
#include <algorithm>

using namespace::std;

class Node {
public:
	Node() {}
	Node *next;
	int data;
};

int _tmain(int argc, _TCHAR* argv[])
{
	cout << "Hello World!" << endl;

	list<int> mylist;
	mylist.push_back(101);
	mylist.push_back(203);
	mylist.push_back(304);
	mylist.push_back(423);
	
	list<int>::iterator itFind = find(mylist.begin(), mylist.end(), 304);
	cout << "Found : " << *(itFind) << endl;

	return 0;
}

