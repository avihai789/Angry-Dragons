#pragma once
#include "NonMoveable.h"
class Guards :
	public NonMoveable
{
public:
	Guards();
	Guards(b2World & world, int width, sf::Vector2i position, bool circle, sf::Vector2u windowSize);
	~Guards();
	bool checkAbove(float gY, float wY);
	virtual void updateSprite();

	// Inherited via NonMoveable
	virtual void collision(GameObject & object) override;
	virtual void collision(Drogon & object) override;
	virtual void collision(Viserion & object) override;
	virtual void collision(Rhaegal & object) override;
	virtual void collision(Rock & object) override;
	virtual void collision(Ice & object) override;
	virtual void collision(Wood & object) override;
	virtual void collision(Guards & object) override;
};

