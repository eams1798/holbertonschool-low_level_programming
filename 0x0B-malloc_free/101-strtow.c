char **strtow(char *str)
{
	char **arrword;
	int *posinit, *posfin;
	int i, j, pi = 0, pf = 0, word = 0;

	if (str == NULL || str == "")
		return (NULL);

	for (i = 0; str[i] != '0'; i++)
	{
		if ((str[i] >= 33 && str[i] <= 126) && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			word++;
	}
	arrword = (char **)malloc(word * sizeof(char *));
	posinit = (int *)malloc(word * sizeof(int));
	posfin = (int *)malloc(word * sizeof(int));
	if (arrword == NULL || posinit == NULL || posfin == NULL)
	{
		free(arrword);
		free(posinit);
		free(posfin);
		return (NULL);
	}

	for (i = 0; str[i] != '0'; i++)
	{
		if ((str[i] >= 33 && str[i] <= 126) || (str[i] == ' ' && (str[i + 1] >= 33 && str[i + 1] <= 126)))
		{
			posinit[pi] = i;
			pi++;
		}
		if ((str[i] >= 33 && str[i] <= 126) && (str[i + 1] == ' ' || str[i + 1] == '\0'))
		{
			posinit[pf] = i;
			pf++;
		}
	}

	for (i = 0; i < word; i++)
	{
		*(arrword + i) = (char *)malloc((posfin[i] - posinit[i] + 1) * sizeof(char));
		if (*(arrword + i) == NULL)
		{
			for (j = 0; j <= i; j++)
				free (*(arrword + j));
			free(arrword);
			return (NULL);
		}
	}

	for (i = 0; i < word; i++)
	{
		for (j = posinit[i]; j <= posfin[i]; j++)
			arrword[i][j] = str[j];
		arrword[i][j] = '\0';
	}
	free(posinit);
	free(posfin);
	return (arrword);
}
