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
	//�ʱ�ȭ
	Bboyamy* npc1 = Bboyamy::GetInstance();
	Bboyamy* npc11 = Bboyamy::GetInstance();

	Jackson* npc2= Jackson::GetInstance();


	//ó�� �� print
	npc1->GetInstance()->printfinfo();
	npc11->GetInstance()->printfinfo();

	npc2->GetInstance()->printfinfo();

	//�� ����
	npc1->countup();
	npc1->countup();
	npc11->countup();

	npc2->countup();
	
	//�� ����� Ȯ��
	npc1->GetInstance()->getcount();
	npc11->GetInstance()->getcount();

	npc2->GetInstance()->getcount();
	
	return 0;
}