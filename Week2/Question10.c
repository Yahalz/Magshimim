#include <stdio.h>
int main(void)
{
	int Child1Age = 1;
 	int Child2Age = 2;
	int Child3Age = 7;
    int Child4Age = 6;
 	int Child5Age = 9;
	int Child6Age = 11;
    int GrandmaAge = 65;
    int GrandpaAge = 69;
    int ChildAgeSum = Child1Age + Child2Age + Child3Age + Child4Age + Child5Age + Child6Age;
    int GrandparentsAgeSum = GrandpaAge + GrandmaAge;
    printf("Child 1 age is: %d\n", Child1Age);
    printf("Child 2 age is: %d\n", Child2Age);
    printf("Child 3 age is: %d\n", Child3Age);
    printf("Child 4 age is: %d\n", Child4Age);
    printf("Child 5 age is: %d\n", Child5Age);
    printf("Child 6 age is: %d\n", Child6Age);
    printf("Grandpa's age is: %d\n", GrandpaAge);
    printf("Grandma's age is: %d\n", GrandmaAge);
    printf("Children's ages together is: %d\n",ChildAgeSum);
    printf("Grandparent's ages together is: %d\n", GrandparentsAgeSum);
    return 0;
}
