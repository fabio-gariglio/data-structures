#pragma once

template<class T>
class MultidimentionalList
{
private:
	T _values = int[1];
public:
	int Size = 0;
	void Add(T value)
	{
		Size++;
	}
};