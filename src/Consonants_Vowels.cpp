/*
OVERVIEW: Given a string, Count the number of consonants and vowels and copy them to 'consonants' and 'vowels' respectively
Notes : Neglect Space and Other Symbols .Consider Capital Letters too

E.g.: Input: "aB c" , Output: consonants should contain 2 and vowels 1

INPUTS: A string and two int pointers

OUTPUT: Modify the consonants and vowels pointers accordingly with their counts (*consonants=?? ;*vowels=??)

INPUT2: Dont Forget they are pointers ;consonants and vowels are addresses of two variables .

Output: consonants should be ??,vowels should be ??

??:Count them :)

NOTES: Don't create new string , Dont return anything ,you have been given two pointers ,copy values into those .
*/

#include <stddef.h>


void count_vowels_and_consonants(char *str,int *consonants, int *vowels){
	if (str == NULL)
	{
		*consonants = 0;
		*vowels = 0;
	}
	else
	{
		int c = 0, v = 0, i = 0;
		while (str[i] != '\0')
		{
			if ((int(str[i]) > 64 && int(str[i]) < 91) || (int(str[i]) > 96 && int(str[i]) < 123))
			{
				if (int(str[i]) == 65 || int(str[i]) == 69 || int(str[i]) == 73 || int(str[i]) == 79 || int(str[i]) == 86 || int(str[i]) == 97 || int(str[i]) == 101 || int(str[i]) == 105 || int(str[i]) == 111 || int(str[i]) == 117)
					v++;
				else
					c++;
			}
			i++;
		}
		*consonants = c;
		*vowels = v;
	}
}
