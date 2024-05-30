/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 09:57:35 by nbardavi          #+#    #+#             */
/*   Updated: 2024/05/30 11:24:12 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/colors.h"
#include "../include/Span.Class.hpp"
#include <cctype>
#include <vector>
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    Span sp = Span(10000);

    std::srand(static_cast<unsigned int>(std::time(0)));
    for (int i = 0; i < 10000; ++i) {
        sp.addNumber(std::rand() % 100000);
    }
    std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
    std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
	try{
		sp.addNumber(2);
	}
	catch (std::exception){
		std::cout << "out of range" << std::endl;
	}
    return 0;
}
