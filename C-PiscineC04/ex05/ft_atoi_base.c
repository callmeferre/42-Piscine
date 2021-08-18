/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastril <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 13:09:02 by acastril          #+#    #+#             */
/*   Updated: 2021/07/09 14:07:16 by acastril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

int	ft_error_check(char	*base, int	len)
{
	int	i;
	int	j;

	i = 0;
	if (*base == 0 || len <= 1)
		return (0);
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base [j])
				return (0);
			j++;
		}
		if (base[i] == '-' || base[i] == '+')
			return (0);
		i++;
	}
	return (1);
}

unsigned int	ft_putnbr_base(int nbr, char *base, unsigned int	len)
{
	unsigned int	n;
	int				s;
	int				value;

	value = 1;
	s = 0;
	if (nbr < 0)
	{
		n = (unsigned int) -nbr;
		value *= -1;
	}
	else
		n = (unsigned int) nbr;
	if (n < len)
	{
		s += (base[n]);
	}
	else
	{
		ft_putnbr_base(n / len, base, len);
		ft_putnbr_base(n % len, base, len);
	}
	return (s * value);
}

int	ft_atoi_base(char	*str, char	*base)
{
	int				value;
	int				n;
	unsigned int	len;

	value = 1;
	n = 0;
	len = ft_strlen(base);
	if (ft_error_check(base, len) == 0)
		return (0);
	while (*str == ' ' || (*str >= 9 && *str <= 12))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			value *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		 n = (int)(*str - '0') + (n * 10);
		 str++;
	}
	n = n * value;
	return (ft_putnbr_base(n, base, len));
}
