/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 13:28:44 by nbardavi          #+#    #+#             */
/*   Updated: 2024/05/06 10:37:07 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <stdexcept>
#include <algorithm>

template<typename T>
typename T::const_iterator easyfind(T tab, int nbr){
	typename T::const_iterator it = std::find(tab.begin(), tab.end(), nbr);
	if (it == tab.end()){
		throw std::out_of_range("Element not found");
	}
	return it;
}

#endif
