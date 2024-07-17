//Today we have learn about conditional statement like: if, if-else, if-else_if-else 

//we will first going to use the if statement and see why we need to use the if statement in c++ and how does it affect our program 
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	float a;
//	cout<<"Enter a: ";
//	cin>>a;
//	
//	if(a>0.01)
//	{
//		cout<<"if statement is true: ";
//	}
//	return 0;
//}

//In the above program we have created a variable using the data type float and trying to used it inside the if statment 
//where we are checking does the condition match the way we serve it if yes execute the code present inside the curly bracket.
// so whenever our if condition gets executed we are going to see the output : if statement is true

// Now we are going to see the example of if-else

//#include<iostream>
//using namespace std;
//
//int main()
//{
//	float a;
//	
//	cout<<"enter the value of a: ";
//	cin>>a;
//	
//	if(a>0.01)
//	{
//		cout<<"if executed: ";
//	}
//	else{
//		cout<<"else executed";
//	}
//	return 0;
//}

// Here in the above program we can see we have created a variable where we are using the if-else condition so in any case if is going to get false 
// else is going to be executed


// Now we are going to see the example of using if, else-if, else:

//#include<iostream>
//using namespace std;
//
//
//int main()
//{
//	int percentage;
//	cout<<"Enter percentage to get your grade: ";
//	cin>>percentage;
//	
//	if(percentage>=90)
//	{
//		cout<<"A";
//	}
//	else if(percentage>=80)
//	{
//		cout<<"B";
//	}
//	else if(percentage>=70)
//	{
//		cout<<"C";
//	}
//	else if(percentage>=60)
//	{
//		cout<<"D";
//	}
//	else{
//		cout<<"E";
//	}
//	
//	return 0;
//}

// Now we are going to see the example of switch statement , it also comes under conditional statement and are use for creating multiple if else cases 
// for creating the switch statement we just need to use switch word

//#include<iostream>
//using namespace std;
//
//int main()
//{
//
//	int a;
//	cout<<"enter the value of a: ";
//	cin>>a;
//	
//	switch(a)
//	{
//		case 1:
//		{
//			cout<<"Value of a is 1: ";
//			break;
//		 }
//		case 2:{
//			cout<<"Value of a is 2: ";
//			break;
//		}
//		default:{
//			cout<<"Wrong input: ";
//			break;
//		}
//		 
//	}
//	
//	return 0;
}
// In the above program we can see that we have initialized variable name a: and using the switch we put the variable inside the parenthesis
// we can see if the value of a = 1 , case 1: and it's content present inside is going to be executed
// and by any chance a has a value which doesn't satisfy the any case then automatically default statement is going to be executed 
