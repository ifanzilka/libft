/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarilli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 15:13:52 by bmarilli          #+#    #+#             */
/*   Updated: 2021/02/13 15:53:53 by bmarilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_base(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] && (i < ((int)ft_strlen(str) - 1)))
	{
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

static int	ft_is_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (1);
		i++;
	}
	return (0);
}

static int	ft_num_is_base(char c, char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (0);
}

int			ft_atoi_base(char *str, char *base)
{
	unsigned	res;
	unsigned	last_res;
	int			i;
	int			sign;
	int			base_len;

	base_len = ft_strlen(base);
	i = 0;
	res = 0;
	sign = 1;
	if (base == NULL || ft_strlen(base) == 0 || ft_check_base(base) == 1)
		return (0);
	while ((9 <= str[i] && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (ft_is_base(str[i], base))
	{
		last_res = res;
		res = res * base_len + ft_num_is_base(str[i], base);
		if (last_res > res)
			return (sign > 0 ? -1 : 0);
		i++;
	}
	return (res * sign);
}
