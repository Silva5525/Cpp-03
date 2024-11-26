/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdegraf <wdegraf@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 16:11:53 by wdegraf           #+#    #+#             */
/*   Updated: 2024/11/24 18:30:53 by wdegraf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

/// @brief my little test program for the ScavTrap & ClapTrap classes.
/// @note new in c++; Inheritance from classes.
/// the ClapTrap class is now an abstract class. (check ClapTrap.hpp protected not private)
/// Destruction happens in reverse order becouse:
/// - cleanup dependencies are handled in reverse of their initialization dependencies
/// - safe deallocation of resources, preventing derived classes from 
/// accessing invalidated base class resources.
/// - compiler automatically calls the base class destructor first.
int	main(void)
{
	std::cout << "--- Testing Default Construction ---\n";
	ScavTrap defaultScav;

	std::cout << "\n--- Testing Name Constructor ---\n";
	ScavTrap namedScav("Guardian");
	ScavTrap namedScav2("Target Dummy");

	namedScav.displayStatus();
	namedScav2.displayStatus();

	std::cout << "\n--- Testing Member Functions ---\n";
	namedScav.attack("Target Dummy");
	namedScav2.takeDamage(25);
	namedScav2.beRepaired(15);
	namedScav.guardGate();
	namedScav.attack("Target Dummy");
	namedScav2.takeDamage(90);
	namedScav2.beRepaired(15);
	namedScav2.guardGate();
	namedScav.guardGate();

	namedScav.displayStatus();
	namedScav2.displayStatus();

	std::cout << "\n--- Destruction Order ---\n";
	return (0);
}
