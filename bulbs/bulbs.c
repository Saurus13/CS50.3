#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    string message = get_string("Message: ");
    int bits[8];
    for (int i = 0; i < strlen(message); i++) //loop through string
    {
        int j = 0;
        while (message[i] > 0) //dec to binary convertor
        {
            bits[j] = message[i] % 2;
            message[i] = message[i] / 2;
            j++;
        }
        for (int k = 7; k >= 0; k--) //print bulbs
        {
            print_bulb(bits[k]);
        }
        printf("\n");
    }
}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}
