// 지우의 성적 판정기

/*
이경민
22100487
나 이경민은 하나님과 사람 앞에서 정직하고 성실하게 테스트를 수행하겠습니다.
*/

#include <stdio.h>

int main() {
    int count;

    scanf("%d", &count);

    if(count < 1 || count > 100) {
        return 0;
    }

    int score[count];

    for(int i = 0; i < count; i++) {
        scanf("%d", &score[i]);
    }

    for(int i = 0; i < count; i++) {
        if(score[i] >= 90) printf("A\n");
        else if(score[i] >= 80 && score[i] < 90) printf("B\n");
        else if(score[i] >= 70 && score[i] < 80) printf("C\n");
        else printf("F\n");
    }

    return 0;
}