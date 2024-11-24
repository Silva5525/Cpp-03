/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdegraf <wdegraf@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 16:08:16 by wdegraf           #+#    #+#             */
/*   Updated: 2024/11/24 14:50:09 by wdegraf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/// @brief Default constructor for ClapTrap.
ClapTrap::ClapTrap() 
	: name("ClapTrap"), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap default constructor called. ClapTrap is free" << ".\n";
}

/// @brief Name constructor for ClapTrap.
/// @param name for the ClapTrap.
ClapTrap::ClapTrap(const std::string& name) 
	: name(name), hitPoints(10), energyPoints(10), attackDamage(10)
{
	std::cout << "ClapTrap name constructor called for " << name << ".\n";
}

/// @brief Copy constructor for ClapTrap.
ClapTrap::ClapTrap(const ClapTrap& clone)
{
	*this = clone;
	std::cout << "ClapTrap copy constructor called for " << name << ".\n";
}

/// @brief Assignation operator for ClapTrap.
/// @param clone objekt to assign from.
/// @return reference to the assigned ClapTrap (*this).
/// @note if (this != &clone) is a common check to prevent
/// self-assignment should be done in every assignation operator.
ClapTrap& ClapTrap::operator=(const ClapTrap& clone)
{
	if (this != &clone)
	{
		this->name = clone.name;
		this->hitPoints = clone.hitPoints;
		this->energyPoints = clone.energyPoints;
		this->attackDamage = clone.attackDamage;
	}
	std::cout << "ClapTrap assignation operator called for " << name << ".\n";
	return (*this);
}

/// @brief Destructor for ClapTrap.
ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called for " << name << ".\n";
}

/// @brief Attack function for ClapTrap, calls takeDamage function for target.
/// Costs 1 energyPoint.
/// @param target to be attacked.
/// @note i would prefer to direkly call takeDamage function here
/// but the subjekt requires to pass const std::string& target and not
/// ClapTrap& target. So i have to call takeDamage function from the main.
void	ClapTrap::attack(const std::string& target)
{
	if (energyPoints > 0 && hitPoints > 0)
	{
		energyPoints--;
		std::cout << "ClapTrap " << name << " attacks " << target
				<< ", causing " << attackDamage << " points of damage.\n";
	}
	else
	{
		std::cout << "ClapTrap " << name << 
				" cannot attack due to insufficient energiy or healty.\n";
	}
}

/// @brief Take damage function for ClapTrap.
/// @param amount of damage to be taken.
void	ClapTrap::takeDamage(unsigned int amount)
{
	hitPoints -= amount;
	if (hitPoints < 0)
		hitPoints = 0;
	std::cout << "ClapTrap " << name << " takes " << amount
			<< " points of damage. Remaining HP: " << hitPoints << "\n";
}

/// @brief Be repaired function for ClapTrap. calling costs 1 energyPoint.
/// @param amount of hit points to be repaired.
void	ClapTrap::beRepaired(unsigned int amount)
{
	if (energyPoints > 0 && hitPoints > 0)
	{
		hitPoints += amount;
		energyPoints--;
		std::cout << "ClapTrap " << name << " repairs itself for "
				<< amount << " hit points. Remaining HP: "
				<< hitPoints << "\n"; 
	}
	else
		std::cout << "ClapTrap " << name <<
				" cannot repair due to insufficient energy or health.\n";
}

/// @brief Display status function for ClapTrap.
/// not in the subjekt but i think it is a good idea to have it.
void	ClapTrap::displayStatus() const
{
	std::cout << "ClapTrap " << name <<  " HP: " << hitPoints
			<< ", Energy: " << energyPoints
			<< ", Attack Damage: " << attackDamage << "\n";
}