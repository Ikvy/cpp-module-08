/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:28:59 by mmidon            #+#    #+#             */
/*   Updated: 2023/03/28 12:17:53 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : N(N) {

	return ;
}

Span::Span(const Span& cpy) {
	this->stock = std::vector<int>(cpy.stock);
	this->N = cpy.N;
}

Span::~Span() {
	return ;
}

Span& Span::operator=(const Span& cpy)
{
	this->N = cpy.N;
//	if (this->stock.size())
//		delete this->stock;
	this->stock = std::vector<int>(cpy.stock);
	return (*this);
}

void Span::addNumber(int nbr)
{
	if (stock.size() >= N)
		throw Span::OutOfBondsException();
	else
		stock.push_back(nbr);
}
/*
int Span::shortestSpan()
{
}
*/
int Span::longestSpan()
{
	if (stock.size() <= 1)
		throw (Span::NoSpanException());
	int max = stock[0];
	int min = stock[0];

	for (int i = stock.begin(), i != stock.end(), i++)
	{
		if (stock[i] > max)
			max = stock[i];
		if (stock[i] < min)
			min = stock[i];
	}
	return (max - min);
}
