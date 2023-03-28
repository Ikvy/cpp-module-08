/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 14:23:51 by mmidon            #+#    #+#             */
/*   Updated: 2023/03/28 12:22:53 by mmidon           ###   ########.fr       */
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
		void shortestSpan();
		int longestSpan();

		class OutOfBondsException : public std::exception{
		public:
			 const char *what() const throw(){ return "no room left for this";};
		};
		class NoSpanException : public std::exception{
		public:
			 const char *what() const throw(){ return "not enough numbers to do that";};
		};

	private:
		unsigned int N;
		std::vector<int> stock;
};