/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 20:50:14 by ryoshio-          #+#    #+#             */
/*   Updated: 2022/02/27 07:32:58 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static void beginning (t_fractol *fractol, char **str);
static void choose (t_fractol *fractol);




int	main(int argc, char ** argv)
{
	t_fractol	*fractol;
	fractol = (t_fractol *)malloc(sizeof (t_fractol));

	if (check_arguments(argc, argv) == 1)
	{
		beginning(fractol, argv);
		choose(fractol);


		mlx_loop(fractol-> mlx);
		
	}
	return (0);
}


static void beginning (t_fractol *fractol, char **str)
{
	fractol->mlx = mlx_init();
	fractol->name = ft_strjoin( "Fractol: ", str[1]);
	fractol->win= mlx_new_window(fractol->mlx, IMG_X, IMG_Y, fractol->name);

	fractol->x_min = MIN_X;
	fractol->x_max = MAX_X;
	fractol->y_min = MIN_Y;
	fractol->y_max = MAX_Y;
	
	//retirar depois
	fractol->color='k';

	
	fractol->img = mlx_new_image(fractol->mlx, IMG_X, IMG_Y);
	fractol->img_addr = (char *)mlx_get_data_addr(fractol->img, &fractol->img_bits_per_pixel, &fractol->img_line_length, &fractol->img_endian);

}


static void choose (t_fractol *fractol)
{
	//if(fractol->name[9]=='m')
		mandelbrot(fractol);
}