#pragma once
#include "EnemyData.h"

// @brief 敵クラス
// @details
// このクラスは、敵の基本的な属性を持ち、敵の行動や状態を管理します。
class Enemy
{
public:
	int ID;
	const char* Name;
	int HP;
	int ATK;
	int DEF;
	int SPD;
	int Gold;
	int EXP;
	Element Element;
	float CriticalRate;

	Enemy(const EnemyData& data)
		: ID(data.ID),
		Name(data.Name),
		HP(data.HP),
		ATK(data.ATK),
		DEF(data.DEF),
		SPD(data.SPD),
		Gold(data.Gold),
		EXP(data.EXP),
		Element(data.Element),
		CriticalRate(data.CriticalRate)
	{
	}
};