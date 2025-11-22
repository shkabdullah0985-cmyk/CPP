#include<iostream>

#include<string>

using namespace std;

int main(){
    string menu[]={"TEA","COFFEE","MILK","COLD DRINK"};
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
    };
        
    switch(order){
        case 1:

    if( cancelorder=="YES" || cancelorder=="Y"||cancelorder=="yes"||cancelorder=="y"){
             
                cout<<"IF YOU ARE CANCELING YOUR ORDER IT MAY CAN CHARGE YOU THE PENALTY AMOUNT"<<endl;
                cout<<"ENTER YOUR REASON :- "<<endl;
                cin>>reason;
                if(reason=="replace"||reason=="REPLACE") {
                cout<<"YOUR ORDER IS CANCEL"<<endl;    
                }
                else{
                cout<<"YOUR ORDER IS CANCEL"<<endl;
                cout<<"PENALTY AMOUNT IS 100 RS"<<endl;
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
             
                cout<<"IF YOU ARE CANCELING YOUR ORDER IT MAY CAN CHARGE YOU THE PENALTY AMOUNT"<<endl;
                cout<<"ENTER YOUR REASON :- "<<endl;
                cin>>reason;
                if(reason=="replace"||reason=="REPLACE"){
                cout<<"YOUR ORDER IS CANCEL"<<endl;    
                }
                else{
                cout<<"YOUR ORDER IS CANCEL"<<endl;
                cout<<"PENALTY AMOUNT IS 100 RS"<<endl;
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
        
        case 3:
        
        if( cancelorder=="YES" || cancelorder=="Y"||cancelorder=="yes"||cancelorder=="y"){
                cout<<"IF YOU ARE CANCELING YOUR ORDER IT MAY CAN CHARGE YOU THE PENALTY AMOUNT"<<endl;
                cout<<"ENTER YOUR REASON :- "<<endl;
                cin>>reason;
                if(reason=="replace"||reason=="REPLACE"){
                cout<<"YOUR ORDER IS CANCEL"<<endl;    
                }
                else{
                cout<<"YOUR ORDER IS CANCEL"<<endl;
                cout<<"PENALTY AMOUNT IS 100 RS"<<endl;
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
        
        case 4:
        if( cancelorder=="YES" || cancelorder=="Y"||cancelorder=="yes"||cancelorder=="y"){
                cout<<"IF YOU ARE CANCELING YOUR ORDER IT MAY CAN CHARGE YOU THE PENALTY AMOUNT"<<endl;
                cout<<"ENTER YOUR REASON :- "<<endl;
                cin>>reason;
                if(reason=="replace"||reason=="REPLACE"){
                cout<<"YOUR ORDER IS CANCEL"<<endl; 
                
                }
                else{
                cout<<"YOUR ORDER IS CANCEL"<<endl;
                cout<<"PENALTY AMOUNT IS 100 RS"<<endl;
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
