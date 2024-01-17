SERVER = server
CLIENT = client
CFLAGS = -Wall -Werror -Wextra
CC = gcc
FLAGS = -Wall -Wextra -Werror -I$(PRINTF)/headers -L$(PRINTF) -lftprintf -I$(LIBFT)/includes -L$(LIBFT) -lft

PRINTF = ft_printf
LIBFT = libft

all:
	@make -s -C $(PRINTF)
	@make -s -C $(LIBFT)
	@$(CC) $(FLAGS) server.c -o $(SERVER)
	@$(CC) $(FLAGS) client.c -o $(CLIENT)
	@echo "Server And Client Are Ready!"

clean:
	@make clean -s -C $(PRINTF)
	@make clean -s -C $(LIBFT)

fclean: clean
	@make fclean -s -C $(PRINTF)
	@make fclean -s -C $(LIBFT)
	@rm -f $(SERVER) $(CLIENT)
	@echo "Server and Client Have Been Cleaned Successfully"

re: fclean all