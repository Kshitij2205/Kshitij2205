# include <stdio.h>

int main()
{
    int first_term, common_diff, terms, no_of_terms;
    int sum = 0;

    printf("Enter the first term of the A.P: ");
    scanf("%d", &first_term);

    printf("Enter the common difference of that A.P: ");
    scanf("%d", &common_diff);

    printf("Enter how many terms you want in that A.P: ");
    scanf("%d", &terms);

    printf("\n");
    printf("A.P formed according to your data given: \n");

    for(no_of_terms = 1; no_of_terms <= terms; no_of_terms++)
    {
        printf("\n %d term: %d", no_of_terms, first_term);

        sum += first_term;
        first_term += common_diff;
        
    }

    printf("\n \n");
    printf("The last term of the A.P is %d. \n", first_term - common_diff); // cuz the loop adds common difference 
    printf("The sum of all the terms is %d.", sum); // to the first term before breaking up :/

    return 0;
}