/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdegraf <wdegraf@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 14:59:14 by wdegraf           #+#    #+#             */
/*   Updated: 2024/11/24 18:31:29 by wdegraf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

/// @brief The ScavTrap class models a game character with basic
/// attributes and actions. Inherits from ClapTrap.
class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(const std::string& name);
		ScavTrap(const ScavTrap& clone);
		ScavTrap& operator=(const ScavTrap& clone);
		~ScavTrap();

		void	attack(const std::string& target);
		void	guardGate();
};

#endif