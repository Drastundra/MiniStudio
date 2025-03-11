#pragma once

namespace sf { class Event; }

class IState
{
public:
	virtual void update() = 0;
	virtual void handleInput(const sf::Event& event) = 0;
	virtual void setTexture() = 0;
};

class Idle : public IState
{
public:
	void isDoingNothing(const sf::Event& event);

private:
	bool m_isDoingNothing;
};

class Movement : public IState
{
public:
	void isMoving(const sf::Event& event);

private:
	bool m_isMovingUp;
	bool m_isMovingDown;
	bool m_isMovingLeft;
	bool m_isMovingRight;
};

class Attack : public IState
{
public:
	void isAttacking(const sf::Event& event);

private:
	bool m_isMeleAttack;
	bool m_isRangeAttack;
};

class Block : public IState
{
public:
	void isBlocking(const sf::Event& event);

private:
	bool m_isBlocking;
};

class Dash : public IState
{
public:
	void isDashing(const sf::Event& event);

private:
	bool m_isDashing;
};

class Hurt : public IState
{
public:
	void isTackingDamage(const sf::Event& event);

private:
	bool m_isTackingDamage;
};

class Death : public IState
{
public:
	void isDead(const sf::Event& event);

private:
	bool m_isDead;
};