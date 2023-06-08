#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int starting_population, ending_population, years = 0;
    do
    {
        printf("Enter the starting population size: ");
        scanf("%d", &starting_population);
    }
    while (starting_population < 9);

    // TODO: Prompt for end size
    do
    {
        printf("Enter the ending population size: ");
        scanf("%d", &ending_population);
    }
    while (ending_population < starting_population);

    // TODO: Calculate number of years until we reach threshold
    while (starting_population < ending_population)
    {
        int births = starting_population / 3;
        int deaths = starting_population / 4;
        starting_population += births - deaths;
        years++;
    }

    // TODO: Print number of years
    printf("Years: %d\n", years);

    return 0;
}
