#include <regex.h>
#include <stdio.h>
#include <string.h>

int compare(const void *a, const void *b) {
    return strcmp(*(char**)a, *(char**)b);
}

int main()
{
    int names = 0;
    scanf("%d", &names);
    getchar();
	// Array of char *. Every element is a char *.
	// First element is *gmails[0] or **gmails.
    char *gmails[names];

    regex_t regex;
    int compile_result = regcomp(&regex, "@gmail.com", REG_NEWLINE);
    if (compile_result) {
        printf("Compilation error.\n");
    }

    int use_gmail = 0;
    for (int name = 0; name < names; name++) {
        int length = 72;
        char email[length];
        fgets(email, length, stdin);

        if (regexec(&regex, email, 0, NULL, REG_NOTBOL) == 0) {
            int end = 0;
            for (; email[end] != ' '; end++);

            gmails[use_gmail] = (char*)malloc(sizeof(char)*(end+1));
            strncpy(gmails[use_gmail], email, end);
            gmails[use_gmail++][end] = '\0';
        }
    }

	/*
	 * void qsort(void *base, size_t num, size_t size, int (*cmp)(const void *, const void *));
	 * base : Pointer to first object of the array to be sorted, converted to a void*.
	 * num : Number of elements in the array pointed to by base.
	 * size : Size in bytes of each element in the array.
	 * cmp : Function pointer that compares two elements. In this case: compare(gmails, gmails+1).
	 *       Which need to cast by (char **) and dereference to string first before strcmp.
	 */
    qsort(gmails, use_gmail, sizeof(char *), compare);

    for (int i = 0; i < use_gmail; i++) {
        printf("%s\n", gmails[i]);
        free(gmails[i]);
    }
    return 0;
}