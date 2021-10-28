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

void	env_init(t_all *all)
{
	char	*cwd;
	char	*shlvl_str;
	int		shlvl_int;

	cwd = getcwd(NULL, 0);
	edit_or_add_env_line("PWD=", cwd, all);
	shlvl_str = get_env_str("SHLVL", all);
	if (!shlvl_str)
		edit_or_add_env_line("SHLVL=", "1", all);
	else
	{
		shlvl_int = ft_atoi(shlvl_str) + 1;
		free(shlvl_str);
		shlvl_str = ft_itoa(shlvl_int);
		edit_or_add_env_line("SHLVL=", shlvl_str, all);
		free(shlvl_str);
	}
	free(cwd);
}

int	get_env_line_nbr(char *to_find, t_all *all)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(to_find);
	while (all->env_vars[i])
	{
		if (ft_strncmp(to_find, all->env_vars[i], len) == 0 && \
			((to_find[len - 1] == '=') || \
				(to_find[len - 1] != '=' && all->env_vars[i][len] == '=')))
			return (i);
		i++;
	}
	return (-1);
}

void	envp_saving(char **envp, t_all *all)
{
	size_t	i;
	size_t	len;

	i = 0;
	while (envp[i])
		i++;
	all->env_amount = i;
	all->env_vars = (char **)malloc(sizeof(char *) * (i + 1));
	if (all->env_vars == NULL)
		return ;
	i = 0;
	while (envp[i])
	{
		len = ft_strlen(envp[i]);
		all->env_vars[i] = (char *)malloc(sizeof(char) * (len + 1));
		if (all->env_vars[i] == NULL)
			return (free_ptrs_array(all->env_vars));
		ft_strlcpy(all->env_vars[i], envp[i], len + 1);
		i++;
	}
	all->env_vars[i] = NULL;
}

char	*get_env_str(char *key, t_all *all)
{
	int	nbr;
	int	key_len;

	nbr = get_env_line_nbr(key, all);
	if (!key || !(*key) || nbr == -1)
		return (NULL);
	key_len = ft_strlen(key);
	if (all->env_vars[nbr][key_len] != '=')
		return (NULL);
	return (ft_strdup(&(all->env_vars[nbr][key_len + 1])));
}
