#pragma once
#include<cstdio>
#include<iostream>
#include<conio.h>
#include<time.h>

using namespace std;

class List
{
	typedef struct Node
	{
		int data;
		Node* next;
		Node* prev;

	}*Nptr;

	Nptr head;
	Nptr tail;


	void createNode(int);
	void addNode(Nptr &, Nptr);
	void findMinPath(Nptr, int)const;



public:
	List() : head(NULL), tail(NULL) {  }

	void insert(int);
	void print()const;
	void find(int n, int m)const;

};

