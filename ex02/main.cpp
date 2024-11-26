/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdegraf <wdegraf@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 16:11:53 by wdegraf           #+#    #+#             */
/*   Updated: 2024/11/26 19:29:52 by wdegraf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

/// @brief Main function to test the classes.
/// @note I addet the getAttackDamage function to the ClapTrap class
/// so we can use the attackDamage of the attacker in the takeDamage function.
int	main(void)
{
	std::cout << "--- Testing Default Construction ---\n";
	ScavTrap defaultScav;
	FragTrap defaultFrag;

	std::cout << "\n--- Testing Name Constructor ---\n";
	ScavTrap scav("GateKeeper");
	FragTrap frag("HighFiver");

	scav.displayStatus();
	frag.displayStatus();

	std::cout << "\n--- Let the Fight Begin ---\n";

	scav.attack("HighFiver");
	frag.takeDamage(scav.getAttackDamage());  // Use attacker's attackDamage
	frag.attack("GateKeeper");
	scav.takeDamage(frag.getAttackDamage());
	scav.beRepaired(10);
	scav.guardGate();
	frag.highFivesGuys();
	frag.beRepaired(15);
	scav.attack("HighFiver");
	frag.takeDamage(scav.getAttackDamage());
	scav.attack("HighFiver");
	frag.takeDamage(scav.getAttackDamage());
	scav.attack("HighFiver");
	frag.takeDamage(scav.getAttackDamage());
	scav.attack("HighFiver");
	frag.takeDamage(scav.getAttackDamage());
	scav.attack("HighFiver");
	frag.takeDamage(scav.getAttackDamage());
	frag.beRepaired(15);
	frag.highFivesGuys();
	
	std::cout << "\n--- Final Status Check ---\n";
	scav.displayStatus();
	frag.displayStatus();

	std::cout << "\n--- Destruction Order ---\n";
	return (0);
}
