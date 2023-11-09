#pragma once
#include "Laser.h"
#include "Asteroide.h"
#include "Ship.h"
#include "Keyboard.h"

class Game
{
	bool alive;
	int score;
	float dt;
	float timeSinceLastAsteroide = 0;

	std::vector<Laser> lasers;
	std::vector<Asteroide> asteroides;
	Ship ship;

	Timer timer;
	Keyboard keyboard;
public:
	Game();
	void start();
	void init();
	void moveShip();
	void addAsteroide();
	void addLaser();
	void moveObjects();
	void checkLaserAstroColision();
};