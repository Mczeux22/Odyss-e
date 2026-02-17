/**
 * @ Author: Lopapon
 * @ Create Time: 2026-02-09 19:30:57
 * @ Modified by: Lopapon
 * @ Modified time: 2026-02-09 20:44:40
 * @ Description:
 */

#include "lib.h"

struct	ressource
{
	int	ress1;
	int	ress2;
	int	ress3;
	int	ress4;
	int	ress5;
};

struct	troops
{
	int	attack;
	int	range_attack;
	int	defense;
	int	range_defense;
	int	speed;
	int	training_time;
	int	gold_cost;
	int	pillage;
	//int	pop_cost
};

struct	Construction
{
	int	buildingId;
	//time_t	endTime;
};
