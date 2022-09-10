

#include <iostream>

#include <ctime>

#include <cstdlib>

#include<string.h>

#include<stdio.h>

#include <math.h>

using namespace std;

int t, leisure,r,w;

void level_1();

void level_2();

void level_3();

void level_4();

void level_5();

int number_a(int g1,int g2);

void help(char *s);

int main()

{

	leisure=3;	t=0;

	char str[5];

	cout<<"\n\n**************************<-<WELCOME TO MATH GAMES>->**************************\n";

	help(str);

	cout<<"\n\n|||||||||||||||||||||||||||||||<starting level 1>|||||||||||||||||||||||||||||||\n";

	level_1();

	cout<<"\n\n|||||||||||||||||||||||||||||||<starting level 2>|||||||||||||||||||||||||||||||\n";

	level_2();

	cout<<"\n\n|||||||||||||||||||||||||||||||<starting level 3>|||||||||||||||||||||||||||||||\n";

	level_3();

	cout<<"\n\n|||||||||||||||||||||||||||||||<starting level 4>|||||||||||||||||||||||||||||||\n";

	level_4();

	cout<<"\n\n|||||||||||||||||||||||||||||||<starting level 5>|||||||||||||||||||||||||||||||\n";

	level_5();

	cout<<"\n*******************************<<YOU HAVE WON>>*******************************\n";

	cout<<" you score: "<<t+(leisure*10)<<"\tTrue Answer: "<<r<<"\tWrong Answer: "<<w<<"\n\n\n Manufacturer Abolfazl Nouri";

}

//............................................................................

void level_1()

{

	char str[12]="||||||||",str1[50]="||||";

	int max=20,min=0,f,g1,g2,e,x;

	for(e=1;e<=6;e++)

	{

		srand(time(0));

		g1=(rand()%(max-min))+min;

		g2=(rand()%(max-min))+min;

		cout<<"\n\t["<<e<<"]: "<<g1<<" + X = "<<g2<<"\t\t\tleisure: ";

		for(f=0;f<leisure;f++)

			cout<<"\3";

		//cout<<g2-g1<<endl;

		cout<<"\n.....................................................\n";

		cout<<"\n\tX=";

		cin>>x;

		if(x==(g2-g1))

		{

			t=t+3;

			cout<<"\n point: "<<t;

			cout<<"\n\n Oh yes, you were right";

			r++;

			if(t>=10)

			{

				leisure++;

				t=t-10;

				cout<<"\n\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n* one added to your leisures *\t\tpoint: "<<t<<" \n\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n";

			}

			cout<<"\t\tleisure: ";

			for(f=0;f<leisure;f++)

				cout<<"\3";

		//	cout<<"\n_____________________________________________________\n";

		}

		else

		{

			cout<<"\n point: "<<t;

			cout<<"\n\n Oh no, you were wrong\t\tX="<<g2-g1<<"\t leisure: ";

			w++;

			leisure--;

			for(f=0;f<leisure;f++)

				cout<<"\3";

			//cout<<"\n_____________________________________________________\n";

		}

		cout<<"\n-----------------------------------------------------\n";

		strcat(str1,str);

		cout<<str1;

		cout<<"\n-----------------------------------------------------\n";

		if(leisure==0)

		{

			cout<<"\n\tGEME OVER\n level 1."<<e<<"\tyou score: "<<t<<"\tTrue Answer: "<<r<<"\tWrong Answer: "<<w<<"\n\n\n Manufacturer Abolfazl Nouri";

			exit(0);

		}

	}

}

//..............................................................................

void level_2()

{

	char str[12]="||||||||",str1[50]="||||";

	int max=20,min=0,f,g1,g2,e,x;

	for(e=1;e<=6;e++)

	{

		srand(time(0));

		g1=(rand()%(max-min))+min;

		g2=(rand()%(max-min))+min;

		cout<<"\n\t["<<e<<"]: "<<g1<<" - X = "<<g2<<"\t\t\tleisure: ";

		for(f=0;f<leisure;f++)

			cout<<"\3";

		//cout<<g1-g2<<endl;

		cout<<"\n.....................................................\n";

		cout<<"\n\tX=";

		cin>>x;

		if(x==(g1-g2))

		{

			t=t+3;

			cout<<"\n point: "<<t;

			cout<<"\n\n Oh yes, you were right";

			r++;

			if(t>=10)

			{

				leisure++;

				t=t-10;

				cout<<"\n\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n* one added to your leisures *\t\tpoint: "<<t<<" \n\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n";

			}

			cout<<"\t\tleisure: ";

			for(f=0;f<leisure;f++)

				cout<<"\3";

		//	cout<<"\n_____________________________________________________\n";

		}

		else

		{

			cout<<"\n point: "<<t;

			cout<<"\n\n Oh no, you were wrong\t\tX="<<g1-g2<<"\t leisure: ";

			w++;

			leisure--;

			for(f=0;f<leisure;f++)

				cout<<"\3";

			//cout<<"\n_____________________________________________________\n";

		}

		cout<<"\n-----------------------------------------------------\n";

		strcat(str1,str);

		cout<<str1;

		cout<<"\n-----------------------------------------------------\n";

		if(leisure==0)

		{

			cout<<"\n\tGEME OVER\n level 2."<<e<<"\tyou score: "<<t<<"\tTrue Answer: "<<r<<"\t\tWrong Answer: "<<w<<"\n\n\n Manufacturer Abolfazl Nouri";

			exit(0);

		}	

	}

}

//.................................................................................

void level_3()

{

	char str[12]="||||||||||",str1[50]="||";

	int max=20,min=1,f,g1,g2,g3,e,x;

	for(e=1;e<=5;e++)

	{

		srand(time(0));

		g1=(rand()%(max-min))+min;

		g2=(rand()%(max-min))+min;

		g3=g1*g2;

		cout<<"\t\t"<<g3<<"\n\t["<<e<<"]: ________ = "<<g1<<"\n\t\tx\t\t\tleisure: ";

		for(f=0;f<leisure;f++)

			cout<<"\3";

		//cout<<g2<<endl;

		cout<<"\n.....................................................\n";

		cout<<"\n\tX=";

		cin>>x;

		if(x==g2)

		{

			t=t+5;

			cout<<"\n point: "<<t;

			cout<<"\n\n Oh yes, you were right";

			r++;

			if(t>=10)

			{

				leisure++;

				t=t-10;

				cout<<"\n\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n* one added to your leisures *\t\tpoint: "<<t<<" \n\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n";

			}

			cout<<"\t\tleisure: ";

			for(f=0;f<leisure;f++)

				cout<<"\3";

		//	cout<<"\n_____________________________________________________\n";

		}

		else

		{

			cout<<"\n point: "<<t;

			cout<<"\n\n Oh no, you were wrong\t\tx="<<g2<<"\t leisure: ";

			w++;

			leisure--;

			for(f=0;f<leisure;f++)

				cout<<"\3";

		//	cout<<"\n_____________________________________________________\n";

		}

		cout<<"\n-----------------------------------------------------\n";

		strcat(str1,str);

		cout<<str1;

		cout<<"\n-----------------------------------------------------\n";	

		if(leisure==0)

		{

			cout<<"\n\tGEME OVER\n level 3."<<e<<"\tyou score: "<<t<<"\tTrue Answer: "<<r<<"\t\tWrong Answer: "<<w<<"\n\n\n Manufacturer Abolfazl Nouri";

			exit(0);

		}

	}

}

//.............................................................................

void level_4()

{

	int max=20,min=1,f,g1,g2,g3,e,x;

	char str[12]="||||||||||",str1[50]="||";

	for(e=1;e<=5;e++)

	{

		srand(time(0));

		g1=(rand()%(max-min))+min;

		g2=(rand()%(max-min))+min;

		g3=g1*g2;

		cout<<"\n\t["<<e<<"]: "<<g1<<" * X = "<<g3<<"\t\t   leisure: ";

		for(f=0;f<leisure;f++)

			cout<<"\3";

		//cout<<g2<<endl;

		cout<<"\n.....................................................\n";

		cout<<"\n\tX=";

		cin>>x;

		if(x==g2)

		{

			t=t+5;

			cout<<"\n point: "<<t;

			cout<<"\n\n Oh yes, you were right";

			r++;

			if(t>=10)

			{

				leisure++;

				t=t-10;

				cout<<"\n\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n* one added to your leisures *\t\tpoint: "<<t<<" \n\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n";

			}

			cout<<"\t\tleisure: ";

			for(f=0;f<leisure;f++)

				cout<<"\3";

		//	cout<<"\n_____________________________________________________\n";

		}

		else

		{

			cout<<"\n point: "<<t;

			cout<<"\n\n Oh no, you were wrong\t\tx="<<g2<<"\t leisure: ";

			w++;

			leisure--;

			for(f=0;f<leisure;f++)

				cout<<"\3";

		//	cout<<"\n_____________________________________________________\n";

		}

		cout<<"\n-----------------------------------------------------\n";

		strcat(str1,str);

		cout<<str1;

		cout<<"\n-----------------------------------------------------\n";

		if(leisure==0)

		{

			cout<<"\n\tGEME OVER\n level 4."<<e<<"\tyou score: "<<t<<"\tTrue Answer: "<<r<<"\tWrong Answer: "<<w<<"\n\n\n Manufacturer Abolfazl Nouri";

			exit(0);

		}	

	}

}

//...................................................................................................................

void level_5()

{

	int max=9,min=-6,f,g1,g2,g3,g4,e,x1,x2,a,number_x1,number_x2;

	char str[22]="|||||||||||||||||",str1[50]="||";

	for(e=1;e<=3;e++)

	{

		srand(time(0));

		g1=(rand()%(max-min))+min+1;

		g2=(rand()%(max-min))+min+1;

		a=number_a(g1,g2);

		g3=(g1)+(g2);

		g4=g1*g2;

		number_x1=g1/a;

		number_x2=g2/a;

		cout<<"\n\t["<<e<<"]: "<<a<<"X^2 - ("<<g3<<")X + ("<<g4/a<<") = 0\t leisure: ";

		for(f=0;f<leisure;f++)

			cout<<"\3";

	//	cout<<endl<<number_x1<<endl<<number_x2<<endl<<g1<<endl<<g2<<endl<<a;

		cout<<"\n.....................................................\n";

		if (g1==g2)

		{

			cout<<"\n\tX1=";

			cin>>x1;

			if(x1==number_x1)

			{

				t=t+10;

				cout<<"\n point: "<<t;

				cout<<"\n\n Oh yes, you were right";

				r++;

				if(t>=10)

				{

					leisure++;

					t=t-10;

					cout<<"\n\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n* one added to your leisures *\t\tpoint: "<<t<<" \n\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n";

				}

				cout<<"\t\tleisure: ";

				for(f=0;f<leisure;f++)

					cout<<"\3";

			//	cout<<"\n_____________________________________________________\n";

			}

			else

			{

				cout<<"\n point: "<<t;

				cout<<"\n\n Oh no, you were wrong\t\tX1="<<number_x1<<"\t leisure: ";

				w++;

				leisure--;

				for(f=0;f<leisure;f++)

					cout<<"\3";

			//	cout<<"\n_____________________________________________________\n";

			}

		}

		else

		{

			cout<<"\n\tX1=";

			cin>>x1;

			cout<<"\n\tX2=";

			cin>>x2;

			if((x1!=x2) && (x1==number_x1||x1==number_x2) && (x2==number_x2||x2==number_x1))

			{

				t=t+10;

				cout<<"\n point: "<<t;

				cout<<"\n\n Oh yes, you were right";

				r++;

				if(t>=10)

				{

					leisure++;

					t=t-10;

					cout<<"\n\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n* one added to your leisures *\t\tpoint: "<<t<<" \n\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n";

				}

				cout<<"\t\tleisure: ";

				for(f=0;f<leisure;f++)

					cout<<"\3";

			//	cout<<"\n_____________________________________________________\n";

			}

			else

			{

				cout<<"\n point: "<<t;

				cout<<"\n\n Oh no, you were wrong\t   X1="<<number_x1<<"  X2="<<number_x2<<"\t  leisure: ";

				w++;

				leisure--;

				for(f=0;f<leisure;f++)

					cout<<"\3";

			//	cout<<"\n_____________________________________________________\n";

			}

		}

		cout<<"\n-----------------------------------------------------\n";

		strcat(str1,str);

		cout<<str1;

		cout<<"\n-----------------------------------------------------\n";

		if(leisure==0)

		{

			cout<<"\n\tGEME OVER\n level 5."<<e<<"\tyou score: "<<t<<"\tTrue Answer: "<<r<<"\tWrong Answer: "<<w<<"\n\n\n Manufacturer Abolfazl Nouri";

			exit(0);

		}	

	}

}

//.........................................................................................................

int number_a(int g1,int g2)

{

	int i,j,a;

	for (i=1;i<=abs(g1);i++)

		if(g1%i==0)

		   	for (j=1;j<=abs(g2);j++)

				if(g2%j==0)

		  		  if (i==j)

		  		  	a=j;

	return a;

}

//..........................................................................................

void help(char *s)

{

	cout<<"\n do you need help?(yes or no) ";

	gets(s);

	if(!strcmp(s,"yes"))

	{

		cout<<"\n this game consists of 5 levels.\n level 1 and level 2 has six sections. level 3 and level 4 has five sections.\n level 5 has three sections.\n you have 3 leisure to make a wrong.\n you get three points by answering level 1 and level 2 questions right.\n you get five points by answering level 3 and level 4 questions right.\n you get ten points by answering level 5 questions right\n for ervery 10 points, one is added to your leisure\n each wrong deprives you of one leisure. ";                                                           

		cout<<"\n\n example:\n\n|||||||||||||||||||<starting level (1 or 2 or 3 or 4 or 5)>|||||||||||||||||||\n\n\t[sections number]: 10 + X = 1\n.....................................................\n\n\tX=?\n\n <1>:point:\n\n <2>:Oh (yes or no), you were (right or wrong)\t<3>:X=?\t<4>:leisure \3\3\3\n_____________________________________________________\n\n <1>:the points you earned in different levels.\n\n <2>:if you enter the correct X value, message(Oh yes, you were right) and\n if you enter the wrong, message(Oh no, you were wrong) is given.\n\n <3>:when you enter the X value wrong, the correct value of X is displayed in\n this location.\n\n <4>:the number (\3) is equal to the number of chances you have to make a mistake";                                      

	}

}

//...........................................................................
