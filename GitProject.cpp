// GitProject.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <iostream>
#include <list>
#include <algorithm>

using namespace::std;

class Node {
public:
	Node() : next(nullptr), data(0) {}
	Node(int val) : next(nullptr), data(val) {}
	Node *next;
	int data;
};

class List {
	Node* root;
public:
	void addNode(int val) {
		if (root == nullptr) {
			root = new Node(val);
		}
	}

	void deleteNode(int val) {
		if (root->data == val) {
			Node* tmp = root;
			root = root->next;
			delete root;
		}
		else {
			Node* node = root;
			while (node->next != nullptr) {
				if (node->next->data == val) {
					Node* tmp = node->next;
					node->next = node->next->next;
					delete tmp;
				}
				node = node->next;
			}
		}
	}
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

