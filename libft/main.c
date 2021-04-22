/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarilli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 02:34:04 by bmarilli          #+#    #+#             */
/*   Updated: 2021/04/22 02:34:05 by bmarilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdio.h>

int	main()
{

	int len = 12;
	int a[] = { 5, 4, 3, 2, 1 , 43 , 4 ,2 ,4 ,435 ,56, 3};

	int i = 0;
	while (i < len)
	{
		printf("%d ",a[i]);
		i++;
	}
	printf("\n");
	int len2 = 11;
	int c[] = {23,0,4,3,5,7,324,3,2,5,34};
	//ft_insert_sort_back(&a, len, ft_param_int());
	//ft_bubble_sort_back(&a, len, ft_param_int());
	//ft_merge_sort(&a, len, ft_param_int());
	ft_merge_sort_back(&c, len2, ft_param_int());
	i = 0;
	while (i < len2)
	{
		printf("!%d! ",c[i]);
		i++;
	}

	i = 0;
	while (i < len)
	{
		//printf("%d ",a[i]);
		i++;
	}

	int b[] = { 1};
	ft_insert_sort(&b, 1, ft_param_int());
	return (0);
}


