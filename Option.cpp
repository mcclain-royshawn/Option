//Comment:

//Header:
         #include<iostream>
         using namespace std;
         
//GF

//FD

//Main:
       int main()
       {
           //Local Variable:
            int option;    
                               
           //Code
          
           
           while(option !=3)
           {
           cout<<"\n \t MENU"<<"\n \t \t 1. Add Student's Information"<<"\n \t\t 2.Display Student's Information"<<"\n \t\t 3. Exit"<<"\n \t\t Enter your Choice HERE =>";
           cin>>option;
              if (option==1)
              {
                 cout<<"\n \t\t You selected option 1.";
                        
               } 
              
              else if (option==2)
              {
                   cout<<"\n \t\t You selected option 2. ";
                       
              } 
              else if (option==3)
              {
                   system ("pause");
                    }
              
              
              else
              {
                  cout<<"\n \t\t ERROR... Please select 1,2, or 3.";
                  
                  }
                    
                                         
            }
           
           
          
           return 0;
           }
