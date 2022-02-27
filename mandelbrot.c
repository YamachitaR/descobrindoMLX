/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mandelbrot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 22:46:27 by ryoshio-          #+#    #+#             */
/*   Updated: 2022/02/27 07:52:58 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"
static int set_mandelbrot(double x, double y);

void mandelbrot(t_fractol *fractol)
{
    double x;
    double y;
    
    fractol->x = 0;
    fractol->y = 0;
    while( fractol->y <= IMG_Y)
    {
        while(fractol->x <= IMG_X)
        {
            x = fractol->x_min + (fractol->x * ((fractol->x_max - fractol->x_min) / IMG_X));
            y = fractol->y_max - (fractol->y * ((fractol->y_max - fractol->y_min) / IMG_Y));
            
            //arruma ou da um jeito
            my_img_pixel_put(fractol, fractol->x, fractol->y, get_color(set_mandelbrot(x,y), fractol));
            fractol->x++;
        }
        
        
        fractol->x = 0;
        fractol->y ++;
        
    }
    mlx_put_image_to_window(fractol->mlx, fractol->win, fractol->img, 0, 0);
	mlx_destroy_image(fractol->mlx, fractol->img);

    
}


void    my_img_pixel_put(t_fractol *fractol, int x, int y, int color)
{

	char	*byte;

	byte = fractol->img_addr + ((y * fractol->img_line_length)
			+ (x *fractol->img_bits_per_pixel / 8));
	*(unsigned int *)byte = color;
}

static int set_mandelbrot(double x, double y)
{
    double xz;
    double yz;
    double temp;
    int i;

    i = 1;
    xz = x;
    yz = y;
    while((xz*xz +  yz*yz < 4 ) && (i < MAX_ITER))
    {
        temp = xz;
        xz = (xz*xz) -(yz*yz) +x;
		yz = (2 * temp * yz) + y;
        i ++;
    }  

    if(i==MAX_ITER)
        return 0;
    
    if (i != 1)
        return (i-1);
    return (1);
}

