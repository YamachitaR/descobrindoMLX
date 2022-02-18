/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_argv.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 21:00:02 by ryoshio-          #+#    #+#             */
/*   Updated: 2022/02/17 21:52:25 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"
int ft_check_argc_argv(int argc, char **argv)
{
    char 
    if(argc < 2 || argc > 4)
    {
        error_message();
        return (0));
    }
    
    if(arg=2)
    {
        if(check_same_name(argv[1], "Mandebroat") == 0)
            return (1);
        if(check_same_name(argv[1], "mandebroat") == 0)
            return (1);
        if(check_same_name(argv[1], "Julia") == 0)
            return(1);
        if(check_same_name(argv[1], "julia") == 0)
            return (1);
    }
    
    

    
}



static int  check_same_name(char s1, char s2)
{
    int index;
    index = 0;
    
    if (ft_strlen(s1)!= ft_strlen(s2))
        return (0)
    while(s1[index] != '\0')
    {
        if (s1[index] != s2[index])
            return (0);
        index ++;
    }
    return (1);
}

void error_message (void)
{
    ft_putstr_fd("Maybe you spelled it wrong or passed the wrong parameter.\n", 1);
    ft_putstr_fd("Some examples:",1);

    //fazer os exemplo:
}