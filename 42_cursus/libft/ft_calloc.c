/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitot <mpitot@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:42:36 by mpitot            #+#    #+#             */
/*   Updated: 2023/11/13 16:00:25 by mpitot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb == 0 && size == 0)
	{
		ptr = malloc(sizeof(char));
		if (!ptr)
			return (NULL);
		((char *) ptr)[0] = '\0';
	}
	else
	{
		ptr = malloc(size * nmemb);
		if (!ptr)
			return (NULL);
		ft_bzero(ptr, nmemb * size);
	}
	return (ptr);
}
