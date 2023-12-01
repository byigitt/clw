#include <stdio.h>

int main() {
    int f = 0, trees = 0; 
    float ms = 0, ens = 0, ls = 0, ecs = 0, eds = 0, sum = 0;
    
    do {
        printf("Select your faculty (Faculty Codes - Medicine: 1, Engineering: 2, Law: 3, Economics: 4, Education: 5): ");
        scanf("%d", &f);
        
        if (f >= 1 && f <= 5) {
            printf("Enter your tree amount: ");
            scanf("%d", &trees);
            
            if (f == 1)
                ms += trees;
            if (f == 2)
                ens += trees;
            if (f == 3)
                ls += trees;
            if (f == 4)
                ecs += trees;
            if (f == 5)
                eds += trees;
                
            sum += trees;
        } else {
            if (f != -1) {
                // Wrong faculty. Show a warning message.
                printf("Please enter a valid faculty code.\n");
            };
        };
        
    } while (f != -1);

    printf("\nTotal trees that donated: %.0f", sum);
    
    printf("\n\nAll donation rates:");
    printf("\nMedicine: %%%.2f", (ms/sum)*100);
    printf("\nEngineering: %%%.2f", (ens/sum)*100);
    printf("\nLaw: %%%.2f", (ls/sum)*100);
    printf("\nEconomics: %%%.2f", (ecs/sum)*100);
    printf("\nEducation: %%%.2f", (eds/sum)*100);
    
    return 0;
}
