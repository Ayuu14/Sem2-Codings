#ifndef NUM_H
#define NUM_H

#include <iostream>
using namespace std;

template <class T1, class T2>

class Number2 {
private:
	T1 a;
	T2 b;

public:
	Number2();
	~Number2();
	void setA(T1);
	void setB(T2);
	void pairValues();


};

template<class T1, class T2>
inline Number2<T1, T2>::Number2()
{
}

template<class T1, class T2>
inline Number2<T1, T2>::~Number2()
{
}

template<class T1, class T2>
inline void Number2<T1, T2>::setA(T1 a)
{
	this->a = a;
}

template<class T1, class T2>
inline void Number2<T1, T2>::setB(T2 b)
{
	this->b = b;
}

template<class T1, class T2>
inline void Number2<T1, T2>::pairValues()
{
	cout << "Pair : ( " << a << " " << b << " ) " << endl;
}

#endif
