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
	char str[11], lmark[2]; 
	int str_no, pin;
	printf("\nEnter a Secret Code:");
	scanf("%s", str);
	int res = sscanf(str, "%3d %2s %6d", &str_no, lmark, &pin);
	printf("\n The street number is: %d \n The Landmark is : %s \n The pin is : %d\n", str_no, lmark, pin);
	
	
    return 0;
}


//I was checking the code and tbh I need to consider a foolish user as well
void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}  // Clears the input buffer
}




