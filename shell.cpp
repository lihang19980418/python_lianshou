#include<stdio.h>
#include<string>
using namespace std;
class shell{
    private:
    string command;
    char cmd[20];
    char file1[30];
    char file2[30];
    public:
    void display();
};
void shell::display()
{
    cout<<"/******************welcome the system of file*******************/"<<endl;
    cout<<"/root/#";
    char r;int i=0;
    for(int i=0;(i<20)&&((getchar(t))!=32;i++)
    {
    cmd[i]=t;
    cmd[i+1]='\0';
    }
    /* 
    mkdir all
    cd aaa;
    rm aaa;
    touch aaa;
    open aaa bbbb;
    cp aaa,bbb;
    ls aaa;*/
    if ((strcmp(cmd, "mkdir") == 0)||(strcmp(cmd, "cd") == 0)||(strcmp(cmd, "rm") == 0)||(strcmp(cmd, "touch") == 0)||(strcmp(cmd, "ls") == 0))
    {
       for (int i=0;(i<30)&&(getchar(t)!='\n');i++)
       {
           file1[i]=t;
           file1[i+1]='\0';
       }
       if((strcmp(cmd,"mkdir")==0))
       {
           mkdir(file1);
       }
       else if((strcmp(cmd,"cd")==0))
       {
           cd(file1);
       }
              else if((strcmp(cmd,"rm")==0))
       {
           rm(file1);
       }
              else if((strcmp(cmd,"touch")==0))
       {
           touch(file1);
       }
              else if((strcmp(cmd,"ls")==0))
       {
           ls();
       }
       else cout<<"error"<<endl;

    }
    else if ((strcmp(cmd, "cp") == 0)||(strcmp(cmd, "open") == 0))
    {
         for (int i=0;(i<30)&&(getchar(t)!='\n');i++)
       {
           file1[i]=t;
           file1[i+1]='\0';
       }
              for (int i=0;(i<30)&&(getchar(t)!='\n');i++)
       {
           file2[i]=t;
           file2[i+1]='\0';
       }  
       if((strcmy(cmd,"cp")==0))
       {
           cp(file1,file2);
       }    
       else if((strcmy(cmd,"open")==0))
       {
           if(file1=='1')
           {
               open1(file1);
           }
           else if(file1='2')
           {
               open2(file1);
           }
       }    
    }
   
    else 
    {
        cout<<"please enter the right name"<<endl;
    }
}