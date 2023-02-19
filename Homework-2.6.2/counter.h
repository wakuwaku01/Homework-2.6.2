#pragma once

class Counter {
private:
	int num;
public:
	Counter(int num = 1);

	void add();

	void sub();

	int get();

};