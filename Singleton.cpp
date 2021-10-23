class Singleton
{
private:
	Singleton() {}
	~Singleton() {}
	static Singleton* Instance;
public:
	static Singleton* GetInstance()
	{
		if (Instance == nullptr)
		{
			Instance = new Singleton;
		}
		return Instance;
	}
	void print() {}
};
Singleton* Singleton::Instance = nullptr;

class Game
{
private:
	Singleton* singleton;
public:
	Game()
		: singleton(Singleton::GetInstance())
	{}
	~Game();
	void print()
	{
		singleton->print();
	}
};