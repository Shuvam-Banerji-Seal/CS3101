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
#include<dirent.h>  // for directory operations
#include<sys/types.h>
#include<unistd.h>


//Since I am an old guy, I like to have my functions defined here only for better navigations


// Function prototypes
void menu();
void pizza();
void rosogulla();
void biriyani();

void global_pizza();
void global_rosogulla();
void global_biriyani();

void submenu_global();
void submenu_local();

void clear_input_buffer();

//global integers declaration
int gpz=0, gbi=0, gros=0;



// The main function
int main() 
{
	printf("\n Eater Counter Started...\n");
    menu();
    return 0;
}

// Pizzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzza
void pizza()
{
	static int pizza =0; //using local variables
	printf("\n Your Current pizza count is : %d ", pizza);
	pizza++;
	printf("\n Since you selected to eat pizza it has increased to: %d", pizza);
	printf("\n Remember this is the Local or Static call" );
	submenu_local();
}

void global_pizza()
{
	//int pizza =0;
	printf("\n Your Current pizza count is : %d ", gpz);
	gpz++;
	printf("\n Since you selected to eat pizza it has increased to: %d", gpz);
	printf("\n Remember this is the Global call" );
	submenu_global();
}
	
//Rosogullllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllaaaaa
void rosogulla()
{
	static int ros =0;//using local variables
	printf("\n Your Current rosogulla count is : %d ", ros);
	ros++;
	printf("\n Since you selected to eat rosogulla it has increased to: %d", ros);
	printf("\n Remember this is the Local or Static call" );
	submenu_local();
}

void global_rosogulla()
{
	//int pizza =0;
	printf("\n Your Current rosogulla count is : %d ", gros);
	gros++;
	printf("\n Since you selected to eat rosogulla it has increased to: %d", gros);
	printf("\n Remember this is the Global call" );
	submenu_global();
	
}

//biriyaniiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii
//well today is wednesday though.....so it matches

void biriyani()
{
	static int biriyani =0;//using local variables
	printf("\n Your Current biriyani count is : %d ", biriyani);
	biriyani++;
	printf("\n Since you selected to eat biriyani it has increased to: %d", biriyani);
	printf("\n Remember this is the Local or Static call" );
	submenu_local();
}

void global_biriyani()
{
	//int pizza =0;
	printf("\n Your Current biriyani count is : %d ", gbi);
	gbi++;
	printf("\n Since you selected to eat biriyani it has increased to: %d", gbi);
	printf("\n Remember this is the Global call" );
	submenu_global();
}

void submenu_global()
{
	int ch,r;
	printf("\n What do you want to eat today? \n 1. Pizza \n 2. Rosogulla \n 3. Biriyani \n 4. Go back to main menu \n 5. Exit\n Enter your choice: \t");
	r =scanf("%d", &ch);
        if (r!=1)
        {
                printf("\n Please don't joke around with strings!!!");
                //fflush(stdin);
                clear_input_buffer();
                submenu_global();
                return;
        }

	while (1)
	{	
	
		switch (ch)
		{
		case 1:
		global_pizza();
		break;
		
		case 2:
		global_rosogulla();
		break;
		
		case 3:
		global_biriyani();
		break;
		
		case 4:
		menu();
		
		case 5:
		exit(0);
		
		default:
		printf("\n Enter a valid choice!!!\n");
		submenu_global();
		
		}
		
		
	}
	
}



void submenu_local()
{
	int ch, r;
	printf("\n What do you want to eat today? \n 1. Pizza \n 2. Rosogulla \n 3. Biriyani \n 4. Go back to main menu \n 5. Exit\n Enter your choice: \t");
	r=scanf("%d", &ch);
        if (r!=1)
        {
                printf("\n Please don't joke around with strings!!!");
                //fflush(stdin);
                clear_input_buffer();
                submenu_local();
                return;
        }

	while (1)
	{	
	
		switch (ch)
		{
		case 1:
		pizza();
		break;
		
		case 2:
		rosogulla();
		break;
		
		case 3:
		biriyani();
		break;
		
		case 4:
		menu();
		
		case 5:
		exit(0);
		
		default:
		printf("\n Enter a valid choice!!!\n");
		submenu_local();
		
		}
		
		
	}
	
}

//I was checking the code and tbh I need to consider a foolish user as well
void clear_input_buffer() {
  for (char c = getchar(); c != '\n' && c != EOF; c = getchar());
}

//The main menu
void menu()
{
	int ch, r;
	printf("\n First let's choose where to set the counters? \n");
	printf("\n 1. Global Counters \n 2. Static Counters \n 3. Exit \n Enter your Choice: \t");
	r= scanf("%d", &ch);
	if (r!=1)
	{
		printf("\n Please don't joke around with strings!!!");
		//fflush(stdin);
		clear_input_buffer();
	       	menu();
		return;
	}
	while (1)
	{
		switch (ch)
		{
			case 1:
			submenu_global();
			break;
			
			case 2:
			submenu_local();
			break;
			
			case 3:
			exit(0);
			
			default:
			printf("\n Enter a valid term!!!");
			menu();
			
			
		}
	}
		
	
}



