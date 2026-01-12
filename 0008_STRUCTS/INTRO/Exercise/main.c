#include <stdio.h>
#include <string.h>

struct Person {
    char name[32];
    int age;
};

void birthday(struct Person *p) {
    if (p != NULL) {
        p->age += 1;
    }
}

void make_older(struct Person p) {
    p.age += 1;
}

int main(void) {
    struct Person anna;
    snprintf(anna.name, sizeof anna.name, "%s", "Anna");
    anna.age = 29;

    printf("Name: %s\n", anna.name);
    printf("Alter: %d\n\n", anna.age);

    struct Person people[5];
    snprintf(people[0].name, sizeof people[0].name, "%s", "Anna"); people[0].age = 29;
    snprintf(people[1].name, sizeof people[1].name, "%s", "Ben");  people[1].age = 21;
    snprintf(people[2].name, sizeof people[2].name, "%s", "Carla");people[2].age = 34;
    snprintf(people[3].name, sizeof people[3].name, "%s", "David");people[3].age = 18;
    snprintf(people[4].name, sizeof people[4].name, "%s", "Eva");  people[4].age = 26;

    printf("Personen:\n");
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        printf("%d) %s, %d\n", i+1, people[i].name, people[i].age);
        sum += people[i].age;
    }
    double avg = (double)sum / 5.0;
    printf("\nDurchschnittsalter: %.1f\n\n", avg);


    struct Person p = anna;
    printf("Vorher: %s, %d\n", p.name, p.age);

    make_older(p);
    printf("Nach make_older (per Wert): %s, %d\n", p.name, p.age);

    birthday(&p);
    printf("Nach birthday (per Pointer): %s, %d\n", p.name, p.age);

    return 0;
}