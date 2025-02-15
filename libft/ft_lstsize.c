/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 15:59:15 by ramzi             #+#    #+#             */
/*   Updated: 2020/11/15 15:59:16 by ramzi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	int lenght;

	lenght = 0;
	while (lst)
	{
		lst = lst->next;
		lenght++;
	}
	return (lenght);
}
