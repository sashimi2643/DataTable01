#include <iostream>
#include "EnemyFactory.h"
#include "Enemy.h"

int main()
{
	Enemy* enemy = EnemyFactory::CreateEnemy(1);

	printf("%s EXP:%d, Gold:%d, CriticalRate:%f\n", enemy->Name, enemy->EXP, enemy->Gold, enemy->CriticalRate);

	delete enemy;

	return 0;
}