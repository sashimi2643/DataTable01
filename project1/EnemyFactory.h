#pragma once
#include "EnemyData.h"

class Enemy;

// @brief 敵のっ生成を担当するファクトリークラス
class EnemyFasctory
{
	// @brief 敵のデータを格納するテーブル
	static const EnemyData EnemyTable[];
	// @brief 敵のデータテーブルのサイズ
	static const int EnemyTableSize;

public:
	// @brief 指定されたIDに基づいて敵を生成します
	// @param [in] ID 敵の ID
	// @return 生成された敵のポインタ。IDが見つからなかった場合は nullptr を返します。
	// @details
	// このメソッドは、指定されたIDに基づいて敵を生成します。
	// IDが見つからなかった場合は nullptr を返します。
	static Enemy* CreateEnemy(int ID);
};