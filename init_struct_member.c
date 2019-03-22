#include <stdio.h>
struct man_info {
    unsigned int age;
    float weight;
};
#define STRUCT_INIT_METHOD 1

#ifdef STRUCT_INIT_METHOD
#if STRUCT_INIT_METHOD == 1
struct man_info man[2] = {
	[0]={.age=20,.weight=55.5},
	[1]={.age=21,.weight=66.6}
};
#elif STRUCT_INIT_METHOD == 2
struct man_info man[2] = {
	{.age=20,.weight=55.5},
	{.age=21,.weight=66.6}
};
#elif STRUCT_INIT_METHOD == 3
struct man_info man[2] = {
	{20,55.5},
	{21,66.6}
};
#elif STRUCT_INIT_METHOD == 4
struct man_info man[2] = {
	20,55.5,
	21,66.6
};
#else
#error "no such STRUCT_INIT_METHOD"
#endif
#else
#error "STRUCT_INIT_METHOD is not defined"
#endif

int main(int argc,char*argv[])
{
	printf("man[0].age=%d\n",man[0].age);
	printf("man[0].weight=%.1f\n",man[0].weight);
	printf("man[1].age=%d\n",man[1].age);
	printf("man[1].weight=%.1f\n",man[1].weight);
}
