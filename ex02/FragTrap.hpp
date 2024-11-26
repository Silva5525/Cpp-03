/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdegraf <wdegraf@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 14:59:14 by wdegraf           #+#    #+#             */
/*   Updated: 2024/11/26 19:29:59 by wdegraf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
/// @brief The FragTrap class models a game character with basic
/// attributes and actions. Inherits from ClapTrap.
/// has the additional member function highFivesGuys.
/// @note attack is commentet becouse its not needed in the subjekt but its 
/// nice to see how the behaviour of the derived class changes.
class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(const std::string& name);
		FragTrap(const FragTrap& clone);
		FragTrap& operator=(const FragTrap& clone);
		~FragTrap();

		// void	attack(const std::string& target);
		void	highFivesGuys(void);
};

#endif