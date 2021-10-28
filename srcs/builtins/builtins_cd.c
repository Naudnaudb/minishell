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

int	ft_cd(char *path, t_all *all)
{
	int		line_nbr;
	char	*cwd;
	char	*oldpwd;

	if (!path || !(*path) || ft_strncmp("~", path, 2) == 0)
	{
		line_nbr = get_env_line_nbr("HOME=", all);
		if (line_nbr != -1)
			path = all->env_vars[line_nbr] + 5;
		else if (!path)
			return (print_error("cd", "", "HOME not set"));
	}
	if (path && chdir(path) == -1 && (*path))
		return (print_error("cd", path, strerror(errno)));
	cwd = getcwd(NULL, 0);
	line_nbr = get_env_line_nbr("PWD=", all);
	if (line_nbr != -1)
		oldpwd = all->env_vars[line_nbr] + 4;
	else
		oldpwd = NULL;
	edit_or_add_env_line("OLDPWD=", oldpwd, all);
	edit_or_add_env_line("PWD=", cwd, all);
	free(cwd);
	return (0);
}
