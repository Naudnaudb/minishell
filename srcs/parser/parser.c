/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 08:29:19 by cmarley           #+#    #+#             */
/*   Updated: 2020/02/11 08:29:22 by cmarley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	counting_quotes(char *str, int *one_quotes, int *two_quotes, int i)
{
	if (str[i] == '\'')
	{
		(*one_quotes)++;
		if ((*two_quotes) % 2 || (str[i - 1] == '\\' && (*one_quotes) % 2))
			(*one_quotes)++;
	}
	else if (str[i] == '\"')
	{
		(*two_quotes)++;
		if ((*one_quotes) % 2 || (str[i - 1] == '\\'))
			(*two_quotes)++;
	}
}

void	parser(char *str, t_all *all)
{
	int			i;
	int			start;
	int			one_quotes;
	int			two_quotes;

	i = -1;
	start = 0;
	one_quotes = 0;
	two_quotes = 0;
	while (str[++i])
	{
		if (str[i] == '\'' || str[i] == '\"')
			counting_quotes(str, &one_quotes, &two_quotes, i);
		else if ((str[i] == ';' && (i != 0 && str[i - 1] != '\\')) && \
				(one_quotes % 2 == 0 && two_quotes % 2 == 0))
		{
			if (line_search(str, all, start, i - 1) == -1)
				return ;
			execution(all);
			start = i + 1;
		}
	}
	line_search(str, all, start, i - 1);
}

int	is_terminating_pipe_in_line(char *line)
{
	int	i;

	i = 0;
	if (line)
	{
		i = ft_strlen(line) - 1;
		while (i >= 0 && (line[i] == ' ' || line[i] == '\t'))
			i--;
		if (i > 0 && line[i] == '|')
		{
			ft_putstr_fd("pipe> ", 2);
			return (1);
		}
	}
	return (0);
}
