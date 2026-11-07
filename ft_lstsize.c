/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stroggen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 15:19:21 by stroggen          #+#    #+#             */
/*   Updated: 2026/11/07 15:20:52 by stroggen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	i;
	t_list		*tmp;

	i = 1;
	tmp = lst;
	while (tmp->next)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}
