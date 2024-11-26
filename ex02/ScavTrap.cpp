/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdegraf <wdegraf@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 14:59:11 by wdegraf           #+#    #+#             */
/*   Updated: 2024/11/24 18:28:52 by wdegraf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/// @brief The ScavTrap default constructor.
ScavTrap::ScavTrap() 
	: ClapTrap("ScavTrap")
{
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "ScavTrap default constructor called. Ready to protect the Gate.\n";
}

/// @brief The ScavTrap name constructor.
/// @param name given for the ScavTrap.
ScavTrap::ScavTrap(const std::string& name)
	: ClapTrap(name)
{
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "ScavTrap name constructor called. " << name
			<< " is here to protect the Gate.\n";
}

/// @brief The ScavTrap copy constructor.
/// @note only here for Orthodox Canonical Class Form.
ScavTrap::ScavTrap(const ScavTrap& clone)
	: ClapTrap(clone)
{
	std::cout << "ScavTrap copy constructor called. " << name 
			<< " is here to protect the Gate.\n";
	*this = clone;
}

/// @brief Assignment operator for the ScavTrap.
/// @param clone Objekt to assign from.
/// @return Reference to the assigned ScavTrap (*this).
/// @note only here for Orthodox Canonical Class Form.
ScavTrap& ScavTrap::operator=(const ScavTrap& clone)
{
	if (this != &clone)
		ClapTrap::operator=(clone);
	std::cout << "ScavTrap assignment operator called. " << name 
			<< " is here to protect the Gate.\n";
	return (*this);
}

/// @brief The ScavTrap destructor.
/// Destruction happens in reverse order becouse:
/// - cleanup dependencies are handled in reverse of their initialization dependencies
/// - safe deallocation of resources, preventing derived classes from 
/// accessing invalidated base class resources.
/// - compiler automatically calls the base class destructor first.
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called. " << name
			<< " is no longer protecting the Gate.\n";
}

/// @brief The ScavTrap member function for attacking.
/// @param target to be attacked.
void	ScavTrap::attack(const std::string& target)
{
	if (energyPoints > 0 && hitPoints > 0)
	{
		std::cout << "ScavTrap " << name << " attacks " << target 
			<< ", causing " << attackDamage << " points of damage!\n";
		energyPoints -= 1;
	}
	else
		std::cout << "ScavTrap " << name << " is out of energy or hitpoints.\n";

}

/// @brief The ScavTrap member function for printing the guardGate message.
void	ScavTrap::guardGate()
{
	if (hitPoints > 0)
		std::cout << "ScavTrap " << name << " is now in Gate keeper mode.\n";
	else
		std::cout << "ScavTrap " << name << " is to damaged to guard the Gate.\n";
}
	