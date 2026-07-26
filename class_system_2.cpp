#include <iostream>
using namespace std;
int main(){
    int i,n=0,j,op;
    string name[100];
    int id[100];
    string gender[100];
    string major[100];
    int attendence[100];
    string grade[100];
    do {
        cout<<"1. Input Student Data\n";
        cout<<"2. Output Student Data\n";
        cout<<"3. Search Student Data\n";
        cout<<"4. Update Student Data\n";
        cout<<"5. Student Grade Data\n";
        cout<<"6. Delete Student Data by ID\n";
        cout<<"Exit...";
        cout<<"Please Choose any Options:";cin>>op;
        switch (op){
            case 1:{
                cout<<"==Input Student Data==\n";
                cout<<"Enter Amount of Student:";cin>>n;
                for ( int i=0; i<n; i++){
                    cout<<"==Student("<<i+1<<")==\n";
                    cout<<"Enter Student Name:";cin>>name[i];
                    cout<<"Enter Student ID:";cin>>id[i];
                    cout<<"Enter Student Gender:";cin>>gender[i];
                    cout<<"Enter Student Major:";cin>>major[i];
                    cout<<"Enter Student Attendence:";cin>>attendence[i];
                    cout<<"Enter Student Grade :";cin>>grade[i];
                }break;
            }
            case 2:{
                cout<<"\n";
                cout<<"==Output Student Data==\n";
                for ( int i=0; i<n; i++){
                    cout<<"==Student("<<i+1<<")==\n";
                    cout<<"Student Name:"<<name[i]<<endl;
                    cout<<"Student ID:"<<id[i]<<endl;
                    cout<<"Student Gender:"<<gender[i]<<endl;
                    cout<<"Student Major:"<<major[i]<<endl;
                    cout<<"Student Attendence Record:"<<attendence[i]<<endl;
                    cout<<"Student Grade:"<<grade[i]<<endl;
                }break;
            }
            case 3:{
                cout<<"\n";
                cout<<"==Search Student Data==\n";
                int studentid;
                cout<<"Enter Student ID to Search for Their Data:";cin>>studentid;
                for (int i=0; i<n; i++){
                    if (studentid == id[i]){
                cout<<"Student Data has found at ("<<i+1<<"):";
                cout<<"Student Name:"<<name[i]<<endl;
                cout<<"Student ID:"<<id[i]<<endl;
                cout<<"Student Gender:"<<gender[i]<<endl;
                cout<<"Student Major:"<<major[i]<<endl;
                cout<<"Student Attendence:"<<attendence[i]<<endl;
                cout<<"Student Grade:"<<grade[i]<<endl;
                }
            }break;
            }
            case 4:{
                cout<<"\n";
                cout<<"==Update Student==\n";
                bool check = false;
                int studentid;
                cout<<"Enter Student ID to Update for Their Data:";cin>>studentid;
                for ( int i=0; i<n; i++){
                    if ( studentid== id[i]){
                        cout<<"==Student("<<i+1<<")==";
                        cout<<"Student New Name:";cin>>name[i];
                        cout<<"Student New ID:";cin>>id[i];
                        cout<<"Student New Gender:";cin>>gender[i];
                        cout<<"Student New Major:";cin>>major[i];
                        cout<<"Student New Attendence:";cin>>attendence[i];
                        cout<<"Student New Grade:";cin>>grade[i];
                    }
                    if (!check){
                        cout<<"\n";
                        cout<<"Update Student has not successed\n";
                    }
                }break;
            }
            case 5:{
                cout<<"\n";
                cout<<"==Student Grade Data==\n";
                for (int i=0; i<n; i++){

                }break; 
            }
            case 6:{
                cout<<"==Delete Student Data==\n";
                bool check = false;
                int studentid;
                cout<<"Enter Student ID to Delete Data:";cin>>studentid;
                for( int i=0; i<n; i++){
                    if ( studentid==id[i]){
                        for (j=0;j<n-1;j++){
                        cout<<"Student Name:"<<name[j+1]<<endl;;
                        cout<<"Student ID:"<<id[j+1]<<endl;
                        cout<<"Student Gender:"<<gender[j+1]<<endl;
                        cout<<"Student Major:"<<major[j+1]<<endl;
                        cout<<"Student Attendence:"<<attendence[j+1]<<endl;
                        cout<<"Student Grade:"<<grade[j+1]<<endl;
                        check = true;
                        cout<<"Delete Student Data Successed!!!\n";
                        }
                    }
                    if (!check){
                        cout<<"Delete Student Data has not Successed!!!\n";
                    }
                }break;  
            }
        }
    } while ( op != 7);
}
