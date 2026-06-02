#include <iostream>
#include "EnemyFactory.h"
#include "Enemy.h"

int main()
{
	for (int i = 1; i <= 4; i++) {
		Enemy* enemy = EnemyFactory::CreateEnemy(i);

		printf("%s EXP:%d, Gold:%d, CriticalRate:%f\n", enemy->Name, enemy->EXP, enemy->Gold, enemy->CriticalRate);

		delete enemy;
	}



	return 0;
}