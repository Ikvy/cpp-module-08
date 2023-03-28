/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:28:59 by mmidon            #+#    #+#             */
/*   Updated: 2023/03/28 17:10:01 by mmidon           ###   ########.fr       */
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
	this->stock = std::vector<int>(cpy.stock);
	return (*this);
}

void Span::addNumber(int nbr)
{
	if (stock.size() > N)
		throw Span::OutOfBondsException();
	else
		stock.push_back(nbr);
}

int Span::shortestSpan()
{
	int current;
	std::vector<int> tmp(stock);
	sort(tmp.begin(), tmp.end());
	int shortest = tmp[1] - tmp[0];

	for (std::vector<int>::iterator it = tmp.begin() + 1; it != tmp.end(); it++)
	{
		current = *it - *(it - 1);
		if (current < shortest)
			shortest = current;
	}
	return (shortest);
}

void Span::insert(int pos, unsigned int n, int val)
{
	if (stock.size() + n > N)
		throw Span::OutOfBondsException();
	for (unsigned int i = 0; i < n; i++)
	{
		stock.insert(stock.begin() + pos + i, val);
	}
}

void Span::show()
{
	for (std::vector<int>::iterator it = stock.begin(); it != stock.end(); it++)
	{
		std::cout << *it << std::endl;
	}
}

int Span::longestSpan()
{
	if (stock.size() <= 1)
		throw (Span::NoSpanException());
	int max = stock[0];
	int min = stock[0];

	for (std::vector<int>::iterator it = stock.begin(); it != stock.end(); it++)
	{
		if (*it > max)
			max = *it;
		if (*it < min)
			min = *it;
	}
	return (max - min);
}
