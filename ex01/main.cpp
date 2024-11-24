/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdegraf <wdegraf@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 16:11:53 by wdegraf           #+#    #+#             */
/*   Updated: 2024/11/24 14:45:07 by wdegraf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/// @brief my little test program for the ClapTrap class.
int	main(void)
{
	ClapTrap claptrap;
	ClapTrap clap("Claptron");
	ClapTrap trap("Trapling");

	clap.attack("Trapling");
	trap.takeDamage(10);
	
	clap.displayStatus();
	trap.displayStatus();
	claptrap.displayStatus();
	
	trap.attack("Claptron");
	claptrap.attack("Claptron");
	clap.takeDamage(0);

	clap.beRepaired(0);
	trap.beRepaired(0);

	return (0);
}