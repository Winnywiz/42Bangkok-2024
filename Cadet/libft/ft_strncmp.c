int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned char	*s1_;
	unsigned char	*s2_;

	i = 0;
	s1_ = (unsigned char *) s1;
	s2_ = (unsigned char *) s2;
	while (i < n && (s1_[i] != '\0' || s2_[i] != '\0'))
	{
		if (s1_[i] != s2_[i])
			return (s1_[i] - s2_[i]);
		i++;
	}
	return (0);
}
