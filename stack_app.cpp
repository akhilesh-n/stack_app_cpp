#include<iostream>
#include<cstring>
/* text colour  setting */
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define RESET "\033[0m"
#define BOLD "\033[1m"
#define D_stck 1500000
#include<unistd.h>
using namespace std;

template<class type1, class type2>
class STCK
{
type1 stck[5];
type2 indx;
	public:
		STCK() /* constructor call to set index as 0 */ 
		{
			indx=0;
		}
		void push() /*pop function */
		{
			cout<<RED<<"stack push\n"<<endl;
			if(indx<5)
			{
			cout<<GREEN<<"enter data"<<RESET<<endl;
			cin>>stck[indx];
			indx++;
			cout<<YELLOW<<"push is successfull\nloading"<<GREEN<<"."<<RED<<"."<<BLUE<<"."<<RESET<<endl;
				usleep(D_stck);
			}
			else
			{
			cout<<RED<<"stack is full \nloading"<<GREEN<<"."<<RED<<"."<<BLUE<<"."<<RESET<<endl;
				usleep(D_stck);
			}
		}
		void pop(){
			cout<<RED<<"stack pop\n"<<endl;
			if(indx>0)
			{
				indx--;
				//stck[indx]=0;
			cout<<YELLOW<<"pop is successfull \nloading"<<GREEN<<"."<<RED<<"."<<BLUE<<"."<<RESET<<endl;
				usleep(D_stck);
			}
			else
			cout<<RED<<"stack is empty \nloading"<<GREEN<<"."<<RED<<"."<<BLUE<<"."<<RESET<<endl;
				usleep(D_stck);
		}
		void display(){
			cout<<RED<<"stack display\n"<<endl;

			if(indx==0)
			cout<<RED<<"stack is empty \nloading"<<GREEN<<"."<<RED<<"."<<BLUE<<"."<<RESET<<endl;
			else
			{

			for(int i=0;i<indx;i++)
				cout<<RESET<<stck[i]<<"  ";
			cout<<endl;
			cout<<YELLOW<<"display successfull \nloading"<<GREEN<<"."<<RED<<"."<<BLUE<<"."<<RESET<<endl;
			}
				usleep(D_stck+1500000);
		}
};

int submenu();
int main()
{
	/*object created & indx initialised to zero using constructor call*/

	STCK<int,int> i_stck;
	STCK<float,int> f_stck;
	STCK<char,int> c_stck;
	STCK<double,int> d_stck;
	STCK<string,int> s_stck;


	system("clear");/* clearingscreen */
	cout<<BOLD<<"----"<<RED"WELCOME TO STACK APPLICATION"<<RESET<<"-----\n"<<RESET<<endl;
	int main_m;/*main menu options(switch case)*/
	int wrong_main=0;/*counter to count wrong inputs in main menu*/
	usleep(1000000);
	while(1)
	{
		cout<<BOLD<<"-----MAIN MENU-----\n"<<RESET<<endl;
		cout<<YELLOW<<"1-integer\n2-character\n3-float\n4-double\n5-string\n"<<BOLD<<RED<<"6-exit\n"<<RESET<<endl;
		cin>>main_m;
		int sub_m;/*sub menu options (switch case)*/
		int exit_f=0;/* flag for exit from sub menu to main menu */
		switch(main_m)
		{
			case 1:
				{
					
						system("clear");
					while(1)
					{
					cout<<RED<<"---SUBMENU ---\n"<<RESET<<"integer type"<<endl;
						sub_m=submenu();/* calling sub menu to select operation */
						switch(sub_m)
						{
							case 1: i_stck.push();/* member fun call */
								system("clear");
								exit_f=0;
								break;


							case 2: i_stck.pop();/* memb fun call*/
								system("clear");/* clear screen*/
								exit_f=0;
								break;

							case 3: i_stck.display();/*memb fun call*/
								system("clear");
								exit_f=0;
								break;

							case 4:cout<<RED<<BOLD<<"back to-> MAIN MENU\n"<<RESET<<endl;/*exit from sub menu to main menu*/
							   system("clear");
							       exit_f=1;
							       break;



						}

						if(exit_f==1)
							break;
					}
					break;
				}


			case 2:
				{
				       while(1)
				       {
						system("clear");
					cout<<RED<<"---SUBMENU ---\n"<<RESET<<"character type"<<endl;
					       sub_m=submenu();
					       switch(sub_m)
					       {
						       case 1: c_stck.push();/* memb fun call*/
							       system("clear");
							       exit_f=0;
							       break;


						       case 2: c_stck.pop();
							       system("clear");
							       exit_f=0;
							       break;

						       case 3: c_stck.display();
							       system("clear");
							       exit_f=0;
							       break;

						       case 4:cout<<RED<<BOLD<<"back to->main menu\n"<<RESET<<endl;/*exit to main menu*/
							   system("clear");
							      exit_f=1;
							      break;



					       }

					       if(exit_f==1)
						       break;
				       }
				       break;
			       }
			case 3:
				{
					
						system("clear");
					while(1)
					{
					cout<<RED<<"---SUBMENU ---\n"<<RESET<<"float type"<<endl;
						sub_m=submenu();
						switch(sub_m)
						{
							case 1: f_stck.push();
								system("clear");
								exit_f=0;
								break;


							case 2: f_stck.pop();
								system("clear");
								exit_f=0;
								break;

							case 3: f_stck.display();
								system("clear");
								exit_f=0;
								break;

							case 4:cout<<RED<<BOLD<<"back to-> MAIN MENU\n"<<RESET<<endl;
							   system("clear");
							       exit_f=1;
							       break;



						}

						if(exit_f==1)
							break;
					}
					break;
				}
			case 4:
				{
					
						system("clear");
					while(1)
					{
					cout<<RED<<"---SUBMENU ---\n"<<RESET<<"double type"<<endl;
						sub_m=submenu();
						switch(sub_m)
						{
							case 1: d_stck.push();
								system("clear");
								exit_f=0;
								break;


							case 2: d_stck.pop();
								system("clear");
								exit_f=0;
								break;

							case 3: d_stck.display();
								system("clear");
								exit_f=0;
								break;

							case 4:cout<<RED<<BOLD<<"back to-> MAIN MENU\n"<<RESET<<endl;
							   system("clear");
							       exit_f=1;
							       break;



						}

						if(exit_f==1)
							break;
					}
					break;
				}
			case 5:
				{
					
						system("clear");
					while(1)
					{
					cout<<RED<<"---SUBMENU ---\n"<<RESET<<"string type"<<endl;
						sub_m=submenu();
						switch(sub_m)
						{
							case 1: s_stck.push();
								system("clear");
								exit_f=0;
								break;


							case 2: s_stck.pop();
								system("clear");
								exit_f=0;
								break;

							case 3: s_stck.display();
								system("clear");
								exit_f=0;
								break;

							case 4:cout<<RED<<BOLD<<"back to-> MAIN MENU\n"<<RESET<<endl;
							   system("clear");
							       exit_f=1;
							       break;



						}

						if(exit_f==1)
							break;
					}
					break;
				}



			case 6: system("clear");/*exit from main menu or exit from application*/
				cout<<BOLD<<RED<<"\n\n\n\nTHANK"<<BLUE<<" YOU"<<GREEN<<" FOR"<<YELLOW<<" USING"<<CYAN<<" STACK"<<MAGENTA<<" APPLICATION\n\n\n\n"<<endl;
				return 0;

			default:
				{
					system("clear");
					wrong_main++;// if invalid or wrong input from main menu then increment*/
					if(wrong_main==1)/* first attempt*/
					{
						cout<<RED<<"NOTE: "<<RESET<<"invalid input"<<endl;
						cout<<"only two chances left"<<endl;
					}
					else if(wrong_main==2)/* 2nd attempt*/
					{
						cout<<RED<<"NOTE: "<<RESET<<"invalid input"<<endl;
						cout<<BOLD<<RED<<"only one chance left"<<RESET<<endl;
					}
					else/* if third attempt is also invalid or wrong input then exit*/
					{
						cout<<BOLD<<RED<<"THANK"<<BLUE<<" YOU"<<GREEN<<" FOR"<<YELLOW<<" USING"<<CYAN<<" STACK"<<MAGENTA<<" APPLICATION\n"<<endl;
						return 0;
					}
				}






		}
	}
}

int submenu()/* subenu for operation selection (push /pop/display/exit)*/
{
	int sub_m;/*submenu option */
	int wrong_in=0;/*counter for wrong input */
	int exit_f=0;
	while(1)
	{
		cout<<BLUE<<"CHOOSE option\n"<<endl;
		cout<<YELLOW<<"1-PUSH\t"<<"2-POP\t"<<"3-DISPLAY\t"<<RED<<BOLD<<"4-MAIN MENU\t"<<RESET<<endl;
		cin>>sub_m;/*taking user input*/
		switch(sub_m)
		{
			case 1:return 1;
			case 2:return 2;
			case 3:return 3;
			case 4: return 4;

			default:{
					system("clear");
					wrong_in++;
					if(wrong_in==1)/*first wrong attempt*/
					{
						cout<<BOLD<<RED<<"NOTE: "<<RESET<<"invalid input"<<endl;
						cout<<"only two chances left"<<endl;
					}
					else if(wrong_in==2)/*2nd attempt*/
					{
						cout<<BOLD<<RED<<"NOTE: "<<RESET<<"invalid input"<<endl;
						cout<<BOLD<<RED<<"only one chance left"<<RESET<<endl;
					}
					else/*3rd attempt*/
						return 4;
					//exit_f=1;
				}

		}
	//	if(exit_f==1)
	//		return 4;

	}
}
