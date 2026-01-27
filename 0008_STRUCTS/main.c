#include <stdio.h>
#include <string.h>


struct Person {
    char name[32];
    int age;
};


void birthday(struct Person* person) {
    person->age++;
}

void make_older(struct Person person) {
    person.age++;
}


int main(void) {
    // Aufgabe 1 — Einfaches Structs
    struct Person anna;
    anna.age = 29;

    // strcpy(anna.name, "Anna"); // String bis \0 kopiert -> Overflow möglich -> age würde überschrieben
    // strncpy(anna.name, "Anna", sizeof(anna.name)); // String bis n bits (size of anna.name) kopiert
    snprintf(anna.name, sizeof(anna.name), "%s", "Anna"); // Schreibt maximal 31 Chars

    printf("Name: %s\n", anna.name);
    printf("Alter: %d\n", anna.age);


    // Aufgabe 2 — Array von Structs
    struct Person people[5];

    /* Eigene Eingabe
    char nameUserInput[32];
    int ageUserinput;
    for (int i = 1; i <= 5; i++) {
        scanf("%s", nameUserInput);
        scanf("%d", &ageUserinput);

        snprintf(people[i].name, sizeof(people[i].name), "%s", nameUserInput);
        people[i].age = ageUserinput;
    }
    */

    people[0].age = 50;
    snprintf(people[0].name, sizeof(people[0].name), "%s", "Thomas");
    people[1].age = 19;
    snprintf(people[1].name, sizeof(people[1].name), "%s", "Mark");
    people[2].age = 22;
    snprintf(people[2].name, sizeof(people[2].name), "%s", "Michel");
    people[3].age = 53;
    snprintf(people[3].name, sizeof(people[3].name), "%s", "Nochmal Thomas");
    people[4].age = 123;
    snprintf(people[4].name, sizeof(people[4].name), "%s", "shrek");


    double avgAge = 0;

    printf("Personen: \n");
    for (int i = 1; i <= 5; i++) {
        printf("%d) %s, %d\n", i, people[i].name, people[i].age);
        avgAge += people[i].age;
    }

    printf("\nDurchschnittsalter: %.2f\n", avgAge/5);


    // Aufgabe 3 — Funktionen mit Structs und Pointer
    printf("Vorher: %s, %d\n", anna.name, anna.age);

    make_older(anna);
    printf("Nach make_older (per Wert): %s, %d\n", anna.name, anna.age);

    birthday(&anna);
    printf("Nach birthday (per Pointer): %s, %d\n", anna.name, anna.age);



    return 0;
}
