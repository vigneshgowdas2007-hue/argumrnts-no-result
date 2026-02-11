#include <stdio.h>
typedef struct {
int emp_id;
char name[20];
float salary;
} Employee;
int main() {
int i;
Employee e[5] = {{1001, "her", 45000.50}, {1002, "AAHI", 50000.0}, {1003, "boohi", 30000.59}, {1004, "aahuu", 60000.0}, {1005, "boo", 100000.0}};
for (i = 0; i < 5; i++) {
printf("emp ID:%d name:%s  salary:%.2f\n", e[i].emp_id, e[i].name, e[i].salary);
}
return 0;
}
