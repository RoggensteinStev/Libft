/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stroggen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 15:27:53 by stroggen          #+#    #+#             */
/*   Updated: 2026/11/07 15:30:52 by stroggen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_sep(char c, char charset)
{
	if (c == charset)
		return (1);
	return (0);
}

char	**is_string(char *str, char charset, char **tab)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (is_sep(str[i], charset) && is_sep(str[i + 1], charset))
			i++;
		else if (is_sep(str[i], charset) && is_sep(str[i + 1]
				, charset) == 0 && str[i + 1])
		{
			count++;
			i++;
		}
		else
			i++;
	}
	tab = malloc(sizeof(char *) * (count + 2));
	if (!tab)
		return (NULL);
	return (tab);
}

char	*ft_strdup_words(char *str, int beg, int end)
{
	char	*word;
	int		i;
	int		index;

	i = 0;
	index = beg;
	word = malloc(sizeof(char) * (end - beg + 1));
	if (!word)
		return (NULL);
	while (index < end)
	{
		word[i] = str[index];
		i++;
		index++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const s, char c)
{
	char	**tab;
	int		indextab;
	int		i;
	int		j;

	i = 0;
	j = 0;
	tab = NULL;
	indextab = 0;
	tab = is_string(s, c, tab);
	while (s[i])
	{
		while (s[i] && is_sep(s[i], c))
			i++;
		j = i;
		if (!s[i])
			break ;
		while (s[i] && !(is_sep(s[i], c)))
			i++;
		tab[indextab] = ft_strdup_words(s, j, i);
		indextab++;
	}
	tab[indextab] = NULL;
	return (tab);
}
