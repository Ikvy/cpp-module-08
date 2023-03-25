/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 13:09:22 by mmidon            #+#    #+#             */
/*   Updated: 2023/03/25 13:40:14 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::vector<int> list;
	list.push_back(0);
	list.push_back(10);
	list.push_back(20);
	list.push_back(30);
	list.push_back(30);
	list.push_back(20);
	list.push_back(100);
	std::cout << "easyfind searching for 0 : " << easyfind(list, 0) << std::endl;
	std::cout << "easyfind searching for 5 : " << easyfind(list, 5) << std::endl;
	std::cout << "easyfind searching for 30 : " << easyfind(list, 30) << std::endl;
}
