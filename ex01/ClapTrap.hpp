/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdegraf <wdegraf@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 16:11:00 by wdegraf           #+#    #+#             */
/*   Updated: 2024/11/24 14:14:35 by wdegraf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

/// @brief The ClapTrap class models a game character with basic
/// attributes and actions.
/// @private name, hitPoints, energyPoints, attackDamage.
/// @public default constructor, name constructor, copy constructor,
/// copy assignment operator, destructor..
/// then the member functions attack, takeDamage, beRepaired and
/// displayStatus
class ClapTrap
{
	private:
		std::string		name;
		int				hitPoints;
		int				energyPoints;
		int				attackDamage;

	public:
		ClapTrap();
		ClapTrap(const std::string& name);
		ClapTrap(const ClapTrap& other);
		ClapTrap& operator=(const ClapTrap& other);
		~ClapTrap();

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		void 	displayStatus() const;
};

#endif
