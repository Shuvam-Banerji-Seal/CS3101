//Greetings!!! This is Shuvam Banerji Seal (22MS076).
//We meet again. Well please don't mind the comments, I generally like to have some personalized comments that make my code atleast sound more human than it actually might be.
//Btw, hope you, the reader will be going well.
//Do check out my github for some random codes and if anything interests you, you can ofcouse clone it or fork it. Sadly I can't upload some really intersting codes due to restrictions on research.
//But whatever, main thing is that this is a beautiful world so, let's enjoy!!!

// The libraries that I am generally going to be using are listed below

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//#include<array.h>
#include<math.h>
#include <dirent.h>  // for directory operations
#include <sys/types.h>
#include <unistd.h>


//Since I am an old guy, I like to have my functions defined here only for better navigations


// Function prototypes
void menu();
void my_avg();

void desc();






void desc()
{
	printf("\n The question 1");
}
// The main function
int main() {
    menu();
    return 0;
}

void menu()
{
	printf("\n We have an average calculating programme today.\n");
	my_avg();
}

void my_avg()
{
	int a[3],i, avg =0;
	printf("\n Enter three integers: \t");
	for (i=0; i<3; i++)
	{	
		printf("\n Enter Integer No. %d: \t", i+1);
		scanf("%d", &a[i]);
		avg = avg + a[i];		
	}
	avg /= 3;
	printf("\n The average is %d\n", avg);
}

	
	





