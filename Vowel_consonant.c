#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// -------------------------------------------------------------------------------------------------

void vowel() {

    int letter, letter_verification;

        letter = getchar(); // Recebe Um char.

        letter_verification = isalpha(letter); // Verifica se é uma letra.

        letter = tolower(letter); // Transforma maiúscula em minúscula.

            if (letter_verification != 0)
            {

                if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u') {

                    puts("Vowel!");

                }

                if (letter == 'b' || letter == 'c' || letter == 'd' || letter == 'f' || letter == 'g' ||
                    letter == 'j' || letter == 'k' || letter == 'l' || letter == 'm' || letter == 'n' ||
                    letter == 'p' || letter == 'q' || letter == 'r' || letter == 's' || letter == 't' ||
                    letter == 'v' || letter == 'w' || letter == 'x' || letter == 'z') {

                    puts("Consonant!");

                }

                if (letter == 'h') {

                    puts("No phonetic value!");

                }

            } else {

                puts("Corn!");

            }

}

// -------------------------------------------------------------------------------------------------

int main() {

    int loop;

        for (loop = 1; loop <= 10; loop++)
        {

            printf("Letter:");

            fflush(stdin);

            vowel();

        }

    system("pause");
    return 0;

}