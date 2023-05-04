#pragma once

class CSet {
	int N;
	unsigned int* Set = nullptr;

public:

	CSet();
	CSet(int N);
	CSet(const CSet& CS);
	CSet(CSet&& MS) noexcept;
	CSet& operator =(const CSet& Set2);
	CSet& operator =(CSet&& Set2) noexcept;
	~CSet();

	CSet& operator++();
	CSet& operator--();
	CSet& operator++(int);
	CSet& operator--(int);

	friend unsigned int* add(CSet& ob, unsigned int* mainArr, int sizeOfmainArr);
	friend bool check(CSet& ob1, int num);
	friend CSet operator+(const CSet& Set1, const CSet& Set2);
	friend CSet operator-(const CSet& Set1, const CSet& Set2);
};
