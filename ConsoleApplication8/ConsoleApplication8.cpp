//Caesar Cipher
#include "pch.h"
#include <stdio.h>
#include <iostream>

int main()
{
	char input[150];
	int key;
	printf("Enter a text to encrypt: ");
	fgets(input, sizeof input, stdin);
	printf("Enter key: ");
	scanf_s("%d", &key);

	for (int i = 0; input[i] != '\0'; ++i)
	{
		char ch = input[i];

		if (ch >= 'a' && ch <= 'z')
		{
			ch = ch + key;

			if (ch > 'z')
			{
				ch = ch - 'z' + 'a' - 1;
			}

			input[i] = ch;
		}
		else if (ch >= 'A' && ch <= 'Z')
		{
			ch = ch + key;

			if (ch > 'Z')
			{
				ch = ch - 'Z' + 'A' - 1;
			}

			input[i] = ch;
		}
	}
	printf("\nEncrypted text: %s", input);
	return 0;
}
