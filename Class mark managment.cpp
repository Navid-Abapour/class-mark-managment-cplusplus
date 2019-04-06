//Developer: Navid Ebapour
#include <iostream>
using namespace std;
int main()
{
	double avg_math=0, avg_phy=0,	avg_chem=0,	avg_lit=0,	avg_sci=0,	avg_his=0, avg_geo=0;
	bool bo1=true,bo2=false,bo3=false;
	double average;
	string s1;
	char ch1;
	int n,i,n2,n3,n4,n5;
	cout<<"Please enter the number of students: ";
	cin>>n;
	string name[n];
	string id[n];
	double mark_math[n];
	double physics[n];
	double chemsitry[n];
	double geometry[n];
	double literature[n];
	double science[n];
	double history[n];
	for(i=0;i<n;i++)
	{
		cout<<endl<<"Enter the name of the "<<i+1<<"th student: ";
		cin>>name[i];
		cout<<endl<<"Enter the ID of the "<<i+1<<"th student: ";
		cin>>id[i];
		cout<<endl<<"Enter the Mathematic's mark of the "<<name[i]<<": ";
		cin>>mark_math[i];
		cout<<endl<<"Enter the Physic's mark of the "<<name[i]<<": ";
		cin>>physics[i];
		cout<<endl<<"Enter the Chemistry's mark of the "<<name[i]<<": ";
		cin>>chemsitry[i];
		cout<<endl<<"Enter the Geometry's mark of the "<<name[i]<<": ";
		cin>>geometry[i];
		cout<<endl<<"Enter the Literature's mark of the "<<name[i]<<": ";
		cin>>literature[i];
		cout<<endl<<"Enter the Science's mark of the "<<name[i]<<": ";
		cin>>science[i];
		cout<<endl<<"Enter the History's mark of the "<<name[i]<<": ";
		cin>>history[i];
	}
	do
	{
		cout<<endl<<"::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::";
		cout<<endl<<endl<<endl<<"Please choose the work that you want to do: "<<endl<<"1.The average of the student."<<endl<<"2.The average of a special course at the class."<<endl<<"3.The mark of a student at a special course."<<endl<<"4.The name of the students who have passed the a special course."<<endl<<"5.Exit"<<endl;
		cin>>n2;
		
if(n2==1)
		{
			cout<<endl<<"Please enter the name of the student that you want to see his/her average: ";
			cin>>s1;
			for(i=0;i<n;i++)
			{
				if(name[i]==s1)				bo2=true;	
			}	
				if(bo2==true)
				{
					average=(mark_math[i]+physics[i]+chemsitry[i]+geometry[i]+literature[i]+science[i]+history[i])/7;
					cout<<"The average of the "<<s1<<" is: "<<average;
				}
				else if(bo2==false)
				{
					cout<<endl<<"Sorry sir; the name that you have entered is not founded.";
				}
			
		}
		
else if(n2==2)
		{
			cout<<endl<<"Please select the course at the class: ";
			cout<<endl<<"1.Mathematic"<<endl<<"2.Physics"<<endl<<"3.Chemistry"<<endl<<"4.Geometry"<<endl<<"5.Literature"<<endl<<"6.Science"<<endl<<"7.History";
			cout<<endl<<"Your choice is: ";
			cin>>n3;
			if(n3==1)			
			{
				cout<<"The average of the class in Mathematic is: ";
				for(i=0;i<n;i++)
				{
					avg_math=avg_math+mark_math[i];
				}
				cout<<avg_math/n;	
			}
			
			
			else if(n3==2)
			{
			cout<<"The average of the class in Physics is: ";
			for(i=0;i<n;i++)
			{
				avg_phy=avg_phy+physics[i];
			}
			cout<<avg_phy/n;	
			}		
			
			else if(n3==3)		
			{
				cout<<"The average of the class in Chemistry is: ";
				for(i=0;i<n;i++)
				{
					avg_chem=avg_chem+chemsitry[i];
				}
				cout<<avg_chem/n;
			}

			else if(n3==4)		
			{
				cout<<"The average of the class in Geometry is: ";
				for(i=0;i<n;i++)
				{
					avg_geo=avg_geo+geometry[i];
				}
				cout<<avg_geo/n;
			}
			
			else if(n3==5)		
			{
				cout<<"The average of the class in Literature is: ";
				for(i=0;i<n;i++)
				{
					avg_lit=avg_lit+literature[i];
				}
				cout<<avg_lit/n;
			}
			
		
			else if(n3==6)		
			{
				cout<<"The average of the class in Science is: ";
				for(i=0;i<n;i++)
				{
					avg_sci=avg_sci+science[i];
				}
				cout<<avg_sci/n;	
			}
			
			else if(n3==7)		
			{
				cout<<"The average of the class in History is: ";
				for(i=0;i<n;i++)
				{
					avg_his=avg_his+history[i];
				}
				cout<<avg_his/n;	
			}
		}


else if(n2==3)
		{
			cout<<endl<<"Please enter the name of the student: ";
			cin>>s1;
			for(i=0;i<n;i++)
			{
				if(name[i]==s1)				
				{
					bo3=true;	
				}
				
				if(bo3==true)	
				{
					break;
				}	
			}	
			
			if(bo3==true)
			{
					cout<<endl<<"Please select the course that you want to see the student's mark: ";
					cout<<endl<<"1.Mathematic"<<endl<<"2.Physics"<<endl<<"3.Chemistry"<<endl<<"4.Geometry"<<endl<<"5.Literature"<<endl<<"6.Science"<<endl<<"7.History";
					cout<<endl<<"Your choice is: ";
					cin>>n4;

			if(n4==1)			
			{
				cout<<"The mark of the student at Mathematic is: ";
				cout<<mark_math[i];
			}
			
			
			else if(n4==2)		
			{		
			cout<<"The mark of the student at Physics is: ";
			cout<<physics[i];
			}

			
			else if(n4==3)		
			{
				cout<<"The mark of the student at Chemistry is: ";
				cout<<chemsitry[i];
			}

			else if(n4==4)		
			{
				cout<<"The mark of the student at Geometry is: ";
				cout<<geometry[i];
			}
			
			else if(n4==5)	
			{
				cout<<"The mark of the student at Literature is: ";
				cout<<literature[i];
			}
			
		
			else if(n4==6)		
			{
				cout<<"The mark of the student at Science is: ";
				cout<<science[i];	
			}
			
			else if(n4==7)		
			{
				cout<<"The mark of the student at History is: ";
				cout<<history[i];	
			}
			}
				
			else if(bo3==false)
				{
					cout<<endl<<"Sorry sir; the name that you have entered is not founded.";
				}
			}
					

		
		
else if(n2==4)
		{
					cout<<endl<<"Please select the course that you want to see the list of the students who have passed: ";
					cout<<endl<<"1.Mathematic"<<endl<<"2.Physics"<<endl<<"3.Chemistry"<<endl<<"4.Geometry"<<endl<<"5.Literature"<<endl<<"6.Science"<<endl<<"7.History";
					cout<<"Your choice is: ";
					cin>>n5;
			if(n5==1)			
			{
				cout<<endl<<"The name of the students who have passed the Mathematic: ";
				for(i=0;i<n;i++)
				{
					if(mark_math[i]>=10) cout<<endl<<name[i];
				}
			}
			
			else if(n5==2)		
			{
				cout<<endl<<"The name of the students who have passed the Physics: ";
				for(i=0;i<n;i++)
				{
					if(physics[i]>=10) cout<<endl<<name[i];
				}
			}
			
			else if(n5==3)
			{
				cout<<endl<<"The name of the students who have passed the Chemistry: ";
				for(i=0;i<n;i++)
				{
					if(chemsitry[i]>=10) cout<<endl<<name[i];
				}
			}

			else if(n5==4)	
			{
			cout<<endl<<"The name of the students who have passed the Geometry: ";
				for(i=0;i<n;i++)
				{
					if(geometry[i]>=10) cout<<endl<<name[i];
				}
			}
			
			else if(n5==5)	
			{
				cout<<endl<<"The name of the students who have passed the Literature: ";
				for(i=0;i<n;i++)
				{
					if(literature[i]>=10) cout<<endl<<name[i];
				}
			}
			
		
			else if(n5==6)
			{
				cout<<endl<<"The name of the students who have passed the Science: ";
				for(i=0;i<n;i++)
				{
					if(science[i]>=10) cout<<endl<<name[i];
				}	
			}
			
			else if(n5==7)	
			{
				cout<<endl<<"The name of the students who have passed the History: ";
				for(i=0;i<n;i++)
				{
					if(history[i]>=10) cout<<endl<<name[i];
				}	
			}
		}
		
		
		
else if(n2==5)
		{
			cout<<endl<<endl<<"		  ! Thank for so much for using this program !";
			return 0;
		}
		
	}while(bo1=true);
	cout<<endl<<endl<<"			! Thank for so much for using this program !";
	
	
	
}
