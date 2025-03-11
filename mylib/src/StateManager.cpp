#include <SFML/Graphics.hpp>

#include "StateManager.h"

void Idle::isDoingNothing(const sf::Event& event)
{
    m_isDoingNothing = 0;
}

void Movement::isMoving(const sf::Event& event)
{
    m_isMovingUp = sf::Keyboard::isKeyPressed(sf::Keyboard::Up);
    m_isMovingDown = sf::Keyboard::isKeyPressed(sf::Keyboard::Down);
    m_isMovingLeft = sf::Keyboard::isKeyPressed(sf::Keyboard::Left);
    m_isMovingRight = sf::Keyboard::isKeyPressed(sf::Keyboard::Right);
}

void Attack::isAttacking(const sf::Event& event)
{
    m_isMeleAttack = sf::Keyboard::isKeyPressed(sf::Keyboard::A);
    m_isRangeAttack = sf::Keyboard::isKeyPressed(sf::Keyboard::Z);
}

void Block::isBlocking(const sf::Event& event)
{
    m_isBlocking = sf::Keyboard::isKeyPressed(sf::Keyboard::E);
}

void Dash::isDashing(const sf::Event& event)
{
    m_isDashing = sf::Keyboard::isKeyPressed(sf::Keyboard::Space);
}

void Hurt::isTackingDamage(const sf::Event& event)
{
	
}

void Death::isDead(const sf::Event& event)
{
	
}
