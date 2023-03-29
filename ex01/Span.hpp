/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 14:23:51 by mmidon            #+#    #+#             */
/*   Updated: 2023/03/29 09:08:48 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <vector>

class Span{

	public:
		Span(unsigned int N);
		Span(const Span& cpy);
		~Span();
		Span& operator=(const Span& cpy);
		
		void addNumber(int nbr);
		int shortestSpan();
		int longestSpan();

		void insert(int pos, unsigned int n, int val);
		void show();

		class OutOfBondsException : public std::exception{
		public:
			 const char *what() const throw(){ return "no room for this";};
		};
		class NoSpanException : public std::exception{
		public:
			 const char *what() const throw(){ return "not enough numbers to do that";};
		};

	private:
		unsigned int N;
		std::vector<int> stock;
};
