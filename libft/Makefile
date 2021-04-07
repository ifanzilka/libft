# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bmarilli <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/29 23:36:03 by bmarilli          #+#    #+#              #
#    Updated: 2021/03/27 14:57:28 by bmarilli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

CC		= gcc

AR		= ar rc 

DIR		= SRC/
OBJ_DIR = BIN/


HEADER	= ./includes
HEAD = includes/libft.h
HEADERS = $(addprefix $(HEADER)/,libft.h get_next_line.h)

FLAGS	= -Wall -Wextra -Werror #-D BUFFER_SIZE=32  

DIR_MEMORY = ./SRC/memory/

MEM_DIR = $(addprefix $(DIR),mem/)
SRC_MEM = $(addprefix $(MEM_DIR), ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_bzero.c ft_calloc.c)


IS_DIR = $(addprefix $(DIR),is/)
SRC_IS = $(addprefix $(IS_DIR), ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isspace.c ft_isprint.c)

TO_DIR = $(addprefix $(DIR),to/)
SRC_TO = $(addprefix $(TO_DIR), ft_tolower.c ft_toupper.c)

STR_DIR = $(addprefix $(DIR),str/)
SRC_STR = $(addprefix $(STR_DIR), ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strcmp.c  ft_strnstr.c ft_strrchr.c ft_strncmp.c ft_strjoin.c ft_strmapi.c ft_strtrim.c ft_substr.c ft_split.c ft_strdup.c ft_strnew.c ft_strdel.c ft_create_str.c ft_add_forward.c ft_add_back.c ft_str_find.c ft_strcpy.c)

PUT_DIR = $(addprefix $(DIR),put/)
SRC_PUT = $(addprefix $(PUT_DIR), ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_print_n_char.c)

NBR_DIR =  $(addprefix $(DIR),numbers/)
SRC_NBR= $(addprefix $(NBR_DIR), ft_atoi.c ft_itoa.c ft_atof.c ft_itoa_base_x.c ft_itoa_ll.c ft_itoa_unsig_base.c ft_itoa_unsigned_ll.c ft_itoa_with_zero.c ft_pow.c ft_atoi_base.c)

LIST_DIR = $(addprefix $(DIR),list/)
SRC_LIST = $(addprefix $(LIST_DIR), ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstiter.c ft_lstclear.c ft_lst_cr_front.c ft_lst_cr_back.c ft_lstdelel.c ft_lstdelone.c ft_lstmap.c) 

L_LIST_DIR = $(addprefix $(DIR),l_list/)
SRC_L_LIST = $(addprefix $(L_LIST_DIR), ft_l_lsnew.c        ft_l_lst_cr_front.c ft_l_lstadd_front.c ft_l_lstdelone.c    ft_l_lstlast.c ft_l_lst_cr_back.c  ft_l_lstadd_back.c  ft_l_lstclear.c     ft_l_lstiter.c      ft_l_lstsize.c) 

MEMORY_DIR = $(addprefix $(DIR),memory/)
SRC_MEMORY = $(addprefix $(MEMORY_DIR), calloc_gc.c            free_gc.c              ft_garbage_collector.c malloc_gc.c) 

GNL_DIR = $(addprefix $(DIR),gnl/)
SRC_GNL = $(addprefix $(GNL_DIR), get_next_line.c)

DICT_DIR =  $(addprefix $(DIR),dictonary/)
SRC_DICT = $(addprefix $(DICT_DIR),ft_cr_dict.c ft_find_key.c)

ARRAY_STRINGS_DIR =  $(addprefix $(DIR),arrays_strings/)
SRC_ARRAY_STRINGS = $(addprefix $(ARRAY_STRINGS_DIR),ft_arrlen.c ft_print_arr.c ft_append_arr.c ft_copy_arr.c ft_free_arr.c   ft_str_bubble_sort.c   ft_del_str_ind.c ft_find_str_in_arr.c)

DIR_SORT_STR = SRC/sort/str
DIR_SORT_INT = SRC/sort/int
SORT_DIR =  $(addprefix $(DIR),sort/)
SRC_SORT = $(addprefix $(SORT_DIR),ft_bubble_sort.c str/ft_str_cmp.c str/ft_swap_str.c  str/ft_str_init_arrinfo.c \
									int/ft_swap_int.c int/ft_cmp_int.c int/ft_int_init_arrinfo.c )

SRCS	= 	$(SRC_MEM)	\
			$(SRC_IS) 	\
			$(SRC_TO)	\
			$(SRC_STR)	\
			$(SRC_PUT)	\
			$(SRC_NBR)	\
			$(SRC_LIST)	\
			$(SRC_L_LIST)\
			$(SRC_GNL)	\
			$(SRC_DICT)\
			$(SRC_MEMORY)\
			$(SRC_ARRAY_STRINGS)\
			$(SRC_SORT)

SRCS.O = $(addprefix $(OBJ_DIR),$(SRCS:.c=.o))


F_NONE		= \033[37m
F_BOLD		= \033[1m
F_RED		= \033[31m
F_ORANGE	= \033[38m
F_YELLOW	= \033[33m
F_GREEN		= \033[32m
F_CYAN		= \033[36m
F_BLUE		= \033[34m 

OBJS	= $(SRCS:.c=.o)





all: $(OBJ_DIR)	$(NAME)

$(NAME):	$(SRCS.O) $(HEADERS)
		$(AR) $(NAME) $(SRCS.O)
		@echo "$(F_YELLOW)libft.a COMPILE! $(F_NONE)"

$(OBJ_DIR):
		mkdir $(OBJ_DIR)
		mkdir  $(addprefix $(OBJ_DIR),$(DIR))
		mkdir $(addprefix	$(OBJ_DIR), $(MEM_DIR) $(IS_DIR) $(TO_DIR) $(STR_DIR) $(PUT_DIR) \
						$(NBR_DIR) $(LIST_DIR) $(L_LIST_DIR) $(GNL_DIR) $(MEMORY_DIR) $(DICT_DIR)  $(ARRAY_STRINGS_DIR) $(SORT_DIR) $(DIR_SORT_STR) $(DIR_SORT_INT))
$(SRCS.O): $(OBJ_DIR)%.o:%.c 
	$(CC) $(FLAGS) -I$(HEADER) -c $< -o $@
	@echo "$(F_BLUE)Object files libft in ready! $(F_NONE)"

# .c.o:
# 	$(CC) $(FLAGS) -c -I$(HEADER) $< -o $(<:.c=.o)
# 	@echo "$(F_BLUE)Object files libft in ready! $(F_NONE)"

clean:
		$(RM) $(OBJS) $(OBJBNS)
		rm -rf $(OBJ_DIR)
		@echo "$(F_GREEN)Object files libft delete! $(F_NONE)"

fclean:		clean
			$(RM) $(NAME)
			@echo "$(F_GREEN)Delete $(NAME) FCleaned! $(F_NONE)"

re:	fclean all

norm:
	norminette *.c *.h

code:
	@echo " ~~~~~~~~~~~~~~~~"
	@echo "$(F_BOLD)  * Make code, *"
	@echo "$(F_BOLD)   * not war! *"
	@echo "$(F_RED)    ..10101.."
	@echo "$(F_ORANGE)  01   1   011"
	@echo "$(F_YELLOW) 10     0     00"
	@echo "$(F_GREEN) 11   .010.   11"
	@echo "$(F_CYAN) 00 .01 1 01. 10"
	@echo "$(F_BLUE) 010   1   110"
	@echo "$(F_BLUE)   11011010**$(F_NONE)"

.PHONY:     all clean fclean re bonus code
