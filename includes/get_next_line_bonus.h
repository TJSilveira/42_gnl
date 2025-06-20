/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilveir <tsilveir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 11:07:42 by tsilveir          #+#    #+#             */
/*   Updated: 2025/06/17 11:07:43 by tsilveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>

# ifndef FD_MAX
#  define FD_MAX 512
# endif

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

/* Get Next line functions */
char	*get_next_line(int fd);
char	*new_line(char *buffer);
char	*read_line(char *buffer);
char	*read_buffer(int fd, char *buffer);

/* Util functions */
char	*ft_strchr(const char *s, int c);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s);

#endif
