#include "PriorityQueue.h"



PriorityQueue::PriorityQueue(int cap){
	if (cap > 0){
		capacity = cap;
		data = new int[cap];
		for (int i = 0; i < cap; i++){ data[i] = -1; }
		this->size = 0;
	}
	else{
		data = NULL;
		cap = 0;
		this->size = 0;
	}
	
}
bool PriorityQueue::Enqueue(int value){
	if ( !isFull() ){
		int stemp = 0;
		for (int i = size-1; i >=0;){
			if (data[i] > value){
				i--;
			}
			else{ // == , <
				stemp = i + 1; // value position
				break;
			}
		}
		
		/* value placing algo*/
		for (int j = size-1; j >= stemp; j--){ // size-1 - stemp
			data[j + 1] = data[j]; // forward moving
		}
		data[stemp] = value; // enqueue
		size++;
		return true;
	}
	return false;
}
int PriorityQueue::Dequeue(){
	int stemp = -1;
	if (!isEmpty()){
		int stemp = data[0];
		for (int i = 0; i<size; i++){
			data[i] = data[i + 1]; // backward moving
		}
		data[size] = -1; // space is empty
	}
	return stemp;
}
int PriorityQueue::peek(){
	if (this->size > 0){
		return data[0];
	}
	else{
		return -1;
	}
}
bool PriorityQueue::isEmpty(){
	return (size == 0);
}
bool PriorityQueue::isFull(){
	return (size == capacity);
}
int PriorityQueue::getSize(){
	return size;
}
int PriorityQueue::getCapacity(){
	return capacity;
}
void PriorityQueue::PrintAll(bool showHidden){
	int csize = 0;
	if (showHidden){
		csize = capacity;
	}
	else{
		csize = size;
	}
	for (int i = 0; i < csize; i++){
		cout << " " << data[i];
	}
}
PriorityQueue::~PriorityQueue(){
	delete[] data;
}

