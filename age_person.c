// 가장 나이가 많은 사람과 가장 적은 사람

/*
이경민
22100487
나 이경민은 하나님과 사람 앞에서 정직하고 성실하게 테스트를 수행하겠습니다.
*/

#include <stdio.h>

struct person {
    char name[20];
    int birth;
    int year;
    int month;
    int day;
    int age;
    int compare;
};

int main() {
    int count = 0;
    
    struct person p[100];

    scanf("%d", &count);

    for(int i = 0; i < count; i++) {
        scanf("%s %d", p[i].name, &p[i].birth);
        
        p[i].year = p[i].birth / 10000;

        p[i].birth = p[i].birth - (p[i].year * 10000);

        p[i].compare = p[i].birth;

        p[i].month = p[i].birth / 100;

        p[i].day = p[i].birth - (p[i].month * 100);
        
        p[i].age = 2025 - p[i].year;
    }

    int high = -9999;
    int low = 9999;
    int high_index, low_index;

    for(int i = 0; i < count; i++) {
        if(p[i].age > high) {
            high = p[i].age;
            high_index = i;
        }
        else if(p[i].age == high) {
            if(p[i].compare < p[high_index].compare) {
                high = p[i].age;
                high_index = i;
            }
            else continue;
        }
        if(p[i].age < low) {
            low = p[i].age;
            low_index = i;
        }
        else if(p[i].age == low) {
            if(p[i].compare > p[low_index].compare) {
                low = p[i].age;
                low_index = i;
            }
            else continue;
        }
    }

    // Oldest
    if(p[high_index].month == 1)
        printf("Oldest: %s - %d (Jan %d, %d)\n", p[high_index].name, p[high_index].age, p[high_index].day, p[high_index].year);
    else if(p[high_index].month == 2)
        printf("Oldest: %s - %d (Feb %d, %d)\n", p[high_index].name, p[high_index].age, p[high_index].day, p[high_index].year);
    else if(p[high_index].month == 3)
        printf("Oldest: %s - %d (Mar %d, %d)\n", p[high_index].name, p[high_index].age, p[high_index].day, p[high_index].year);
    else if(p[high_index].month == 4)
        printf("Oldest: %s - %d (Apr %d, %d)\n", p[high_index].name, p[high_index].age, p[high_index].day, p[high_index].year);
    else if(p[high_index].month == 5)
        printf("Oldest: %s - %d (May %d, %d)\n", p[high_index].name, p[high_index].age, p[high_index].day, p[high_index].year);
    else if(p[high_index].month == 6)
        printf("Oldest: %s - %d (Jun %d, %d)\n", p[high_index].name, p[high_index].age, p[high_index].day, p[high_index].year);
    else if(p[high_index].month == 7)
        printf("Oldest: %s - %d (Jul %d, %d)\n", p[high_index].name, p[high_index].age, p[high_index].day, p[high_index].year);
    else if(p[high_index].month == 8)
        printf("Oldest: %s - %d (Aug %d, %d)\n", p[high_index].name, p[high_index].age, p[high_index].day, p[high_index].year);
    else if(p[high_index].month == 9)
        printf("Oldest: %s - %d (Sep %d, %d)\n", p[high_index].name, p[high_index].age, p[high_index].day, p[high_index].year);
    else if(p[high_index].month == 10)
        printf("Oldest: %s - %d (Oct %d, %d)\n", p[high_index].name, p[high_index].age, p[high_index].day, p[high_index].year);
    else if(p[high_index].month == 11)
        printf("Oldest: %s - %d (Nov %d, %d)\n", p[high_index].name, p[high_index].age, p[high_index].day, p[high_index].year);
    else if(p[high_index].month == 12)
        printf("Oldest: %s - %d (Dec %d, %d)\n", p[high_index].name, p[high_index].age, p[high_index].day, p[high_index].year);

    // Youngest
    if(p[low_index].month == 1)
        printf("Youngest: %s - %d (Jan %d, %d)\n", p[low_index].name, p[low_index].age, p[low_index].day, p[low_index].year);
    else if(p[low_index].month == 2)
        printf("Youngest: %s - %d (Feb %d, %d)\n", p[low_index].name, p[low_index].age, p[low_index].day, p[low_index].year);
    else if(p[low_index].month == 3)
        printf("Youngest: %s - %d (Mar %d, %d)\n", p[low_index].name, p[low_index].age, p[low_index].day, p[low_index].year);
    else if(p[low_index].month == 4)
        printf("Youngest: %s - %d (Apr %d, %d)\n", p[low_index].name, p[low_index].age, p[low_index].day, p[low_index].year);
    else if(p[low_index].month == 5)
        printf("Youngest: %s - %d (May %d, %d)\n", p[low_index].name, p[low_index].age, p[low_index].day, p[low_index].year);
    else if(p[low_index].month == 6)
        printf("Youngest: %s - %d (Jun %d, %d)\n", p[low_index].name, p[low_index].age, p[low_index].day, p[low_index].year);
    else if(p[low_index].month == 7)
        printf("Youngest: %s - %d (Jul %d, %d)\n", p[low_index].name, p[low_index].age, p[low_index].day, p[low_index].year);
    else if(p[low_index].month == 8)
        printf("Youngest: %s - %d (Aug %d, %d)\n", p[low_index].name, p[low_index].age, p[low_index].day, p[low_index].year);
    else if(p[low_index].month == 9)
        printf("Youngest: %s - %d (Sep %d, %d)\n", p[low_index].name, p[low_index].age, p[low_index].day, p[low_index].year);
    else if(p[low_index].month == 10)
        printf("Youngest: %s - %d (Oct %d, %d)\n", p[low_index].name, p[low_index].age, p[low_index].day, p[low_index].year);
    else if(p[low_index].month == 11)
        printf("Youngest: %s - %d (Nov %d, %d)\n", p[low_index].name, p[low_index].age, p[low_index].day, p[low_index].year);
    else if(p[low_index].month == 12)
        printf("Youngest: %s - %d (Dec %d, %d)\n", p[low_index].name, p[low_index].age, p[low_index].day, p[low_index].year);

    return 0;
}