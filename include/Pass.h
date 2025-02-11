
#pragma once
#include"Feature.h"

//----------class-----------
class Pass :public Feature {
public:
	Pass() :Feature(AnimationSet{ animation_skip, skipImageCount,true,1, sizeOfPassWorm }) {}
	virtual void draw(sf::RenderWindow& window) {}
	void update() {};
	virtual void aliveFeature(sf::Event& event, sf::RenderWindow& window,
		Worm& worm, int& drawFeature);
	virtual void applyFeature(sf::Event& event, int& drawFeature);
	virtual ~Pass() = default;
};