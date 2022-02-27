/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 03:42:15 by                   #+#    #+#             */
/*   Updated: 2022/02/27 07:25:06 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	my_colors(int keycode, t_fractol *fractol)
{
	if (keycode == 49)
		fractol->color = 'k';
	else if (keycode == 50)
		fractol->color = 'j';
	else if (keycode == 51)
		fractol->color = 'r';
	else if (keycode == 52)
		fractol->color = 'g';
	else if (keycode == 53)
		fractol->color = 'b';
	//my_fractal(mlx);
}

int	get_color(int i, t_fractol *fractol)
{
	if (fractol->color == 'k')
		return (i * 0x00ABCDEF);
	else if (fractol->color == 'j')
		return (i * 0x00FEDCBA);
	else if (fractol->color == 'r')
		return ((i * 65536) + 1966080);
	else if (fractol->color == 'g')
		return ((i * 256) + 10000);
	else if (fractol->color == 'b')
		return ((i * 256) + 100);
	return (0);
}
