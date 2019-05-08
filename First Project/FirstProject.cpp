#include <iostream>
#include <Windows.h>
#include <math.h>
#include <string>
#include <conio.h>
#include <fstream>


using namespace std;

int g,yesno0;
double a,b,c,D,s,x,x1,x2,result,res,sqrtres;


bool LoggIn()
{
	while(true){
	
	string username= "";
	
	string un, pw;
	
	cout<<"Enter username: ";
	cin>>username;
	cout<<"Enter password: ";
		char c= ' ';
string password = "";
while (c!=13)
{
	c=getch();
	if (c!=13)
	{
		password +=c;
		cout<<"*";
	}
}
	
	ifstream read(username.c_str());
	getline(read, un);
	getline(read, pw);
	
	if (un == username && pw==password)
	{
		return true;
	}
	
	else
	{
		
		return false;
	}
	
	}
}



void Register()
{
	while(true){
	
		string username, password,password1;
		
		cout<<"Select a username: ";
		cin>>username;
		cout<<"Select a password: ";
		cin>>password;
		cout<<"Re-enter the password: ";
		cin>>password1;
		
		if (password == password1)
		{
		
		ofstream file;
		file.open( username.c_str() );
		file<< username << endl << password;
		file.close();
		cout<<"Your account has been successfully registered!"<<endl;

		system("pause");
		system("cls");
		break;
	    }
	    
	    else 
	    {
	    	cout<<"\nPasswords don't match.\nPlease try again."<<endl;
	    	system("pause");
	    	system("cls");
	    	break;
		}
}
}

void Loginscreen()
{
HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(h,FOREGROUND_BLUE | FOREGROUND_INTENSITY);

while(true){
	int choice;

 cout<<"   __________   _      _   _   _    _   _______                                 "<<endl;
 cout<<"  |  ________| | \\    / | | | | \\  | | |  _____|    \t\t1 --> Login                        "<<endl;
 cout<<"  | |_____     | |\\  /| | | | | |\\ | | | |    ___                          "<<endl;
 cout<<"  |  _____|    | | \\/ | | | | | | \\| | | |   |_  |  \t\t2 --> Register                    "<<endl;
 cout<<"  | |________  | |    | | | | | |  \\ | | |_____| |                         "<<endl;
 cout<<"  |__________| |_|    |_| |_| |_|   \\| |_________|  \t\t3 --> Exit                          "<<endl;
 cout<<"\nWhat do you want to do? "<<endl;
	cin>>choice;
	if (choice == 2)
	{
	Register();
	}
	else if (choice == 1)
	{
		bool status = LoggIn();
		
		if(!status)
		{
			cout<<"\nWrong username or password, please try again!"<<endl;
			system("pause");
			system("cls");
			Loginscreen();
		}
		else
		{
			cout<<"\nLogin successful!"<<endl;
			system ("pause");
			system("cls");
			break;
		}
	}
	else if (choice == 3)
	{
			system ("cls");
		cout<<"Do you really want to exit the program?"<<endl;
		cout<<"1 ---> Yes"<<"\tNo <--- 2"<<endl;
		
		cin>>yesno0;
		if (yesno0 == 1)
		{
		exit (0);
	    }
	    
	    else if (yesno0 == 2)
		{ 
		system ("cls");
		return Loginscreen();
		}
	}
}
}






void tridiagram()
	{
	
	cout<<"\n\n         A"<<endl;
 cout<<"        /|"<<endl;	
 cout<<"       / |"<<endl;	
 cout<<"      /  |"<<endl;	
 cout<<"     /   |"<<endl;	
 cout<<"    /    |"<<endl;	
 cout<<"  B/_____|C"<<endl;
 

 cout<<"\nWARNING!!!\nThe calculator works ONLY with Right Angle Triangle. \nIf you don't know the size of the side enter '0'. "<<endl;
 cout<<"\n\nPlease enter the size of the triangle's sides."<<endl;
 cout<<"Enter a: ";
 cin>>a;
 system("cls");
 
 cout<<"\n\n         A"<<endl;
 cout<<"        /|"<<endl;	
 cout<<"       / |"<<endl;	
 cout<<"      /  |"<<endl;	
 cout<<"     /   |"<<endl;	
 cout<<"    /    |"<<endl;	
 cout<<"  B/_____|C"<<endl;
 cout<<"      "<<a<<endl;
 
 
 cout<<"\nEnter b: ";
 cin>>b;
  system("cls");
 
  cout<<"\n\n         A"<<endl;
 cout<<"        /|"<<endl;	
 cout<<"       / |"<<endl;	
 cout<<"      /  |"<<endl;	
 cout<<"     /   |"<<b<<endl;	
 cout<<"    /    |"<<endl;	
 cout<<"  B/_____|C"<<endl;
 cout<<"      "<<a<<endl;
 
 
 cout<<"\nEnter c: ";
 cin>>c;
  system("cls");
 
  if (c<=9)
  {
  	cout<<"\n\n         A"<<endl;
 cout<<"        /|"<<endl;	
 cout<<"       / |"<<endl;	
 cout<<"     "<<c<<"/  |"<<endl;	
 cout<<"     /   |"<<b<<endl;	
 cout<<"    /    |"<<endl;	
 cout<<"  B/_____|C"<<endl;
 cout<<"      "<<a<<endl;
  }
  
  else if (c>=10)
  {
  	cout<<"\n\n         A"<<endl;
 cout<<"        /|"<<endl;	
 cout<<"       / |"<<endl;	
 cout<<"    "<<c<<"/  |"<<endl;	
 cout<<"     /   |"<<b<<endl;	
 cout<<"    /    |"<<endl;	
 cout<<"  B/_____|C"<<endl;
 cout<<"      "<<a<<endl;
  }
  system("cls");
}





void diagram()
{
	  if (c<=9)
  {
  	cout<<"\n\n         A"<<endl;
 cout<<"        /|"<<endl;	
 cout<<"       / |"<<endl;	
 cout<<"     "<<c<<"/  |"<<endl;	
 cout<<"     /   |"<<b<<endl;	
 cout<<"    /    |"<<endl;	
 cout<<"  B/_____|C"<<endl;
 cout<<"      "<<a<<endl;
  }
  
  else if (c>=10)
  {
  	cout<<"\n\n         A"<<endl;
 cout<<"        /|"<<endl;	
 cout<<"       / |"<<endl;	
 cout<<"    "<<c<<"/  |"<<endl;	
 cout<<"     /   |"<<b<<endl;	
 cout<<"    /    |"<<endl;	
 cout<<"  B/_____|C"<<endl;
 cout<<"      "<<a<<endl;
  }
}
  
  
  
  
  
  void findside()
  {
  	while (true)
  	{
 			int cal;
 			cout<<"1--> Calculate a"<< "\t\t\t\tBack --> 0"<<endl;
 			cout<<"2--> Calculate b"<<endl;
 			cout<<"3--> Calculate c"<<endl;
 			cout<<"\nEnter side: ";
 			cin>>cal;
 			
 			if (cal == 0)
 			{
 				system("cls");
 				break;
 				
			 }
 			else if (cal == 1)
 			{
 				if (a != 0 )
 				{
 					cout<<"\nNothing to calculate, parameter 'a' already exist!\n"<<endl;
 					system ("pause");
 					system ("cls");
 					
 					
				}
 				 
 				 else
				  {
				  
 				res= (c*c) - (b*b);
 				sqrtres= sqrt (res);
 				cout<<"Side 'a' is: "<<sqrtres<<endl;
 				a=sqrtres;
 				system("pause");
 				system("cls");	
 			     }
 			     break;
			}
			
				else if (cal == 2)
 			{
 				
 					if (b != 0 )
 				{
 					cout<<"\nNothing to calculate, parameter 'b' already exist!\n"<<endl;
 					system ("pause");
 					system ("cls");	
				}
				
				else
				{
 				res= (c*c) - (a*a);
 				sqrtres= sqrt (res);
 				cout<<"Side 'b' is: "<<sqrtres<<endl;
 				b=sqrtres;
 				system("pause");
 				system("cls");
 			    }
 			    break;
			}
			
				if (cal == 3)
 			{
 					if (c != 0 )
 				{
 					cout<<"\nNothing to calculate, parameter 'c' already exist!\n"<<endl;
 					system ("pause");
 					system ("cls");				
				}
				
				else
				{
 				res= (a*a) + (b*b);
 				sqrtres= sqrt (res);
 				cout<<"Side 'c' is: "<<sqrtres<<endl;
 				c=sqrtres;
 				system("pause");
 				system("cls");
 			    }
 			    break;
			}
 		}
  }
  
  
  void calsurface()
  {
  	
  	if (a==0 || b==0 || c==0)
  	{
  		cout<<"\nCannot calculate the surface!\nMissing side size.\n"<<endl;
  		system("pause");
  		system("cls");
	  }
	  
	  else
	  {
  	s=(a*b)/2;
  	cout<<"The surface is: "<<s<<endl;
  	system("pause");
  	system("cls");
  }
  	
  }
  
  void trianglemenu()
  { 
  while (true)
  {
 		int choice;
 		diagram();
 		cout<<"\n\nWhat do you want to do now?"<<endl;
 		cout<<"1 --> Calculate side"<<"\t\t\t\t New triangle --> 9"<<endl;
 		cout<<"2 --> Calculate surface"<<"\t\t\t\t Exit --> 0"<<endl;
 		cin>>choice;
 		system("cls");
 		diagram();
 		
 		if (choice == 0)
 		{
 			system("cls");
 			break;
 			
		}
		
		else if (choice == 9)
		{
			system("cls");
			tridiagram();
		}
		 
 		
 		else if (choice==1)
 		{
 			findside();
		}	
		
		else if (choice==2)
		{
			calsurface();
		}
		 
		 	
  }
}

 
 
 
 void originaltriangle ()
 {
 	 tridiagram();
 	 trianglemenu();
 	 
 	 
		 }	











void calculator()
 {
int choice;

	while(true)
	{
	cout<<"MENU"<<"\t\t\t\t\t\t 7 <------BACK";
	cout<<"\n1.Add\n";
	cout<<"2.Substract\n";
	cout<<"3.Multiply\n";
	cout<<"4.Divide\n";
	cout<<"5.Sqrt\n";
	cout<<"6.Triangle\n";
	cout<<"0.Exit\n";
	cout<<"\nWhat do you want to do: ";



	cin>>choice;
	
if (choice == 6)
{
		system("cls");
	originaltriangle();



}

	if (choice == 7)
	{
		system ("cls");
		break;
	}
	
	if (choice == 0)
	{
			system ("cls");
		cout<<"Do you really want to exit the program?"<<endl;
		cout<<"1 ---> Yes"<<"\tNo <--- 2"<<endl;
		
		cin>>yesno0;
		if (yesno0 == 1)
		{
		exit(0);
	    }
	    
	    else if (yesno0 == 2)
		{ 
		system ("cls");
		
		}
		
	}



		 if (choice==5)


		{
        cout<<"Enter a:";
        cin>>a;
        cout<<"Enter b:";
        cin>>b;
        cout<<"Enter c:";
        cin>>c;


        s=( ( (b) * (b) ) - (4*(a)*(c) ) );
        D =sqrt (s);

        if (s<0)
  {
  	HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(h,FOREGROUND_BLUE | FOREGROUND_INTENSITY);
   cout<<"\nNo real sqrt.\n";
   system("pause");
	system("CLS");


  }

        if (s>0)
  {
  x1= (-b+D) / (2*a);
  x2= (-b-D) / (2*a);
   cout<<"The discriminant is:"<<D<<"\n";
 cout<<"The solutions are:" << x1 << " and " << x2 << "\n";
 system("pause");
	system("CLS");
  }

		if (s==0)
  {
  x=-b/2*a;
  cout<<x<<"\n";
  system("pause");
	system("CLS");

  }
}



	{
	 if (choice==1)
	 {
	 cout<<"Enter first value:";
	cin>>a;
	cout<< "Enter second value:";
	cin>>b;
	result=a+b;
	cout<<"The result is: "<<result<<"\n";
	system("pause");
	system("CLS");}
	


	else if (choice==2){
	cout<<"Enter first value:";
	cin>>a;
	cout<< "Enter second value:";
	cin>>b;
	result=a-b;
	cout<<"The result is: "<<result<<"\n";
	system("pause");
	system("CLS");}

	else if (choice==3){
	cout<<"Enter first value:";
	cin>>a;
	cout<< "Enter second value:";
	cin>>b;
	result=a*b;
	cout<<"The result is: "<<result<<"\n";
	system("pause");
	system("CLS");}

	else if (choice==4)
	{
		system ("cls");
		cout<< "How do you want to divide?\n"<<"1 ---> /\n"<<"2 ---> %"<<endl;
		cin>>yesno0;
		if(yesno0 == 1)
		{
	cout<<"Enter first value:";
	cin>>a;
	cout<< "Enter second value:";
	cin>>b;
	result=a/b;
	cout<<"The result is: "<<result<<"\n";
	system("pause");
	system("CLS");}
	
	else if (yesno0 == 2)
	{
		int r45,r46;
		cout<<"Enter first value: ";
		cin>>r45;
		cout<<"Enter second value: ";
		cin>>r46;
		result = r45%r46;
		cout<<"The result is: "<<result<<"\n";
		system("pause");
		system("cls");
	}
	
 
		
		}
	}
	
	}
}


void menu()
{
	while(true)
	{
system ("cls");
	int choice2;
	cout<<"\tMENU"<<endl;
	cout<<"1.Calculator"<<"\t\t\t\t\t\t 9 <----- LOGOUT"<<endl;
	cout<<"0.Exit"<<endl;
	

	cin>>choice2;
	switch(choice2)
	{
		case 1:
			system ("cls");	
			calculator();
			break;
			
			
		case 9:
			system ("cls");
			cout<<"Do you really want to logout?"<<endl;
			cout<<"1 ---> Yes"<<"\tNo <--- 2"<<endl;
		
		cin>>yesno0;
		if (yesno0 == 1)
		{
			system ("cls");
		  Loginscreen();
		  while(true)
		  {
		  	menu();
		  }
	    }
	    
	    else if (yesno0 == 2)
		{ 
		system ("cls");
		menu();
		}
		  
		    
		case 0:
			system("cls");
		cout<<"Do you really want to exit the program?"<<endl;
		cout<<"1 ---> Yes"<<"\tNo <--- 2"<<endl;
		
		cin>>yesno0;
		if (yesno0 == 1)
		{
		exit (0);
	    }
	    
	    else if (yesno0 == 2)
		{ 
		system ("cls");
		menu();
		}
		
				
	}
}
}


int main()
{
	Loginscreen();
	menu();

return 0;
}
