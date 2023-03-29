/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:36:21 by mmidon            #+#    #+#             */
/*   Updated: 2023/03/29 09:20:14 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	try
	{
		Span sp = Span(9);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		std::cout << "\nshow Span : \n";
		sp.show();
		sp.insert(2, 4, 150);
		std::cout << "\nshow modified Span : \n";
		sp.show();
	}
	catch(std::exception &e)
	{
		std::cout << "Exception caught : " << e.what() << std::endl;
	}

	std::cout << "Exceptions test : \n";
	try
	{
		Span small = Span(0);
		small.addNumber(789);
	}
	catch(std::exception &e)
	{
		std::cout << "Exception caught : " << e.what() << std::endl;
	}
	try
	{
		Span small2 = Span(3);
		small2.insert(0, 4, 789);
	}
	catch(std::exception &e)
	{
		std::cout << "Exception caught : " << e.what() << std::endl;
	}
	try
	{
		Span smalll = Span(150);
		smalll.insert(-12, 2, 45);
	}
	catch(std::exception &e)
	{
		std::cout << "Exception caught : " << e.what() << std::endl;
	}

/*
	try
	{
		Span test = Span(20000);
		test.insert(0, 19000, 2);
		test.show();
	}
	catch(std::exception &e)
	{
		std::cout << "Exception caught : " << e.what() << std::endl;
	}*/
	return 0;
}
