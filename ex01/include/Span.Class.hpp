/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.Class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 11:09:01 by nbardavi          #+#    #+#             */
/*   Updated: 2024/06/05 11:17:22 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_CLASS_HPP
# define SPAN_CLASS_HPP

#include <cctype>
#include <vector>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <algorithm>

class Span{
public:
	Span();
	Span(unsigned int N);
	Span (const Span& other);
	~Span();
	void addNumber(int nbr);
	void addNumber(size_t n, time_t seed);
	Span&	operator=(const Span& other);
	unsigned int getN() const;
	int longestSpan();
	int shortestSpan();
	void sort();
private:
	unsigned int _n;
	std::vector<int> _numbers;
};


#endif
