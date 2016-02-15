#pragma once
#include<iostream>
using namespace std;

class PriorityQueue
{
	int* data;
	int size;
	int capacity;
public:
	PriorityQueue(int);
	bool Enqueue(int);
	int Dequeue();
	int peek();
	bool isEmpty();
	bool isFull();
	int getSize();
	int getCapacity();
	void PrintAll(bool);
	~PriorityQueue();
};

