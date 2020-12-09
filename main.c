#include <stdio.h>
#include <stdlib.h>

    struct football_team{
    char name[20];
    int  est;
    char rank;
    char captin[20];
    }arr[3];

int main()
{
    strcpy(arr[0].name,"Al Ahly");
    arr[0].est    = 1907;
    arr[0].rank   = 1;
    strcpy(arr[0].captin,"M.Elshnawy");

    printf("Name   : %s\n",arr[0].name);
    printf("Est.   : %d\n",arr[0].est);
    printf("Rank   : %d\n",arr[0].rank);
    printf("Captin : %s\n",arr[0].captin);

    return 0;
}
