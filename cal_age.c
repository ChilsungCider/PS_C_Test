// 당신은 몇 살입니까?

/*
이경민
22100487
나 이경민은 하나님과 사람 앞에서 정직하고 성실하게 테스트를 수행하겠습니다.
*/

#include <stdio.h>

int main() {
    char name[20];
    int birth;
    char mon[12][4] = {"Mon", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"}; // 4칸으로 만들어ㅓ야 문자열 끝 표시 \0 이 각 단어 끝에 들어가게 됨. 안들어가면 뒤에 있는 배열 데이터와 name 배열까지 계속 읽어버림.

    scanf("%s %d", name, &birth);

    int year = birth / 10000;
    int age = 2025 - year;
    birth = birth - year * 10000;
    int month = birth / 100;
    int day = birth - month * 100;

    printf("%s - %d (%s %d, %d)\n", name, age, mon[month - 1], day, year);

    return 0;
}