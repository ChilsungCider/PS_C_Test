// 초코의 특정 문자 세기

/*
* [Full Name] 이경민
* [Student ID]: 22100487
* [Honor Code Pledge]: 나 이경민은 하나님과 사람 앞에서 정직하고 성실하게 테스트를 수행하겠습니다.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char choco;
    char sentence[1001];
    int check = 0;

    scanf("%c", &choco);
    getchar();
    fgets(sentence, sizeof(sentence), stdin);

    for(int i = 0; i < strlen(sentence); i++) {
        if(choco == sentence[i]) check++;
    }

    printf("%d\n", check);

    return 0;
}