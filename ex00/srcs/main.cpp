/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 09:57:35 by nbardavi          #+#    #+#             */
/*   Updated: 2024/06/05 10:40:31 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/colors.h"
#include "../include/easyfind.hpp"
#include <cctype>
#include <vector>

int main() {
    std::vector<int> intTab;
    intTab.push_back(1);
    intTab.push_back(2);
    intTab.push_back(3);
    intTab.push_back(4);
    intTab.push_back(5);
    intTab.push_back(6);
    intTab.push_back(7);
    intTab.push_back(8);
    intTab.push_back(9);

    try {
        std::vector<int>::const_iterator intIt = easyfind(intTab, 1);
        std::cout << GREEN << "Found: " << *intIt << RESET << std::endl;
		easyfind(intTab, 10);
    } catch (const std::out_of_range& e) {
        std::cout << RED << "Exception caught: " << e.what() << RESET << std::endl;
    }

    return 0;
}
