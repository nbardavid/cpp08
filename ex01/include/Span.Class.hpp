/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.Class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 11:09:01 by nbardavi          #+#    #+#             */
/*   Updated: 2024/05/30 11:11:26 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_CLASS_HPP
# define SPAN_CLASS_HPP

#include <string>
#include <vector>
class Span{
public:
	Span();
	Span(unsigned int N);
	Span (const Span& other);
	~Span();
	void addNumber(int nbr);
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
