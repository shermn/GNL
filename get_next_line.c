/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoncalv <sgoncalv@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 19:29:19 by sgoncalv          #+#    #+#             */
/*   Updated: 2023/02/14 17:00:54 by sgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
    static char buffer[BUFFER_SIZE];
    char        *line;
    
    
    return(line);
}

int main(void)
{
    char *str;
    int fd;
    int i;
    
    i = 0;
    fd = open("texto.txt", O_RDONLY);
    while (str = get_next_line(fd))
        printf("Linha:%sFIM\n", str);
    free(str);
    return (0);
}