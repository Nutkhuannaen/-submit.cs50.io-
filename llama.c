#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Promting the user for the starting # of llamas
    int start;
    do
    {
        start= get_int ("start size: ");
    }
    while (start < 9);

    //Promting them for an ending # of llamas
    int end;
    do
    {
        end = get_int("End size: ");
    }
    while (end<start);

    //How many year will it take to get to the goal
    int years = 0;
    while (start<end)
    {
        start += start/12;
        years++;
    }
    printf("Years: %i\n", years);

    //every year, 1/3 of our current llamas are born; 1/4 pass away
}
