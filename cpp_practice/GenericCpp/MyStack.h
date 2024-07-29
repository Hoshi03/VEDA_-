#pragma once
#include <iostream>

using namespace std;

template<class T> 
class MyStack{
	int size;
	T* arr;
	int top = -1;

public:
	MyStack<T>();
	MyStack(int s);
	~MyStack();

	bool pop(T* x);
	bool push(T n);
	bool isEmpty();
	int getSize();
	int setSize(int n);
	int getTop();
	int getData();

	void printAll();
};

template<class T>
MyStack<T>::MyStack() {
	cout << "기본 스택 생성" << '\n';
	size = 10;
	arr = new T[size];
}

template<class T>
MyStack<T> ::MyStack(int s) {
	cout << "크기가 " << s << "인 스택 생성" << '\n';
	size = s;
	arr = new T[size];
}

template<class T>
MyStack<T>::~MyStack() {
	cout << "스택 소멸" << '\n';
	delete[] arr;
}

template<class T>
bool MyStack<T>::pop(T* x) {
	if (top == -1) return false;
	*x = (T)arr[top];
	top--;
	return true;
}

template<class T>
bool MyStack<T>::push(T n) {
	if (getTop() >= getSize()) setSize(size * 2);
	arr[++top] = n;
	return true;
}

template<class T>
int MyStack<T>::getSize() {
	return size;
}

template<class T>
int MyStack<T>::setSize(int n) {

	T* tmp = new T[n];

	if (n < getSize()) {
		copy(arr, arr + n, tmp);
		if (getTop() >= n) top = n - 1;
	}
	else copy(arr, arr + getSize(), tmp);

	delete[] arr;
	arr = tmp;
	size = n;

	return size;
}

template<class T>
int MyStack<T>::getTop() {
	return top;
}

template<class T>
int MyStack<T>::getData() {
	return arr[top];
}

template<class T>
bool MyStack<T>::isEmpty() {
	if (top == -1) return true;
	return false;
}

template<class T>
void MyStack<T>::printAll() { //일괄출력
	while (!isEmpty())
	{
		T tmp ;
		pop(&tmp);
		cout << tmp << " ";
	}
	cout << '\n';
}
