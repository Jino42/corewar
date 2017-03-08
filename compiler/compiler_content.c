#include "compiler.h"

t_op    op_tab[17] =
{
	{"live", 1, {T_DIR}, 1, 10, "alive", 0, 0},
	{"ld", 2, {T_DIR | T_IND, T_REG}, 2, 5, "load", 1, 0},
	{"st", 2, {T_REG, T_IND | T_REG}, 3, 5, "store", 1, 0},
	{"add", 3, {T_REG, T_REG, T_REG}, 4, 10, "addition", 1, 0},
	{"sub", 3, {T_REG, T_REG, T_REG}, 5, 10, "soustraction", 1, 0},
	{"and", 3, {T_REG | T_DIR | T_IND, T_REG | T_IND | T_DIR, T_REG}, 6, 6,
		"et (and  r1, r2, r3   r1&r2 -> r3", 1, 0},
	{"or", 3, {T_REG | T_IND | T_DIR, T_REG | T_IND | T_DIR, T_REG}, 7, 6,
		"ou  (or   r1, r2, r3   r1 | r2 -> r3", 1, 0},
	{"xor", 3, {T_REG | T_IND | T_DIR, T_REG | T_IND | T_DIR, T_REG}, 8, 6,
		"ou (xor  r1, r2, r3   r1^r2 -> r3", 1, 0},
	{"zjmp", 1, {T_DIR}, 9, 20, "jump if zero", 0, 1},
	{"ldi", 3, {T_REG | T_DIR | T_IND, T_DIR | T_REG, T_REG}, 10, 25,
		"load index", 1, 1},
	{"sti", 3, {T_REG, T_REG | T_DIR | T_IND, T_DIR | T_REG}, 11, 25,
		"store index", 1, 1},
	{"fork", 1, {T_DIR}, 12, 800, "fork", 0, 1},
	{"lld", 2, {T_DIR | T_IND, T_REG}, 13, 10, "long load", 1, 0},
	{"lldi", 3, {T_REG | T_DIR | T_IND, T_DIR | T_REG, T_REG}, 14, 50,
		"long load index", 1, 1},
	{"lfork", 1, {T_DIR}, 15, 1000, "long fork", 0, 1},
	{"aff", 1, {T_REG}, 16, 2, "aff", 1, 0},
	{0, 0, {0}, 0, 0, 0, 0, 0}
};


t_op 	get_config(char *name)
{
	int i;

	i = 0;
	while(op_tab[i])
		if (ft_strcmp(op_tab[i][0], name) == 0)
			return (op_tab[i]);
	error("Unknow instruct");
	return (NULL);
}

int 		compiler_compile_get_label(char *line)
{
	int	i;

	i = 0;
	while (line[i])
	{
		if(!ft_strchr(LABEL_CHARS, line[i]))
			if (line[i] == LABEL_CHAR)
				return (++i);
			else
				return (-1);
		i++;
	}
	return (-1);
}


char **compiler_cutline(char *line)
{
	
}


t_bool		get_next_instruct(char **output)
{

}


t_bool compiler_compile_line(char *line, int fdout)
{
	char *str;
	char *str2;
	int i;
	char *opcode;
	t_op opecode_config;

	str = ft_strtrim(line);
	i = 0;
	while (ft_strchr(OPCODE_CHARS, str[i]))
		i++;
	opcode = ft_strsub(str, 0, i - 1);
	str2 = ft_strtrim(str + i);
	opecode_config = get_config(opcode);
	opecode_config[1] // Contient  le nombre d'arguments
	opecode_config[2][0] // Contient l'information sur le type d'argument
	(line - str) + i
	if ()
	free(str);
}

t_labels	*compiler_compile(int fdin, int fdout)
{
	int size;
	char *line;
	char *lineclr;
	int 	endlabel;

	size = 0;
	while(ft_gnl(fdin, &line))
	{
		lineclr = ft_strtrim(line);
		free(line);
		endlabel = compiler_compile_get_label(lineclr);
		line = (endlabel != -1) ? lineclr + endlabel : lineclr;
		compiler_compile_line(char *line, fdout)

		// Ignorer les \n
		// Ignorer les #

		line
	}
}

/*
Syntaxes possible :
entry:
	st		r1, 6

