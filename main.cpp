// FCI – Programming 1 – 2018 - Assignment 2
// Program Name: Ceaser_Cipher.cpp
// Last Modification Date: 25/02/2018
// Author1 and ID and Group: 20170021 G1
// Author2 and ID and Group: 20170003 G1
// Author3 and ID and Group: 20170004 G1
// Teaching Assistant: Eldesoky




#include <iostream>
using namespace std;
int main()
{
    string result="",message;
    int s,choice;
    cout<<"please enter a message: ";
    getline(cin,message);
    cout<< "Ahlan ya user ua habibi"<<endl<< "What do you like to do today?"<<endl;
    cout<<"Choose 1 to encrypt or 2 to Descrypt";
    cin>>choice;
    if(choice==1){
        cout<<endl;
        cout<< "-------------------------"<<endl;
        cout<<"please enter shifts number: ";
        cin>>s;
        cout<<endl<<"--------------------------"<<endl;
        for (int i=0;i<message.size();i++){
            if((char)message[i]>='a' && (char)message[i]<='z'){
                result+='a'+(((char)message[i]-'a'+s)%26);}
            else if((char)message[i]>='A' && (char)message[i]<='Z'){
                result+='A'+(((char)message[i]-'A'+s)%26);}}
        cout<<"Your ceaser cipher is : "<<result;}
    if(choice==2){
        cout<<endl;
        cout<< "-------------------------"<<endl;
        cout<<"please enter shifts number: ";
        cin>>s;
        cout<<endl;
        cout<<"--------------------------"<<endl;
        for (int i=0;i<message.size();i++){
            if((char)message[i]>='a' && (char)message[i]<='z'){
                result+=((((char)message[i] - s - 'a' + 26) % 26) + 'a');}
            else if((char)message[i]>='A' && (char)message[i]<='Z'){
                result+=((((char)message[i] - s - 'A' + 26) % 26) + 'A');}}
         cout<<"Your ceaser cipher is : "<<result;}
   cout<<endl;
    return 0;
    }
