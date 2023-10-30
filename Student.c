#include <stdio.h>
#include <string.h>

struct Student
{
    char name[100];
};

void print(struct Student student)
{
    printf("Name: %s\n", student.name);
}

int main()
{
    struct Student students[3];
    strcpy(students[0].name, "Phong");
    strcpy(students[1].name, "Lan");
    strcpy(students[2].name, "Yen");

    for(int i=0; i<3; i++)
    {
        print(students[i]);
    }

    return 0;
}