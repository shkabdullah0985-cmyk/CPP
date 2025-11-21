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
    
        int attempts = 0;
    bool valid = false;

    while(attempts < 5){
        cout<<"DO YOU WANT TO CANCEL THE ORDER (YES/NO) :- "<<endl;
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
    }
        
    switch(order){
        case 1:
        if( cancelorder=="YES" || cancelorder=="Y"){
                cout<<"YOUR ORDER IS CANCEL"<<endl;
        }
        else if (cancelorder=="NO"|| cancelorder=="N"||cancelorder=="n"||cancelorder=="no"){
            cout<<"ORDER PLACE SUCESSFULLY :-) "<<endl;
            cout<<"PRICE :- "<<price[1]<<endl;
            cout<<"YOUR BILLING AMOUNT :- "<<quantity*price[1] <<endl;
            cout<<"THANKYOU FOR VISITING ! "<<endl;  
        }
        else {
            cout<<"YOU HAVE EXCEEDED THE 5 ATTEMPTS. TRY AGAIN LATER!"<<endl;
        }
        
        break;
        
        case 2:
        if( cancelorder=="YES" || cancelorder=="Y"){
                cout<<"YOUR ORDER IS CANCEL"<<endl;
        }
        else if (cancelorder=="NO"|| cancelorder=="N"||cancelorder=="n"||cancelorder=="no"){
            cout<<"ORDER PLACE SUCESSFULLY :-) "<<endl;
            cout<<"PRICE :- "<<price[2]<<endl;
            cout<<"YOUR BILLING AMOUNT :- "<<quantity*price[2] <<endl;
            cout<<"THANKYOU FOR VISITING ! "<<endl;  
        }
        else {
            cout<<"YOU HAVE EXCEEDED THE 5 ATTEMPTS. TRY AGAIN LATER!"<<endl;
        }
        break;
        
        case 3:
        if( cancelorder=="YES" || cancelorder=="Y"){
                cout<<"YOUR ORDER IS CANCEL"<<endl;
        }
        else if (cancelorder=="NO"|| cancelorder=="N"||cancelorder=="n"||cancelorder=="no"){
            cout<<"ORDER PLACE SUCESSFULLY :-) "<<endl;
            cout<<"PRICE :- "<<price[3]<<endl;
            cout<<"YOUR BILLING AMOUNT :- "<<quantity*price[3] <<endl;
            cout<<"THANKYOU FOR VISITING ! "<<endl;  
        }
        else {
            cout<<"YOU HAVE EXCEEDED THE 5 ATTEMPTS. TRY AGAIN LATER!"<<endl;
        }
        
        break;
        
        case 4:
        if( cancelorder=="YES" || cancelorder=="Y"){
                cout<<"YOUR ORDER IS CANCEL"<<endl;
        }
        else if (cancelorder=="NO"|| cancelorder=="N"||cancelorder=="n"||cancelorder=="no"){
            cout<<"ORDER PLACE SUCESSFULLY :-) "<<endl;
            cout<<"PRICE :- "<<price[4]<<endl;
            cout<<"YOUR BILLING AMOUNT :- "<<quantity*price[4] <<endl;
            cout<<"THANKYOU FOR VISITING ! "<<endl;  
        }
        else {
            cout<<"YOU HAVE EXCEEDED THE 5 ATTEMPTS. TRY AGAIN LATER!"<<endl;
        }
        break;
        
        default:
        cout<<"INVALID ORDER ! "<<endl;
    }
    return 0;
}
