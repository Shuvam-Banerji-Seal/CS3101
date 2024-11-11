//Greetings!!! This is Shuvam Banerji Seal (22MS076).
//We meet again. Well please don't mind the comments, I generally like to have some personalized comments that make my code atleast sound more human than it actually might be.
//Btw, hope you, the reader will be doing well.
//Do check out my github(https://github.com/Shuvam-Banerji-Seal) for some random codes and if anything interests you, you can ofcouse clone it or fork it. Sadly I can't upload some really intersting codes due to restrictions on research.
//But whatever, main thing is that this is a beautiful world so, let's enjoy!!!

// The libraries that I am generally going to be using are listed below
//Do note I am keeping a few extra libraries here, which might not be useful here but still I might need it later

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//#include<array.h>
#include<math.h>
#include <dirent.h>  // for directory operations
#include <sys/types.h>
#include <unistd.h>
#define test "112QM123456"


//Since I am an old guy, I like to have my functions defined here only for better navigations


// Function prototypes
//void submenu();
void clear_input_buffer();
void menu();







// The main function
int main() 
{	
	float in;
	int r;
	printf("\n Enter you annual income: ");
	r= scanf("%f", &in);
	if (r!=1)
	{
		printf("\n Please don't joke around with strings!!!");
		//fflush(stdin);
		clear_input_buffer();
	   
		return -1;
	}
	else
	{
		if ((300000-in) >= 0)
			printf("\n You don't have to pay any tax.\n");
		 if ((700000-in) >= 0 && (300000-in <0))
			printf("\n You will have to pay 5 percent tax that is %.2f on %.2f\n", 0.05*(in),in);
		if ((700000-in) < 0)
			printf("\n You will have to pay 10 percent tax that is %.2f on %.2f\n",0.1*(in),in );
	}
    return 0;
}


//I was checking the code and tbh I need to consider a foolish user as well
void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}  // Clears the input buffer
}




