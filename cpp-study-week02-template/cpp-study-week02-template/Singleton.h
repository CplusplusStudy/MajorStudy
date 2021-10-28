#pragma once
#include <iostream>

using namespace std;

template<class T>
class NPC
{
protected:
	NPC() { }
	~NPC() { }
	static T* inst;
public:
	static T* GetInstance();
	void DestroyInstance();
};

template<typename T>
T* NPC<T>::inst = 0; //Singleton init

template<typename T>
T* NPC<T>::GetInstance()
{
	if (inst == nullptr)
	{
		inst = new T;
	}

	return inst;
}

template<class T>
void NPC<T>::DestroyInstance()
{
	if (inst)
	{
		delete inst;
		inst = 0;
	}
}