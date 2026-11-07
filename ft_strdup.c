/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stroggen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 11:15:30 by stroggen          #+#    #+#             */
/*   Updated: 2026/11/02 11:16:55 by stroggen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strdup(const char *s)
{
	char	*ret;
	int		i;

	ret = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!(ret))
		return (NULL);
	i = 0;
	while (src[i])
	{
		ret[i] = s[i];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
