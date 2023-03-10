/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoncalv <sgoncalv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 19:33:41 by sgoncalv          #+#    #+#             */
/*   Updated: 2023/02/23 15:21:18 by sgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1

# endif

char	*get_next_line(int fd);
char	*ft_strjoin(char *s1, char *s2);
char	*new_get_exact_line(char *line);
char	*new_get_line(char *str, int fd);
int		ft_strlen(char *s);
int		check_str(char *buff);
char	*ft_strchr(char *string, char chrstr);
#endif