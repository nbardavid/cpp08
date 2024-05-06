/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.Class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 11:09:01 by nbardavi          #+#    #+#             */
/*   Updated: 2024/05/06 14:59:37 by nbardavi         ###   ########.fr       */
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
	unsigned int getNbr() const;
private:
	unsigned int _nbr;
	std::vector<int> _tab;
};

Span::Span():_nbr(0){}

Span::Span(unsigned int N):_nbr(N){}

Span::Span(const Span& other):_nbr(other.getNbr()){
	
}

Span& Span::operator=(const Span& other){
	if (this != &other){
		this->_nbr = other.getNbr();
		this->;
	}
	return *this;
}

Span::~Span(){}

unsigned int Span::getNbr () const{return this->_nbr;}

#endif
