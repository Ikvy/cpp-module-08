/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 13:01:30 by mmidon            #+#    #+#             */
/*   Updated: 2023/03/25 13:35:29 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>


template <typename T>
int	easyfind(T list, int nbr)
{
	for (std::vector<int>::iterator i = list.begin(); i != list.end(); ++i)
	{
		if (*i == nbr)
			return nbr;
	}
	return (-1);
}
