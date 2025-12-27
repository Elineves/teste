/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elde-jes <elde-jes@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 12:01:53 by elde-jes          #+#    #+#             */
/*   Updated: 2025/10/18 12:18:21 by elde-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stddef.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

char	*get_next_line(int fd);
void	ft_read_line(int fd, char **keep, char **tmp);
char	*ft_parse_line(char **keep, char **tmp);
char	*get_before_newline(const char *s);
char	*get_after_newline(const char *s);
int		contains_newline(const char *s);
char	*ft_strdup(const char *s1);
size_t	ft_strlen(const char *s);
char	*join_strs(const char *s1, const char *s2);
void	*ft_malloc_zero(size_t count, size_t size);
void	ft_free_strs(char **str, char **str2, char **str3);
#endif
