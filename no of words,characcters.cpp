#include <stdio.h>

int main() {
    FILE *file;
    int word_count = 0, char_count = 0, line_count = 0;
    char filename[100], ch;

    printf("Enter the filename: ");
    scanf("%s", filename);

    file = fopen(filename, "r");

    if (file == NULL) {
        printf("File not found.\n");
        return 0;
    }

    while ((ch = fgetc(file)) != EOF) {
        char_count++;

        if (ch == ' ' || ch == '\n' || ch == '\t') {
            word_count++;
        }

        if (ch == '\n') {
            line_count++;
        }
    }

    if (char_count > 0) {
        word_count++;
        line_count++;
    }

    printf("Word count: %d\n", word_count);
    printf("Character count: %d\n", char_count);
    printf("Line count: %d\n", line_count);

    fclose(file);
    return 0;
}
