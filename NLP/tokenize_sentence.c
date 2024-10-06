#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int sep(char *sentence)
{
	int i= 0;
	int j = 0;
	while(sentence[i])
	{
		if (' ' == sentence[i])
		{
			i++;
		}
		if(sentence [i] && sentence[i] != ' ')
		{
			j++;
			i++;
		}
		else
			return 0;
	}
	return j;
}

int wordlen(char *s)
{
	int i = 0;
	while (s[i] && s[i] != ' ')
		i++;
	return i;

}
char** tokenize_sentence(char* sentence, int* token_count)
{
	int len = sep(sentence);
	char** out = (char**) malloc(sizeof(char*)* (len));
	if(!out)
		return 0;
	int j = 0;
	int i = 0;
	while(sentence[i])
	{
		while (sentence[i] == ' ')
			i++;
		if(sentence[i])
		{
			int len = wordlen(&sentence[i]);
			out[j] = (char*)malloc((len+ 1) * sizeof(char));
			if(!out)
				return 0;
			strncpy(out[j] ,&sentence[i],len);
			out[j][len] = '\0';
			i+= len;
			j++;
		}
	}
	return out ;
}

/*
int main()
{
    char sentence[] = "I am learning AI and deep learning.";
    int token_count = 7;
    char** tokens = tokenize_sentence(sentence, &token_count);

    printf("Tokenized sentence (%d tokens):\n", token_count);
    for (int i = 0; i < token_count; i++)
    {
        printf("%s\n", tokens[i]);
        free(tokens[i]); // Free each token
    }
    free(tokens); // Free the array of tokens

    return 0;
}*/

