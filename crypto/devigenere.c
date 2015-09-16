/**
 * devignere.c
 * 
 * Bernard van de Meeberg
 * bernardmeeberg@gmail.com
 * 
 * toepassing van vigenere decryptie
 * gebruik: argv[1] = plain, argv[2] = key
 */

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// prototypen
int getKey(char keyLetter);
void devigenere(char keyword[], char str[]);

int main(int argc, string argv[])
{
	// krijgt variabelen
	string text = argv[1];
	string key = argv[2];
	
	// actuele decryptie
    devigenere(key, text);
	printf("%s\n", text);
}

int getKey(char keyLetter) {
	// Given a letter, finds the key to encode by
	if (isupper(keyLetter))
	{
		return keyLetter - 'A';
	}
	else
	{
		return keyLetter - 'a';
	}
}

void devigenere(char keyword[], string text) {
	int length = strlen(text);
	int keywordLength = strlen(keyword);
	int j = 0;
	
	for (int i = 0; i < length; i++) {
		
		if (islower(text[i])) {
			int num = text[i] - 'a' - getKey(keyword[j]);
			
			// Mod interacts differently with negative values. qc + r (nonnegative) = num
			if (num < 0)
				num += 26;
			
			text[i] = (num % 26) + 'a';
			j = (j+1) % keywordLength;
		}
		
		else if (isupper(text[i])) {
			int num = text[i] - 'A' - getKey(keyword[j]);
			
			// Mod interacts differently with negative values. qc + r (nonnegative) = num
			if (num < 0)
				num += 26;
			
			text[i] = (num % 26) + 'A';
			j = (j+1) % keywordLength;
		}
	}
}