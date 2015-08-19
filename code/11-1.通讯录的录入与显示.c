#include <stdio.h>
#include <stdlib.h>

struct Date {
	int year;
	int month;
	int day;
};

struct Student {
	char name[81];
	struct Date date;
	char gender;
	char telephone[20];
	char mobile[20];
};

int main() {
	int total = 0;
	scanf("%d", &total);
	int i = 0;

	if(total == 0) return 0;

	struct Student *students = (struct Student *)malloc(total * sizeof(struct Student));

	for(i = 0; i<total; i++) {
		struct Student s;

		scanf("%s %d/%d/%d %c %s %s", s.name, &s.date.year, &s.date.month,
		 &s.date.day, &s.gender, s.telephone,
			s.mobile);

		students[i] = s;
	}

	int output = 0;
	scanf("%d", &output);
	int goal = 0;

	for(i = 0; i<output; i++) {
		scanf("%d", &goal);

		if(goal >= total-1 || goal < 0) {
			printf("Not Found\n");
			continue;
		} else {
			printf("%s %s %s %c %04d/%02d/%02d\n", students[goal].name, students[goal].telephone,
				students[goal].mobile, students[goal].gender, students[goal].date.year,
				students[goal].date.month, students[goal].date.day);
		}
	}

	return 0;
}