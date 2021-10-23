#include <iostream>
using namespace std;

class LeagueOfLegends
{
private:
	float	hp;
	int		level;
public:
	LeagueOfLegends() { cout << " 게임 생성 " << endl; }
	virtual ~LeagueOfLegends() { cout << " 게임 소멸 " << endl; }
	
	// virtual 가상 함수
	virtual	void move() {}
	virtual void attack() {}
};

class Champion : public LeagueOfLegends
{
private:
	float	hp;
	float	mana;
	int		level;
public:
	Champion() { cout << " 챔피언 생성 " << endl; }
	~Champion() { cout << " 챔피언 소멸 " << endl; }

	// override 재정의
	void move() override {}
	void attack() override {}

	void skill() {} 
};

int main()
{
	//Champion* umi = new Champion;
	LeagueOfLegends* umi = new Champion;

	delete umi;

	return 0;
}