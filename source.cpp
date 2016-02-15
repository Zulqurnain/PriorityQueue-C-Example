#include<iostream>
#include "PriorityQueue.h"
using namespace std;

int main(){
	PriorityQueue pq(5);

	pq.Enqueue(5);
	pq.Enqueue(7);
	pq.Enqueue(2);
	pq.Enqueue(0);
	pq.Dequeue();
	pq.PrintAll(true);

	system("PAUSE");
	return 0;
}
