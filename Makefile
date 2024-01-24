LIB = libft/libft.a

CFLAGS = -Wall -Wextra -Werror

SERVER = server
CLIENT = client
SERVER_B = server_bonus
CLIENT_B = client_bonus
SRCS_SERVER = server.c
SRCS_CLIENT = client.c
SRCS_SERVER_BONUS = server_bonus.c
SRCS_CLIENT_BONUS = client_bonus.c

OBJS_SERVER = $(SRCS_SERVER:.c=.o)

OBJS_CLIENT = $(SRCS_CLIENT:.c=.o)

OBJS_SERVER_BONUS = $(SRCS_SERVER_BONUS:.c=.o)

OBJS_CLIENT_BONUS = $(SRCS_CLIENT_BONUS:.c=.o)

all: $(CLIENT) $(SERVER)

$(SERVER): $(OBJS_SERVER) $(LIB)
	cc $(OBJS_SERVER) $(LIB) -o $@
	@echo "server created"

$(CLIENT): $(OBJS_CLIENT) $(LIB)
	cc $(OBJS_CLIENT) $(LIB) -o $@
	@echo "client created"

$(SERVER_B): $(OBJS_SERVER_BONUS) $(LIB)
	cc $(OBJS_SERVER_BONUS) $(LIB) -o $@
	@echo "server_bonus created"

$(CLIENT_B): $(OBJS_CLIENT_BONUS) $(LIB)
	cc $(OBJS_CLIENT_BONUS) $(LIB) -o $@
	@echo "client_bonus created"

$(LIB):
	make -C libft/

bonus: $(CLIENT_B) $(SERVER_B)

clean:
	make clean -C libft/
	rm -rf $(OBJS_SERVER) $(OBJS_CLIENT) $(OBJS_SERVER_BONUS) $(OBJS_CLIENT_BONUS)
	@echo "objects removed"

fclean: clean
	make fclean -C libft/
	rm -rf $(SERVER) $(CLIENT) $(SERVER_B) $(CLIENT_B)
	@echo "server and client removed"

re: fclean all
