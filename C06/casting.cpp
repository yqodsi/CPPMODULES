#include <iostream>

class Entity
{
	public:
		virtual void Print(){}
};

class Player : public Entity
{
};

class Enemy : public Entity
{
};

int main()
{
	Player* player = new Player();
	Entity* actuallyPlayer = player;
	Entity* actuallyEnemy = new Enemy();
	//Player *p = (Player *)actuallyEnemy; // this might work but if enemy has functionatities that player doesn't have it will crash
	// here comes the rule of dynamic casting it checks if the casting is valid and return null in failure!
	Player* p0 = dynamic_cast<Player*>(actuallyEnemy);
	Player* p1 = dynamic_cast<Player*>(actuallyPlayer);
	std::cout << "p0 = " << p0 << "\np1" << p1 << std::endl;
	return 0;
}
