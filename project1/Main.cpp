#include <iostream>
#include "EnemyFactory.h"
#include "Enemy.h"

int main()
{
	Enemy* enemy = EnemyFactory::CreateEnemy(1);

	std::cout << enemy->Data.Name << " EXP:" << enemy->Data.EXP << std::endl;

	delete enemy;

	return 0;
}