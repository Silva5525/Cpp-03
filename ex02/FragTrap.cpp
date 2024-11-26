/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdegraf <wdegraf@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:04:57 by wdegraf           #+#    #+#             */
/*   Updated: 2024/11/26 19:30:03 by wdegraf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/// @brief Default constructor.
FragTrap::FragTrap()
	: ClapTrap("FragTrap")
{
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap default constructor called./n";
}

/// @brief Name constructor for FragTrap.
/// @param name for the FragTrap.
FragTrap::FragTrap(const std::string& name)
	: ClapTrap(name)
{
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap name constructor called for " << name << ".\n";
}

/// @brief Copy constructor for FragTrap just for Orthodoxy.
/// @param clone to copy from.
FragTrap::FragTrap(const FragTrap& clone)
	: ClapTrap(clone)
{
	std::cout << "FragTrap copy constructor called for " << name << ".\n";
	*this = clone;
}

/// @brief Assigment operator for FragTrap just for Orthodoxy.
/// @param clone to assign from.
/// @return reference to the assigned FragTrap (*this).
FragTrap& FragTrap::operator=(const FragTrap& clone)
{
	if (this != &clone)
		ClapTrap::operator=(clone);
	std::cout << "FragTrap assignment operator called for " << name << ".\n";
	return (*this);
}

/// @brief Destructor for FragTrap.
FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called for " << name << ".\n";
}

// /// @brief Attack function for FragTrap just for showing how the behaviour changes.
// void	FragTrap::attack(const std::string& target)
// {
// 	if (energyPoints > 0 && hitPoints > 0)
// 	{
// 		std::cout << "FragTrap " << name << " attacks " << target 
// 			<< ", causing " << attackDamage << " points of damage!\n";
// 		energyPoints -= 1;
// 	}
// 	else
// 		std::cout << "FragTrap " << name << " is out of energy or hitpoints.\n";
// }

/// @brief Special from FragTrap to request high fives.
void	FragTrap::highFivesGuys(void)
{
	if (hitPoints > 0)
		std::cout << "FragTrap " << name
				<<" is happy to request high fives from everyone around.\n";
	else
		std::cout << "FragTrap " << name
				<< " is to damaged and can't ask for high fives.\n";
}