/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.Class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 11:09:05 by nbardavi          #+#    #+#             */
/*   Updated: 2024/05/30 11:36:01 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.Class.hpp"

Span::Span():_n(0){}

Span::Span(unsigned int N):_n(N){}

Span::Span(const Span& other):_n(other.getN()){	
	_numbers = other._numbers;
}

Span& Span::operator=(const Span& other){
	if (this != &other){
		this->_n = other.getN();
		this->_numbers = other._numbers;
	}
	return *this;
}

Span::~Span(){}

unsigned int Span::getN () const{return this->_n;}

void Span::addNumber( int nbr ){
	if (this->getN() == _numbers.size()){
		throw std::exception();
	}
	else{
		_numbers.push_back(nbr);
	}
}

void Span::sort(){
	if (_numbers.size() == 0){
		throw std::exception();
	}
	int temp;
	for (std::size_t i = 0; i < _numbers.size(); i++){
		for (std::size_t j = i; j < _numbers.size(); j++){
			if (_numbers[j] < _numbers[i]){
				temp = _numbers[i];
				_numbers[i] = _numbers[j];
				_numbers[j] = temp;
			}
		}
	}
}

int Span::longestSpan(){
	if (_numbers.size() == 0){
		throw std::exception();
	} else if (_numbers.size() == 1){
		return 0;
	}
		
	this->sort();
	return (_numbers[_numbers.size() - 1] - _numbers[0]);
}

int Span::shortestSpan(){
	if (_numbers.size() == 0){
		throw std::exception();
	} else if (_numbers.size() == 1){
		return 0;
	}
	
	this->sort();
	int min = _numbers[_numbers.size() - 1] - _numbers[0];
	
	for (std::size_t i = 1; i < _numbers.size(); i++){
		if (_numbers[i] - _numbers[i - 1] < min){
			min = _numbers[i] - _numbers[i - 1];
		}
	}
	return min;
}
