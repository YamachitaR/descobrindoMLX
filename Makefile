# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/14 03:26:20 by ryoshio-          #+#    #+#              #
#    Updated: 2022/02/22 02:02:14 by ryoshio-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = exemplo
SRC = fractol.c check_arguments.c 

teste:
#   $(MAKE) -C minilibx-linux/
	gcc $(arquivo) minilibx-linux/libmlx.a -lXext -lX11 -lm -o exemplo
	./exemplo


fractol:
	make -C libft
	gcc $(SRC) libft/libft.a minilibx-linux/libmlx.a -lXext -lX11 -lm -o fractol
	

	
	
clean:
	$(MAKE) clean -C minilibx-linux/

fclean: clean
	rm -rf $(NAME)

re: fclean all

bonus: all

.PHONY: all clean fclean re bonus