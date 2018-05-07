void copy(char to[], char from[])
{
	int i = 0;

	//while loop will not end if from isnt '\0'
	while ((to[i] = from[i]) != '\0') {
		++i;
	}
}

int safercopy(int from_lenm, char *from, int to_len, char *to)
{
	int i = 0;
	int max = from_len > to_len - 1 ? to_len : from_len;

	// to_len must hyave at least 1 byte
	if (from_len < 0 || to_len <= 0) {
		return -1;
	}

	for (i = 0; i < max; i++) {
		to[i] = from[i];
	}

	to[to_len - 1] = '\0';

	return i;
}

