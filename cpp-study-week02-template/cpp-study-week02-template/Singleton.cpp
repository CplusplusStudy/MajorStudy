#include "Singleton.h"

class Bboyamy : public NPC<Bboyamy>
{
	friend NPC<Bboyamy>;
private:
	int count;
	Bboyamy() :count(0) {};
	~Bboyamy() {}
public:
	void printfinfo()
	{
		cout<<"I am Bboyamy"<<endl;
	}

	void countup()
	{
		this->count++;
	}
	void getcount()
	{
		cout << "Bboyamy age : "<<count << endl;
	}
};

class Jackson : public NPC<Jackson>
{
	friend NPC<Jackson>;
private:
	int index;
	Jackson() :index(0) {};
	~Jackson() {}
public:
	void printfinfo()
	{
		cout << "I am Jackson" << endl;
	}

	void countup()
	{
		this->index++;
	}

	void getcount()
	{
		cout << "Jackson age : " << index << endl;
	}
};

int main()
{
	//초기화
	Bboyamy* npc1 = Bboyamy::GetInstance();
	Bboyamy* npc11 = Bboyamy::GetInstance();

	Jackson* npc2= Jackson::GetInstance();


	//처음 값 print
	npc1->GetInstance()->printfinfo();
	npc11->GetInstance()->printfinfo();

	npc2->GetInstance()->printfinfo();

	//값 변경
	npc1->countup();
	npc1->countup();
	npc11->countup();

	npc2->countup();
	
	//값 변경됨 확인
	npc1->GetInstance()->getcount();
	npc11->GetInstance()->getcount();

	npc2->GetInstance()->getcount();
	
	return 0;
}