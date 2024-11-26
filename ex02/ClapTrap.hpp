/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdegraf <wdegraf@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 16:11:00 by wdegraf           #+#    #+#             */
/*   Updated: 2024/11/24 15:48:23 by wdegraf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

/// @brief The ClapTrap class models a game character with basic
/// attributes and actions.
/// @protected name, hitPoints, energyPoints, attackDamage.
/// @public default constructor, name constructor, copy constructor,
/// copy assignment operator, destructor..
/// then the member functions attack, takeDamage, beRepaired and
/// displayStatus
/// @note New in c++;
/// the ClapTrap class is now an abstract class.
/// we use the protected keyword to make the attributes accessible
/// to derived classes which inherit from ClapTrap in this case ScavTrap.
class ClapTrap
{
	protected:
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
