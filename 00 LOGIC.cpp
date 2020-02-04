#include<iostream>
#include<string>
void conjunction();
void disjunction();
void negation();
void conditional();
void biconditional();

using namespace std;

main(){

	int choice;
	cout<<"1. Conjunction"<<endl;
	cout<<"2. Disjunction"<<endl;
	cout<<"3. Negation"<<endl;
	cout<<"4. Conditional"<<endl;
	cout<<"5. Biconditional"<<endl<<endl;
	
	cout<<"Choice: ";
	cin >> choice;

	if(choice==1){
		conjunction();
	}
	else if(choice==2){
		disjunction();
	}
	else if(choice==3){
		negation();
	}
	else if(choice==4){
		conditional();
	}
	else if(choice==5){
		biconditional();
	}
	else {
		cout <<"Choice Not Found";
	}	
}
	void conjunction(){

		string q,p;

		cout <<endl<<"Conjunction\n\tlet p q be the proposition, the conjunction of p and q denoted p ^ q, \n\tis the proposition p and q."<<endl<<endl<<endl;
		
		cout<<"PLEASE TYPE true OR false"<<endl<<endl;
		
		cout<< "\nEnter the value of p - \t";
		cin>>p;
		cout <<"\n\t\tTHE VALUE OF p IS " << p <<endl ;
		cout<<"\nEnter the value of q - \t";
		cin>>q;
		cout <<"\n\t\tTHE VALUE OF q IS " << q<<endl<<endl;

		if( p == "true" &&  q =="true" )
		 {
			cout<<"\nTherefore, p ^ q = true"<<endl<<endl;
		}

		else cout<< "\nTherefore p ^ q = false"<<endl<<endl;	
	}

	void disjunction(){

		string q,p;
		
		cout <<endl<<"Disjunction\n\tlet p q be the proposition, the conjunction of p and q denoted p V q, \n\tis the proposition p and q."<<endl<<endl<<endl;
		
		cout<<"PLEASE TYPE true OR false"<<endl<<endl;
		
		cout<< "\nEnter the value of p - \t";
		cin>>p;
		cout <<"\n\t\tTHE VALUE OF p IS " << p <<endl ;
		cout<<"\nEnter the value of q - \t";
		cin>>q;
		cout <<"\n\t\tTHE VALUE OF q IS " << q<<endl<<endl;

		if( p == "false" &&  q =="false" )
		 {
			cout<<"\nTherefore, p V q = false"<<endl<<endl;
		}

		else cout<< "\nTherefore p V q = true"<<endl<<endl;	
	}
	
	void negation(){
			string p;
			
		cout <<endl<<"Negation\n\tlet p be a proposition, the negation of p denoted by p, \n\tis the proposition not p."<<endl<<endl<<endl;
		
		cout<<"PLEASE TYPE true OR false"<<endl<<endl;
		
		cout<< "\nEnter the value of p - \t";
		cin>>p;
		cout <<"\n\t\tTHE VALUE OF p IS " << p <<endl ;

		if( p == "true")   
		 {
			cout<<"\nTherefore, q = false"<<endl<<endl;
		}

		else cout<< "\nTherefore q = true"<<endl<<endl;	
	}
	
	void conditional(){
			string q,p;
			
	cout <<endl<<"Conditional\n\ta proposition is called conditional proposition if p and q are proposition,\n\t the compound proposition p then q denoted by p --> q."<<endl<<endl<<endl;
		
		cout<<"PLEASE TYPE true OR false"<<endl<<endl;
		
		cout<< "\nEnter the value of p - \t";
		cin>>p;
		cout <<"\n\t\tTHE VALUE OF p IS " << p <<endl ;
		cout<<"\nEnter the value of q - \t";
		cin>>q;
		cout <<"\n\t\tTHE VALUE OF q IS " << q<<endl<<endl;

		if( p == "true" &&  q =="false" )
		 {
			cout<<"\nTherefore, p --> q = false"<<endl<<endl;
		}

		else cout<< "\nTherefore p --> q = true"<<endl<<endl;	
	}
	
	void biconditional(){
			string q,p;
			
	cout <<endl<<"Biconditional\n\ta proposition is called biconditional proposition if p and q are proposition,\n\tthe compound proposition p if and only if a denoted by p <-->."<<endl<<endl<<endl;
		
		cout<<"PLEASE TYPE true OR false"<<endl<<endl;
		
		cout<< "\nEnter the value of p - \t";
		cin>>p;
		cout <<"\n\t\tTHE VALUE OF p IS " << p <<endl ;
		cout<<"\nEnter the value of q - \t";
		cin>>q;
		cout <<"\n\t\tTHE VALUE OF q IS " << q<<endl<<endl;

		if(( p == "true" &&  q =="true" ) || ( p == "false" &&  q =="false" ))
	    {
			cout<<"\nTherefore, p <--> q is true"<<endl<<endl;
		}

		else cout<< "\nTherefore p <--> q is false"<<endl<<endl;	
	}
