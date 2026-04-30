#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int score;
};

void sendNotification() {
    printf("\nEMAIL UPDATE:\n");
    printf("Check your email regularly for Lab Internal and External updates.\n");
    printf("Coding assessment includes Basic, Intermediate, Advanced levels.\n\n");
}

int basicQuestion() {
    int a, b;
    printf("\n[BASIC] Enter two numbers to add:\n");
    scanf("%d %d", &a, &b);

    int ans;
    printf("Enter answer: ");
    scanf("%d", &ans);

    return (ans == a + b);
}

int intermediateQuestion() {
    int n;
    printf("\n[INTERMEDIATE] Enter number to check EVEN/ODD:\n");
    scanf("%d", &n);

    char ans[10];
    printf("Enter answer (even/odd): ");
    scanf("%s", ans);

    if ((n % 2 == 0 && strcmp(ans, "even") == 0) ||
        (n % 2 != 0 && strcmp(ans, "odd") == 0))
        return 1;

    return 0;
}

int advancedQuestion() {
    int n, fact = 1;
    printf("\n[ADVANCED] Enter number to find factorial:\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        fact *= i;

    int ans;
    printf("Enter answer: ");
    scanf("%d", &ans);

    return (ans == fact);
}

int main() {
    struct Student s;
    s.score = 0;

    printf("Enter student name: ");
    scanf("%s", s.name);

    sendNotification();

    printf("Starting Coding Assessment...\n");

    s.score += basicQuestion();
    s.score += intermediateQuestion();
    s.score += advancedQuestion();

    printf("\n===== RESULT =====\n");
    printf("Student: %s\n", s.name);
    printf("Score: %d / 3\n", s.score);

    if (s.score == 3)
        printf("Excellent Performance!\n");
    else if (s.score == 2)
        printf("Good Performance!\n");
    else
        printf("Needs Improvement!\n");

    return 0;
}
