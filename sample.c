#include <stdio.h>
#include <stddef.h>

/**
 * @brief 주어진 문자열을 거꾸로 출력하는 더미 함수
 * 
 * @param str 출력할 문자열 (널 종료)
 */
static void print_reverse(const char *str) {
    if (!str) return;

    // 문자열 길이 계산
    size_t len = 0;
    while (str[len] != '\0') {
        ++len;
    }

    // 역순으로 출력
    for (size_t i = 0; i < len; ++i) {
        putchar(str[len - 1 - i]);
    }
    putchar('\n');

    // 결과ㅁㅁ
}
