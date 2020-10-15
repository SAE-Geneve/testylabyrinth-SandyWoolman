#include "character.h"

#include <cmath>
#include <limits>

Character::Character(
	std::pair<int, int> xy, 
	int health_points, 
	int attack, 
	int defence, 
	const std::string& name) :
		xy_(xy),
		health_points_(health_points),
		attack_(attack),
		defence_(defence),
		name_(name) {}

void Character::Attack(Character& enemy) const
{
	// TODO: Done?
	if (Distance(enemy) == 1.0)
	{
		enemy.SetHealthPoints(enemy.GetHealthPoints() - attack_ + enemy.GetDefence());
	}
}


bool Character::IsDead() const
{
	//TODO : Done?
	if (health_points_ <= 0)
	return true;
	return false;
}

float Character::Distance(const Character& character) const
{
	// TODO: Done?
	return std::sqrt(std::pow(xy_.first - character.GetPosition().first, 2.0) + std::pow(xy_.second - character.GetPosition().second, 2.0));
}
