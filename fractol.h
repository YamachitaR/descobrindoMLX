/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 20:52:07 by ryoshio-          #+#    #+#             */
/*   Updated: 2022/02/27 07:31:47 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FRACTOL_H

# define MAX_ITER 500
# define MIN_X -2
# define MAX_X 2
# define MIN_Y -2
# define MAX_Y 2
# define IMG_Y 600.0
# define IMG_X 600.0

# include "minilibx-linux/mlx.h"
# include "libft/libft.h"
# include "minilibx-linux/mlx.h"
# include <math.h>


typedef struct s_fractol
{
	void	*mlx;
	void	*win;
	void	*img;
	char	*img_addr;
    char    *name;
	int		img_bits_per_pixel;
	int		img_line_length;
	int		img_endian;
	int		color;
	double  x;
	double  y;
	double	x_min;
	double	x_max;
	double	y_min;
	double	y_max;
	double	julia_x;
	double	julia_y;
}t_fractol;

int	check_arguments(int argc, char **argv);
void    my_img_pixel_put(t_fractol *fractol, int x, int y, int color);
void mandelbrot(t_fractol *fractol);



//rafa

void	my_colors(int keycode, t_fractol *fractol);
int	get_color(int i, t_fractol *s_fractol);
#endif