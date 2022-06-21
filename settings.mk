ifndef SETTINGS_MK
	SETTINGS_MK = 1

BTREE_DIR	= btree/
BTREE_SRC	=	btree_apply_infix.c \
				btree_apply_prefix.c \
				btree_apply_suffix.c \
				btree_create_node.c \
				btree_delete.c \
				btree_insert_data.c \
				btree_level_count.c \
				btree_search_item.c \

RBTREE_DIR	= rbtree/
RBTREE_SRC	=	rb_insert.c \
				rb_newnode.c \
				rb_parents.c \
				rb_rotate.c \

PF_DIR		= ft_printf/
PF_SRC		=	ft_printf.c \
				pf_buffering.c \
				pf_charstostr.c \
				pf_convgetters.c \
				pf_convtobuffer.c \
				pf_init.c \
				pf_nbrtostr.c \
				pf_normaltobuffer.c \
				pf_putconvtobuffer.c \
				pf_setapos.c \
				pf_setprecision.c \
				pf_toolkit.c \

LST_DIR		= lst/
LST_SRC		=	ft_deli.c \
				ft_deliend.c \
				ft_lstadd.c \
				ft_lstaddback.c \
				ft_lstat.c \
				ft_lstcpy.c \
				ft_lstdel.c \
				ft_lstdelif.c \
				ft_lstdelone.c \
				ft_lstfind.c \
				ft_lstfindi.c \
				ft_lstfindnext.c \
				ft_lstinsert.c \
				ft_lstiter.c \
				ft_lstlast.c \
				ft_lstnew.c \
				ft_lstrev.c \
				ft_lstsize.c \
				ft_lstsort.c \
				ft_lstsplit.c \
				ft_lstsub.c \
				ft_lstsubn.c \
				ft_tabtolst.c \

CLASSIC_DIR		= classic/
CLASSIC_SRC	=	ft_atoi.c \
				ft_bzero.c \
				ft_getenv.c \
				ft_getstat.c \
				ft_isalnum.c \
				ft_isalpha.c \
				ft_isascii.c \
				ft_isdigit.c \
				ft_isnumber.c \
				ft_isprint.c \
				ft_itoa.c \
				ft_itoa_base.c \
				ft_memalloc.c \
				ft_memccpy.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_memcpy.c \
				ft_memcpy_rev.c \
				ft_memdel.c \
				ft_memmove.c \
				ft_memset.c \
				ft_nbrlen.c \
				ft_putchar.c \
				ft_putchar_fd.c \
				ft_putendl.c \
				ft_putendl_fd.c \
				ft_putenv.c \
				ft_putnbr.c \
				ft_putnbr_fd.c \
				ft_putstr.c \
				ft_putstr_fd.c \
				ft_puttab.c \
				ft_reverse.c \
				ft_setenv.c \
				ft_strcat.c \
				ft_strchr.c \
				ft_strcjoin.c \
				ft_strclr.c \
				ft_strcmp.c \
				ft_strcpy.c \
				ft_strdel.c \
				ft_strdup.c \
				ft_strequ.c \
				ft_striter.c \
				ft_striteri.c \
				ft_strjoin.c \
				ft_strlcat.c \
				ft_strlen.c \
				ft_strlowcase.c \
				ft_strmap.c \
				ft_strmapi.c \
				ft_strncat.c \
				ft_strncmp.c \
				ft_strncpy.c \
				ft_strndup.c \
				ft_strnequ.c \
				ft_strnew.c \
				ft_strnstr.c \
				ft_strrchr.c \
				ft_strsplit.c \
				ft_strstr.c \
				ft_strsub.c \
				ft_strtrim.c \
				ft_swap_star.c \
				ft_tabcpy.c \
				ft_tabdel.c \
				ft_tabdup.c \
				ft_tablen.c \
				ft_tabndup.c \
				ft_tabnew.c \
				ft_tolower.c \
				ft_toupper.c \
				ft_unsetenv.c \
				ft_wchartoa.c \
				get_next_line.c \

FILES		=	$(addprefix $(LST_DIR),$(LST_SRC))\
				$(addprefix $(BTREE_DIR),$(BTREE_SRC))\
				$(addprefix $(RBTREE_DIR),$(RBTREE_SRC))\
				$(addprefix $(CLASSIC_DIR),$(CLASSIC_SRC))\
				#$(addprefix $(PF_DIR),$(PF_SRC))

SRC			=	$(addprefix $(SRC_DIR),$(FILES))
OBJ_DIR		=	./obj/
OBJ			=	$(addprefix $(OBJ_DIR),$(FILES:.c=.o))
OBJ_DIRS	=	$(BTREE_DIR) $(RBTREE_DIR) $(PF_DIR) $(LST_DIR) $(CLASSIC_DIR)

endif
