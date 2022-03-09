/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 20:50:14 by ryoshio-          #+#    #+#             */
/*   Updated: 2022/03/09 05:07:02 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static void beginning (t_fractol *fractol, char **str);
static void choose (t_fractol *fractol);




int	main(int argc, char ** argv)
{
	t_fractol	*fractol;
	

	if (check_arguments(argc, argv) == 1)
	{
		fractol = (t_fractol *)malloc(sizeof (t_fractol));
		beginning(fractol, argv);
		choose(fractol);
		
		mlx_put_image_to_window(fractol->mlx, fractol->win, fractol->img, 0, 0);
	  
		mlx_hook(fractol->win, 17, 1L<<0, &close_program, fractol);
		
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
	if(fractol->name[9]=='j')
	{
		    fractol->julia_x = atf(str[2]);
    		fractol->julia_y= atf(str[3]);
			//fractol->julia_x = -1.476;
    		//fractol->julia_y= 0.0;
	}

	fractol->img = mlx_new_image(fractol->mlx, IMG_X, IMG_Y);
	fractol->img_addr = (char *)mlx_get_data_addr(fractol->img, &fractol->img_bits_per_pixel, &fractol->img_line_length, &fractol->img_endian);

}


static void choose (t_fractol *fractol)
{
	if(fractol->name[9]=='m')
		mandelbrot(fractol);
	if(fractol->name[9]=='j')
		julia(fractol);
}