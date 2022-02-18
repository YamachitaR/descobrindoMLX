/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 20:52:07 by ryoshio-          #+#    #+#             */
/*   Updated: 2022/02/16 19:06:53 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FRACTOL_H

#include "minilibx-linux/mlx.h"
# include <math.h>
# include <unistd.h> // verifica se pode 
# include <stdlib.h>  // verifica se pode 



// inicio-Libft
int	ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlen(const char *str);
void	ft_putstr_fd(char *s, int fd);

// fim -libft


// inicio-ft_check_argv
int ft_check_argc_argv(int argc, char **argv);

#endif