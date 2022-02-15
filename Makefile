# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/14 03:26:20 by ryoshio-          #+#    #+#              #
#    Updated: 2022/02/14 23:22:44 by ryoshio-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = exemplo


teste:
#   $(MAKE) -C minilibx-linux/
	gcc $(arquivo) minilibx-linux/libmlx.a -lXext -lX11 -lm -o exemplo
	./exemplo
	
clean:
	$(MAKE) clean -C minilibx-linux/

fclean: clean
	rm -rf $(NAME)

re: fclean all

bonus: all

.PHONY: all clean fclean re bonus