/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_pars.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarem <skarem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 15:33:22 by skarem            #+#    #+#             */
/*   Updated: 2022/06/05 19:04:58 by skarem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int  ft_check_dbl(char *tab)
{
    int i;
    int j;
    char **nb;
     
    nb = ft_split(tab, ' ');
    i = 0;
    while(nb[i])
    {
        j = i + 1;
        while(nb[j])
        {
            if(ft_atoi(nb[i]) == ft_atoi(nb[j]))
                return(0);
            j++;
        }
        i++;
    }
    i = 0;
    while(nb[i])
        free(nb[i++]);
    free(nb);
    return(1);
}

size_t     ft_check_space(char *x)
{
    int     i;
    size_t  j;

    i = 0;
    j = 0;
    while(x[i])
    {
        if(x[i] == ' ')
            j++;
        i++;
    }
    return (j);
}

int  ft_space_len(char **t)
{
    int i;
    
    i = 1;
    while(t[i])
    {
        if(ft_strlen(t[i]) == ft_check_space(t[i]))
            return(0);
        i++;
    }
    return(1);
}

char    *ft_pars(char **argv, int ac)
{
    char    *str;
    int     i;

    i = 1;
    str = (char *)malloc(1 * sizeof(char));
    if(!str)
        return(NULL);
    str[0] = '\0';
    while(i < ac + 1)
    {
        str = ft_strjoin(str, argv[i]);
        str = ft_strjoin(str, " ");
        i++;
    }
    if (!ft_check_dbl(str))
    {
        write(1, "error", 6);
        exit(1);
    }
    if(ft_space_len(argv) == 0)
    {
        write(2, "error\n", 6);
        exit(1);
    }
    return(str);
}