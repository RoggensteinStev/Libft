/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stroggen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 16:40:13 by stroggen          #+#    #+#             */
/*   Updated: 2026/11/07 16:54:43 by stroggen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	i = 0;
	if (little == NULL || ft_strlen(little) == 0)
		return (big);
	while (big[i] && i < len)
	{
		if (big[i] == little[0])
		{
			if (ft_strncmp(big + i, little, ft_strlen(little)) == 0)
				return (big + i);
		}
		i++;
	}
	return (NULL);
}
