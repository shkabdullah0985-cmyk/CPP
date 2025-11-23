#include<iostream>

#include<string>

using namespace std;

int main(){
    string menu[]={"TEA","COFFEE","MILK","COLD DRINK"};
    string options[]={"REPLACE","CANCEL","COMPLAIN","HOLD ORDER","HELP"};
    string complain[]={"SERVICE IS TOO SLOW","ORDER IS WRONG","FOOD IS COLD","PRICE IS TOO HIGH","BEHAVIOUR OF STAFF IS TOO RUDE","OTHERS"};
    int price[]={0,10,20,30,40};

    cout<<"MENU"<<endl;
    
    
    for(int i = 1;i<5;i++){
    cout<<i<<"."<<menu[i-1]<<endl;
    }
    
    int order ,quantity;
    string cancelorder;
    cout<<"ENTER YOUR ORDER(1,2,3,4):- "<<endl;
    cin>>order;
    
    cout<<"ENTER A QUANTITY OF YOUR ORDER:- "<<endl;
    cin>>quantity;
    
    string complain1;
    string problem;
    int time;
    int complain_option;
    int option;
    string feedback;
    string reason; 
    int attempts = 0;
    bool valid = false;

    while(attempts < 5){
        cout<<"DO YOU WANT TO CANCEL OR REPLACE  THE ORDER (YES/NO) :- "<<endl;
       
        cin>>cancelorder;
        
        if(cancelorder=="YES" || cancelorder=="Y" || cancelorder=="yes" || cancelorder=="y"){
            valid = true;
            break;
        }
        else if(cancelorder=="NO" || cancelorder=="N" || cancelorder=="no" || cancelorder=="n"){
            valid = true;
            break;
        
        }
        else{
            cout<<"INVALID INPUT! PLEASE TYPE YES OR NO"<<endl;
            attempts++;
        }
    };
    if(!valid){
        cout<<"YOU HAVE EXCEEDED THE 5 ATTEMPTS. TRY AGAIN LATER!"<<endl;
    }
        
    switch(order){
        case 1:

    if( cancelorder=="YES" || cancelorder=="Y"||cancelorder=="yes"||cancelorder=="y"){
        cout<<"OPTIONS"<<endl;
        
        for(int i = 1;i<6;i++){
    cout<<i<<"."<<options[i-1]<<endl;
    }
        cout<<"PLEASE SELECT AN OPTION(1,2,3,4,5):- "<<endl;
    cin>>option;
             if(option==1){
                 cout<<"PLEASE RE ORDER"<<endl;
                  cout<<"MENU"<<endl;
    
    
    for(int i = 1;i<5;i++){
    cout<<i<<"."<<menu[i-1]<<endl;
    }
    cout<<"ENTER YOUR ORDER(1,2,3,4):- "<<endl;
    cin>>order;
    
    cout<<"ENTER A QUANTITY OF YOUR ORDER:- "<<endl;
    cin>>quantity;
    
    switch(order){
        
        case 1:
        cout<<"ORDER  REPLACE SUCESSFULLY :-) "<<endl;
            cout<<"PRICE :- "<<price[1]<<endl;
            cout<<"YOUR BILLING AMOUNT :- "<<quantity*price[1] <<endl;
            cout<<"THANKYOU FOR VISITING ! "<<endl;  
            cout<<" PLEASE ENTER YOUR FEEDBACK :- "<<endl;
            cin>>feedback;
            cout<<" THAKNYOU FOR YOUR RESPONSE :-)"<<endl;
            cout<<"VISIT AGAIN :-)"<<endl;
        break;
        
        case 2:
        cout<<"ORDER  REPLACE SUCESSFULLY :-) "<<endl;
            cout<<"PRICE :- "<<price[2]<<endl;
            cout<<"YOUR BILLING AMOUNT :- "<<quantity*price[2] <<endl;
            cout<<"THANKYOU FOR VISITING ! "<<endl;  
            cout<<" PLEASE ENTER YOUR FEEDBACK :- "<<endl;
            cin>>feedback;
            cout<<" THAKNYOU FOR YOUR RESPONSE :-)"<<endl;
            cout<<"VISIT AGAIN :-)"<<endl;
            break;
            
            case 3:
            cout<<"ORDER  REPLACE SUCESSFULLY :-) "<<endl;
            cout<<"PRICE :- "<<price[3]<<endl;
            cout<<"YOUR BILLING AMOUNT :- "<<quantity*price[3] <<endl;
            cout<<"THANKYOU FOR VISITING ! "<<endl;  
            cout<<" PLEASE ENTER YOUR FEEDBACK :- "<<endl;
            cin>>feedback;
            cout<<" THAKNYOU FOR YOUR RESPONSE :-)"<<endl;
            cout<<"VISIT AGAIN :-)"<<endl;
            break;
            
            case 4:
            cout<<"ORDER  REPLACE SUCESSFULLY :-) "<<endl;
            cout<<"PRICE :- "<<price[4]<<endl;
            cout<<"YOUR BILLING AMOUNT :- "<<quantity*price[4] <<endl;
            cout<<"THANKYOU FOR VISITING ! "<<endl;  
            cout<<" PLEASE ENTER YOUR FEEDBACK :- "<<endl;
            cin>>feedback;
            cout<<" THAKNYOU FOR YOUR RESPONSE :-)"<<endl;
            cout<<"VISIT AGAIN :-)"<<endl;
            break;
            
            default :
            cout<<"INVALID ORDER !"<<endl;
    }
    
       }
       else if(option==2){
           cout<<"IF YOU ARE CANCELING YOUR ORDER IT WILL CAN CHARGE YOU THE PENALTY AMOUNT"<<endl;
       }
             else if(option==3){
                  cout<<"COMPLAIN"<<endl;
                  
                  for(int i = 1;i<7;i++){
    cout<<i<<"."<<complain[i-1]<<endl;
    }           cout<<"PLEASE SELECT AN OPTION:- "<<endl; 
                 cin>>complain_option;    
                 
                 if(complain_option==1){
                     cout<<"COMPLAIN IS BEEN NOTED NEXT TIME YOU WILL GET THE BETTER SERVICE"<<endl;
                     cout<<"(15%) DISCOUNT ON YOUR  CURRENT BILL"<<endl;
                     cout<<"THANK YOU FOR  YOUR COMPLAIN  IT'S HELPS US TO BE BETTER"<<endl;
                     cout<<"KEEP VISITING :-) "<<endl;
                 }
                 else if(complain_option==2){
                     cout<<"COMPLAIN IS BEEN NOTED NEXT TIME WE WILL BE CAUTIOUS"<<endl;
                     cout<<"SORRY FOR THE WRONG ORDER"<<endl;
                     cout<<"PLEASE DONT  PAY FOR THIS ORDER"<<endl;
                     cout<<"THANK YOU FOR  YOUR COMPLAIN  IT'S HELPS US TO BE BETTER"<<endl;
                     cout<<"KEEP VISITING :-) "<<endl;
                 }
                 else if(complain_option==3){
                     cout<<"COMPLAIN IS BEEN NOTED NEXT TIME WE WILL BE CAREFULL"<<endl;
                     cout<<"THANK YOU FOR  YOUR COMPLAIN  IT'S HELPS US TO BE BETTER"<<endl;
                     cout<<"KEEP VISITING :-) "<<endl;
                 }
                 else if(complain_option==4){
                     cout<<"COMPLAIN IS BEEN NOTED"<<endl;
                     cout<<"WE WILL ADD  SOME AFFORDABLE DISH  IN MENU"<<endl;
                     cout<<"THANK YOU FOR  YOUR COMPLAIN  IT'S HELPS US TO BE BETTER"<<endl;
                     cout<<"KEEP VISITING :-) "<<endl;
                 }
                 else if(complain_option==5){
                     cout<<"SORRY FOR THE BEHAVIOUR OF STAFF"<<endl;
                     cout<<"WE WILL TAKE STRICT ACTION AGAINST THE STAFF "<<endl;
                     cout<<"THANK YOU FOR  YOUR COMPLAIN  IT'S HELPS US TO BE BETTER"<<endl;
                     cout<<"KEEP VISITING :-) "<<endl;
                 }else if(complain_option==6){
                     cout<<"ENTER YOUR COMPLAIN :- "<<endl;
                cin>>complain1;
                cout<<"YOUR COMPLAIN HAS BEEN NOTED"<<endl;
                cout<<"THANK YOU FOR  YOUR COMPLAIN  IT'S HELPS US TO BE BETTER"<<endl;
                     cout<<"KEEP VISITING :-) "<<endl;
                     
                
                 }
                 else{
                     cout<<"PLEASE SELECT THE VALID OPTION"<<endl;
                 }
             }
             else if(option==4){
                 cout<<"PLEASE ENTER THE TIME IN MINUTES:- "<<endl;
                 cin>>time;
                 cout<<"YOUR ORDER IS ON HOLD FOR"<<time<<"MINUTES"<<endl;
             }
             else if(option==5){
                 cout<<"HOW CAN WE HELP YOU"<<endl;
                 cout<<"PLEASE ENTER YOUR PROBLEM :- "<<endl;
                 cin>>problem;
                 cout<<"WE WILL WORK ON IT "<<endl;
                 cout<<"THANK YOU :-) "<<endl;
                 cout<<"KEEP VISITING :-) "<<endl;
             }
             else {
                 cout<<"PLEASE  SELECT VALID OPTION"<<endl;
             }
        }
        else {
            cout<<"ORDER PLACE SUCESSFULLY :-) "<<endl;
            cout<<"PRICE :- "<<price[4]<<endl;
            cout<<"YOUR BILLING AMOUNT :- "<<quantity*price[4] <<endl;
            cout<<"THANKYOU FOR VISITING ! "<<endl;  
            cout<<" PLEASE ENTER YOUR FEEDBACK :- "<<endl;
            cin>>feedback;
            cout<<" THAKNYOU FOR YOUR RESPONSE :-)"<<endl;
            cout<<"VISIT AGAIN :-)"<<endl;
        }
        break;
        
        case 2:
        if( cancelorder=="YES" || cancelorder=="Y"||cancelorder=="yes"||cancelorder=="y"){
        cout<<"OPTIONS"<<endl;
        
        for(int i = 1;i<6;i++){
    cout<<i<<"."<<options[i-1]<<endl;
    }
        cout<<"PLEASE SELECT AN OPTION(1,2,3,4,5):- "<<endl;
    cin>>option;
             if(option==1){
                 cout<<"PLEASE RE ORDER"<<endl;
                  cout<<"MENU"<<endl;
    
    
    for(int i = 1;i<5;i++){
    cout<<i<<"."<<menu[i-1]<<endl;
    }
    cout<<"ENTER A QUANTITY OF YOUR ORDER:- "<<endl;
    cin>>quantity;
    
    switch(order){
        
        case 1:
        cout<<"ORDER  REPLACE SUCESSFULLY :-) "<<endl;
            cout<<"PRICE :- "<<price[1]<<endl;
            cout<<"YOUR BILLING AMOUNT :- "<<quantity*price[1] <<endl;
            cout<<"THANKYOU FOR VISITING ! "<<endl;  
            cout<<" PLEASE ENTER YOUR FEEDBACK :- "<<endl;
            cin>>feedback;
            cout<<" THAKNYOU FOR YOUR RESPONSE :-)"<<endl;
            cout<<"VISIT AGAIN :-)"<<endl;
        break;
        
        case 2:
        cout<<"ORDER  REPLACE SUCESSFULLY :-) "<<endl;
            cout<<"PRICE :- "<<price[2]<<endl;
            cout<<"YOUR BILLING AMOUNT :- "<<quantity*price[2] <<endl;
            cout<<"THANKYOU FOR VISITING ! "<<endl;  
            cout<<" PLEASE ENTER YOUR FEEDBACK :- "<<endl;
            cin>>feedback;
            cout<<" THAKNYOU FOR YOUR RESPONSE :-)"<<endl;
            cout<<"VISIT AGAIN :-)"<<endl;
            break;
            
            case 3:
            cout<<"ORDER  REPLACE SUCESSFULLY :-) "<<endl;
            cout<<"PRICE :- "<<price[3]<<endl;
            cout<<"YOUR BILLING AMOUNT :- "<<quantity*price[3] <<endl;
            cout<<"THANKYOU FOR VISITING ! "<<endl;  
            cout<<" PLEASE ENTER YOUR FEEDBACK :- "<<endl;
            cin>>feedback;
            cout<<" THAKNYOU FOR YOUR RESPONSE :-)"<<endl;
            cout<<"VISIT AGAIN :-)"<<endl;
            break;
            
            case 4:
            cout<<"ORDER  REPLACE SUCESSFULLY :-) "<<endl;
            cout<<"PRICE :- "<<price[4]<<endl;
            cout<<"YOUR BILLING AMOUNT :- "<<quantity*price[4] <<endl;
            cout<<"THANKYOU FOR VISITING ! "<<endl;  
            cout<<" PLEASE ENTER YOUR FEEDBACK :- "<<endl;
            cin>>feedback;
            cout<<" THAKNYOU FOR YOUR RESPONSE :-)"<<endl;
            cout<<"VISIT AGAIN :-)"<<endl;
            break;
            
            default :
            cout<<"INVALID ORDER !"<<endl;
    }
       }
       else if(option==2){
           cout<<"IF YOU ARE CANCELING YOUR ORDER IT WILL CAN CHARGE YOU THE PENALTY AMOUNT"<<endl;
       }
             else if(option==3){
                  cout<<"COMPLAIN"<<endl;
                  
                  for(int i = 1;i<7;i++){
    cout<<i<<"."<<complain[i-1]<<endl;
    }           cout<<"PLEASE SELECT AN OPTION:- "<<endl; 
                 cin>>complain_option;    
                 
                 if(complain_option==1){
                     cout<<"COMPLAIN IS BEEN NOTED NEXT TIME YOU WILL GET THE BETTER SERVICE"<<endl;
                     cout<<"(15%) DISCOUNT ON YOUR  CURRENT BILL"<<endl;
                     cout<<"THANK YOU FOR  YOUR COMPLAIN  IT'S HELPS US TO BE BETTER"<<endl;
                     cout<<"KEEP VISITING :-) "<<endl;
                 }
                 else if(complain_option==2){
                     cout<<"COMPLAIN IS BEEN NOTED NEXT TIME WE WILL BE CAUTIOUS"<<endl;
                     cout<<"SORRY FOR THE WRONG ORDER"<<endl;
                     cout<<"PLEASE DONT  PAY FOR THIS ORDER"<<endl;
                     cout<<"THANK YOU FOR  YOUR COMPLAIN  IT'S HELPS US TO BE BETTER"<<endl;
                     cout<<"KEEP VISITING :-) "<<endl;
                 }
                 else if(complain_option==3){
                     cout<<"COMPLAIN IS BEEN NOTED NEXT TIME WE WILL BE CAREFULL"<<endl;
                     cout<<"THANK YOU FOR  YOUR COMPLAIN  IT'S HELPS US TO BE BETTER"<<endl;
                     cout<<"KEEP VISITING :-) "<<endl;
                 }
                 else if(complain_option==4){
                     cout<<"COMPLAIN IS BEEN NOTED"<<endl;
                     cout<<"WE WILL ADD  SOME AFFORDABLE DISH  IN MENU"<<endl;
                     cout<<"THANK YOU FOR  YOUR COMPLAIN  IT'S HELPS US TO BE BETTER"<<endl;
                     cout<<"KEEP VISITING :-) "<<endl;
                 }
                 else if(complain_option==5){
                     cout<<"SORRY FOR THE BEHAVIOUR OF STAFF"<<endl;
                     cout<<"WE WILL TAKE STRICT ACTION AGAINST THE STAFF "<<endl;
                     cout<<"THANK YOU FOR  YOUR COMPLAIN  IT'S HELPS US TO BE BETTER"<<endl;
                     cout<<"KEEP VISITING :-) "<<endl;
                 }else if(complain_option==6){
                     cout<<"ENTER YOUR COMPLAIN :- "<<endl;
                cin>>complain1;
                cout<<"YOUR COMPLAIN HAS BEEN NOTED"<<endl;
                cout<<"THANK YOU FOR  YOUR COMPLAIN  IT'S HELPS US TO BE BETTER"<<endl;
                     cout<<"KEEP VISITING :-) "<<endl;
                     
                
                 }
                 else{
                     cout<<"PLEASE SELECT THE VALID OPTION"<<endl;
                 }
             }
             else if(option==4){
                 cout<<"PLEASE ENTER THE TIME IN MINUTES:- "<<endl;
                 cin>>time;
                 cout<<"YOUR ORDER IS ON HOLD FOR"<<time<<"MINUTES"<<endl;
             }
             else if(option==5){
                 cout<<"HOW CAN WE HELP YOU"<<endl;
                 cout<<"PLEASE ENTER YOUR PROBLEM :- "<<endl;
                 cin>>problem;
                 cout<<"WE WILL WORK ON IT "<<endl;
                 cout<<"THANK YOU :-) "<<endl;
                 cout<<"KEEP VISITING :-) "<<endl;
             }
             else {
                 cout<<"PLEASE  SELECT VALID OPTION"<<endl;
             }
        }
        else {
            cout<<"ORDER PLACE SUCESSFULLY :-) "<<endl;
            cout<<"PRICE :- "<<price[2]<<endl;
            cout<<"YOUR BILLING AMOUNT :- "<<quantity*price[2] <<endl;
            cout<<"THANKYOU FOR VISITING ! "<<endl;  
            cout<<" PLEASE ENTER YOUR FEEDBACK :- "<<endl;
            cin>>feedback;
            cout<<" THAKNYOU FOR YOUR RESPONSE :-)"<<endl;
            cout<<"VISIT AGAIN :-)"<<endl;
        }
        break;

        case 3:
        if( cancelorder=="YES" || cancelorder=="Y"||cancelorder=="yes"||cancelorder=="y"){
        cout<<"OPTIONS"<<endl;
        
        for(int i = 1;i<6;i++){
    cout<<i<<"."<<options[i-1]<<endl;
    }
        cout<<"PLEASE SELECT AN OPTION(1,2,3,4,5):- "<<endl;
    cin>>option;
             if(option==1){
                 cout<<"PLEASE RE ORDER"<<endl;
                  cout<<"MENU"<<endl;
    
    
    for(int i = 1;i<5;i++){
    cout<<i<<"."<<menu[i-1]<<endl;
    }
    cout<<"ENTER A QUANTITY OF YOUR ORDER:- "<<endl;
    cin>>quantity;
    
    switch(order){
        
        case 1:
        cout<<"ORDER  REPLACE SUCESSFULLY :-) "<<endl;
            cout<<"PRICE :- "<<price[1]<<endl;
            cout<<"YOUR BILLING AMOUNT :- "<<quantity*price[1] <<endl;
            cout<<"THANKYOU FOR VISITING ! "<<endl;  
            cout<<" PLEASE ENTER YOUR FEEDBACK :- "<<endl;
            cin>>feedback;
            cout<<" THAKNYOU FOR YOUR RESPONSE :-)"<<endl;
            cout<<"VISIT AGAIN :-)"<<endl;
        break;
        
        case 2:
        cout<<"ORDER  REPLACE SUCESSFULLY :-) "<<endl;
            cout<<"PRICE :- "<<price[2]<<endl;
            cout<<"YOUR BILLING AMOUNT :- "<<quantity*price[2] <<endl;
            cout<<"THANKYOU FOR VISITING ! "<<endl;  
            cout<<" PLEASE ENTER YOUR FEEDBACK :- "<<endl;
            cin>>feedback;
            cout<<" THAKNYOU FOR YOUR RESPONSE :-)"<<endl;
            cout<<"VISIT AGAIN :-)"<<endl;
            break;
            
            case 3:
            cout<<"ORDER  REPLACE SUCESSFULLY :-) "<<endl;
            cout<<"PRICE :- "<<price[3]<<endl;
            cout<<"YOUR BILLING AMOUNT :- "<<quantity*price[3] <<endl;
            cout<<"THANKYOU FOR VISITING ! "<<endl;  
            cout<<" PLEASE ENTER YOUR FEEDBACK :- "<<endl;
            cin>>feedback;
            cout<<" THAKNYOU FOR YOUR RESPONSE :-)"<<endl;
            cout<<"VISIT AGAIN :-)"<<endl;
            break;
            
            case 4:
            cout<<"ORDER  REPLACE SUCESSFULLY :-) "<<endl;
            cout<<"PRICE :- "<<price[4]<<endl;
            cout<<"YOUR BILLING AMOUNT :- "<<quantity*price[4] <<endl;
            cout<<"THANKYOU FOR VISITING ! "<<endl;  
            cout<<" PLEASE ENTER YOUR FEEDBACK :- "<<endl;
            cin>>feedback;
            cout<<" THAKNYOU FOR YOUR RESPONSE :-)"<<endl;
            cout<<"VISIT AGAIN :-)"<<endl;
            break;
            
            default :
            cout<<"INVALID ORDER !"<<endl;
    }
       }
       else if(option==2){
           cout<<"IF YOU ARE CANCELING YOUR ORDER IT WILL CAN CHARGE YOU THE PENALTY AMOUNT"<<endl;
       }
             else if(option==3){
                  cout<<"COMPLAIN"<<endl;
                  
                  for(int i = 1;i<7;i++){
    cout<<i<<"."<<complain[i-1]<<endl;
    }           cout<<"PLEASE SELECT AN OPTION:- "<<endl; 
                 cin>>complain_option;    
                 
                 if(complain_option==1){
                     cout<<"COMPLAIN IS BEEN NOTED NEXT TIME YOU WILL GET THE BETTER SERVICE"<<endl;
                     cout<<"(15%) DISCOUNT ON YOUR  CURRENT BILL"<<endl;
                     cout<<"THANK YOU FOR  YOUR COMPLAIN  IT'S HELPS US TO BE BETTER"<<endl;
                     cout<<"KEEP VISITING :-) "<<endl;
                 }
                 else if(complain_option==2){
                     cout<<"COMPLAIN IS BEEN NOTED NEXT TIME WE WILL BE CAUTIOUS"<<endl;
                     cout<<"SORRY FOR THE WRONG ORDER"<<endl;
                     cout<<"PLEASE DONT  PAY FOR THIS ORDER"<<endl;
                     cout<<"THANK YOU FOR  YOUR COMPLAIN  IT'S HELPS US TO BE BETTER"<<endl;
                     cout<<"KEEP VISITING :-) "<<endl;
                 }
                 else if(complain_option==3){
                     cout<<"COMPLAIN IS BEEN NOTED NEXT TIME WE WILL BE CAREFULL"<<endl;
                     cout<<"THANK YOU FOR  YOUR COMPLAIN  IT'S HELPS US TO BE BETTER"<<endl;
                     cout<<"KEEP VISITING :-) "<<endl;
                 }
                 else if(complain_option==4){
                     cout<<"COMPLAIN IS BEEN NOTED"<<endl;
                     cout<<"WE WILL ADD  SOME AFFORDABLE DISH  IN MENU"<<endl;
                     cout<<"THANK YOU FOR  YOUR COMPLAIN  IT'S HELPS US TO BE BETTER"<<endl;
                     cout<<"KEEP VISITING :-) "<<endl;
                 }
                 else if(complain_option==5){
                     cout<<"SORRY FOR THE BEHAVIOUR OF STAFF"<<endl;
                     cout<<"WE WILL TAKE STRICT ACTION AGAINST THE STAFF "<<endl;
                     cout<<"THANK YOU FOR  YOUR COMPLAIN  IT'S HELPS US TO BE BETTER"<<endl;
                     cout<<"KEEP VISITING :-) "<<endl;
                 }else if(complain_option==6){
                     cout<<"ENTER YOUR COMPLAIN :- "<<endl;
                cin>>complain1;
                cout<<"YOUR COMPLAIN HAS BEEN NOTED"<<endl;
                cout<<"THANK YOU FOR  YOUR COMPLAIN  IT'S HELPS US TO BE BETTER"<<endl;
                     cout<<"KEEP VISITING :-) "<<endl;
                     
                
                 }
                 else{
                     cout<<"PLEASE SELECT THE VALID OPTION"<<endl;
                 }
             }
             else if(option==4){
                 cout<<"PLEASE ENTER THE TIME IN MINUTES:- "<<endl;
                 cin>>time;
                 cout<<"YOUR ORDER IS ON HOLD FOR"<<time<<"MINUTES"<<endl;
             }
             else if(option==5){
                 cout<<"HOW CAN WE HELP YOU"<<endl;
                 cout<<"PLEASE ENTER YOUR PROBLEM :- "<<endl;
                 cin>>problem;
                 cout<<"WE WILL WORK ON IT "<<endl;
                 cout<<"THANK YOU :-) "<<endl;
                 cout<<"KEEP VISITING :-) "<<endl;
             }
             else {
                 cout<<"PLEASE  SELECT VALID OPTION"<<endl;
             }
        }
        else {
            cout<<"ORDER PLACE SUCESSFULLY :-) "<<endl;
            cout<<"PRICE :- "<<price[3]<<endl;
            cout<<"YOUR BILLING AMOUNT :- "<<quantity*price[3] <<endl;
            cout<<"THANKYOU FOR VISITING ! "<<endl;  
            cout<<" PLEASE ENTER YOUR FEEDBACK :- "<<endl;
            cin>>feedback;
            cout<<" THAKNYOU FOR YOUR RESPONSE :-)"<<endl;
            cout<<"VISIT AGAIN :-)"<<endl;
        }
        break;
        
        case 4:
        if( cancelorder=="YES" || cancelorder=="Y"||cancelorder=="yes"||cancelorder=="y"){
        cout<<"OPTIONS"<<endl;
        
        for(int i = 1;i<6;i++){
    cout<<i<<"."<<options[i-1]<<endl;
    }
        cout<<"PLEASE SELECT AN OPTION(1,2,3,4,5):- "<<endl;
    cin>>option;
             if(option==1){
                 cout<<"PLEASE RE ORDER"<<endl;
                  cout<<"MENU"<<endl;
    
    
    for(int i = 1;i<5;i++){
    cout<<i<<"."<<menu[i-1]<<endl;
    }
    cout<<"ENTER A QUANTITY OF YOUR ORDER:- "<<endl;
    cin>>quantity;
    
    switch(order){
        
        case 1:
        cout<<"ORDER  REPLACE SUCESSFULLY :-) "<<endl;
            cout<<"PRICE :- "<<price[1]<<endl;
            cout<<"YOUR BILLING AMOUNT :- "<<quantity*price[1] <<endl;
            cout<<"THANKYOU FOR VISITING ! "<<endl;  
            cout<<" PLEASE ENTER YOUR FEEDBACK :- "<<endl;
            cin>>feedback;
            cout<<" THAKNYOU FOR YOUR RESPONSE :-)"<<endl;
            cout<<"VISIT AGAIN :-)"<<endl;
        break;
        
        case 2:
        cout<<"ORDER  REPLACE SUCESSFULLY :-) "<<endl;
            cout<<"PRICE :- "<<price[2]<<endl;
            cout<<"YOUR BILLING AMOUNT :- "<<quantity*price[2] <<endl;
            cout<<"THANKYOU FOR VISITING ! "<<endl;  
            cout<<" PLEASE ENTER YOUR FEEDBACK :- "<<endl;
            cin>>feedback;
            cout<<" THAKNYOU FOR YOUR RESPONSE :-)"<<endl;
            cout<<"VISIT AGAIN :-)"<<endl;
            break;
            
            case 3:
            cout<<"ORDER  REPLACE SUCESSFULLY :-) "<<endl;
            cout<<"PRICE :- "<<price[3]<<endl;
            cout<<"YOUR BILLING AMOUNT :- "<<quantity*price[3] <<endl;
            cout<<"THANKYOU FOR VISITING ! "<<endl;  
            cout<<" PLEASE ENTER YOUR FEEDBACK :- "<<endl;
            cin>>feedback;
            cout<<" THAKNYOU FOR YOUR RESPONSE :-)"<<endl;
            cout<<"VISIT AGAIN :-)"<<endl;
            break;
            
            case 4:
            cout<<"ORDER  REPLACE SUCESSFULLY :-) "<<endl;
            cout<<"PRICE :- "<<price[4]<<endl;
            cout<<"YOUR BILLING AMOUNT :- "<<quantity*price[4] <<endl;
            cout<<"THANKYOU FOR VISITING ! "<<endl;  
            cout<<" PLEASE ENTER YOUR FEEDBACK :- "<<endl;
            cin>>feedback;
            cout<<" THAKNYOU FOR YOUR RESPONSE :-)"<<endl;
            cout<<"VISIT AGAIN :-)"<<endl;
            break;
            
            default :
            cout<<"INVALID ORDER !"<<endl;
    }
       }
       else if(option==2){
           cout<<"IF YOU ARE CANCELING YOUR ORDER IT WILL CAN CHARGE YOU THE PENALTY AMOUNT"<<endl;
       }
             else if(option==3){
                  cout<<"COMPLAIN"<<endl;
                  
                  for(int i = 1;i<7;i++){
    cout<<i<<"."<<complain[i-1]<<endl;
    }           cout<<"PLEASE SELECT AN OPTION:- "<<endl; 
                 cin>>complain_option;    
                 
                 if(complain_option==1){
                     cout<<"COMPLAIN IS BEEN NOTED NEXT TIME YOU WILL GET THE BETTER SERVICE"<<endl;
                     cout<<"(15%) DISCOUNT ON YOUR  CURRENT BILL"<<endl;
                     cout<<"THANK YOU FOR  YOUR COMPLAIN  IT'S HELPS US TO BE BETTER"<<endl;
                     cout<<"KEEP VISITING :-) "<<endl;
                 }
                 else if(complain_option==2){
                     cout<<"COMPLAIN IS BEEN NOTED NEXT TIME WE WILL BE CAUTIOUS"<<endl;
                     cout<<"SORRY FOR THE WRONG ORDER"<<endl;
                     cout<<"PLEASE DONT  PAY FOR THIS ORDER"<<endl;
                     cout<<"THANK YOU FOR  YOUR COMPLAIN  IT'S HELPS US TO BE BETTER"<<endl;
                     cout<<"KEEP VISITING :-) "<<endl;
                 }
                 else if(complain_option==3){
                     cout<<"COMPLAIN IS BEEN NOTED NEXT TIME WE WILL BE CAREFULL"<<endl;
                     cout<<"THANK YOU FOR  YOUR COMPLAIN  IT'S HELPS US TO BE BETTER"<<endl;
                     cout<<"KEEP VISITING :-) "<<endl;
                 }
                 else if(complain_option==4){
                     cout<<"COMPLAIN IS BEEN NOTED"<<endl;
                     cout<<"WE WILL ADD  SOME AFFORDABLE DISH  IN MENU"<<endl;
                     cout<<"THANK YOU FOR  YOUR COMPLAIN  IT'S HELPS US TO BE BETTER"<<endl;
                     cout<<"KEEP VISITING :-) "<<endl;
                 }
                 else if(complain_option==5){
                     cout<<"SORRY FOR THE BEHAVIOUR OF STAFF"<<endl;
                     cout<<"WE WILL TAKE STRICT ACTION AGAINST THE STAFF "<<endl;
                     cout<<"THANK YOU FOR  YOUR COMPLAIN  IT'S HELPS US TO BE BETTER"<<endl;
                     cout<<"KEEP VISITING :-) "<<endl;
                 }else if(complain_option==6){
                     cout<<"ENTER YOUR COMPLAIN :- "<<endl;
                cin>>complain1;
                cout<<"YOUR COMPLAIN HAS BEEN NOTED"<<endl;
                cout<<"THANK YOU FOR  YOUR COMPLAIN  IT'S HELPS US TO BE BETTER"<<endl;
                     cout<<"KEEP VISITING :-) "<<endl;
                     
                
                 }
                 else{
                     cout<<"PLEASE SELECT THE VALID OPTION"<<endl;
                 }
             }
             else if(option==4){
                 cout<<"PLEASE ENTER THE TIME IN MINUTES:- "<<endl;
                 cin>>time;
                 cout<<"YOUR ORDER IS ON HOLD FOR"<<time<<"MINUTES"<<endl;
             }
             else if(option==5){
                 cout<<"HOW CAN WE HELP YOU"<<endl;
                 cout<<"PLEASE ENTER YOUR PROBLEM :- "<<endl;
                 cin>>problem;
                 cout<<"WE WILL WORK ON IT "<<endl;
                 cout<<"THANK YOU :-) "<<endl;
                 cout<<"KEEP VISITING :-) "<<endl;
             }
             else {
                 cout<<"PLEASE  SELECT VALID OPTION"<<endl;
             }
        }
        else {
            cout<<"ORDER PLACE SUCESSFULLY :-) "<<endl;
            cout<<"PRICE :- "<<price[4]<<endl;
            cout<<"YOUR BILLING AMOUNT :- "<<quantity*price[4] <<endl;
            cout<<"THANKYOU FOR VISITING ! "<<endl;  
            cout<<" PLEASE ENTER YOUR FEEDBACK :- "<<endl;
            cin>>feedback;
            cout<<" THAKNYOU FOR YOUR RESPONSE :-)"<<endl;
            cout<<"VISIT AGAIN :-)"<<endl;
        }
        break;
        
        default:
        cout<<"INVALID ORDER ! "<<endl;
    }
    
    return 0;
}
