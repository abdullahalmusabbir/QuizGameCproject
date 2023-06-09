#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

struct Me
{
    string name,username,title,school,nationality;
    int age,password,id,score;
    Me(): name(""),username(""),title(""),school(""),nationality(""),age(0),password(0),id(0){}

    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Username: "<<username<<endl;
        cout<<"Password: "<<password<<endl;
        cout<<"Title: "<<title<<endl;
        cout<<"School: "<<school<<endl;
        cout<<"Nationality: "<<nationality<<endl;
    }

    void update_name(string new_name)
    {
        name=new_name;
    }

    void update_age(int new_age)
    {
        age=new_age;
    }

    void update_username(string new_username)
    {
        username=new_username;
    }

    void update_password(int new_password)
    {
        password=new_password;
    }

    void update_title(string new_title)
    {
        title=new_title;
    }

    void update_school(string new_school)
    {
        school=new_school;
    }

    void update_nationality(string new_nationality)
    {
        nationality=new_nationality;
    }

    void update_score(int new_score)
    {
        score=new_score;
    }

};

void welcome()
{
    cout<<"\t\t\t\t\tQUIZWIZ\t\t\t\t\t"<<endl<<endl;
}

int find_player(struct Me acc[],int sz,int key,string username)
{
    for(int i=0;i<sz;i++)
    {
        if(username==acc[i].name){
            if(key==acc[i].password)
               return i;
        }
    }
    return -1;
}

int quiz()
{
    int q1,q2,q3,q4,q5,t=0;
    cout<<"1.What is the official name of Bangladesh?\n1.People's Republic of Bangladesh\n2.Bangladesh"<<endl;
    cin>>q1;
    system("CLS");
    cout<<"2.What is the capital of Bangladesh\n1.Dhaka\n2.Chittagong?"<<endl;
    cin>>q2;
    system("CLS");
    cout<<"3.How is the Government Procedure of Bangladesh?\n1.Parliamentary Government.\n2.PM Government."<<endl;
    cin>>q3;
    system("CLS");
    cout<<"4.What are the official language of Bangladesh?\n1.Bangla.\n2.Hindi"<<endl;
    cin>>q4;
    system("CLS");
    cout<<"5.How many districts are there in Bangladesh?\n1.64\n2.62"<<endl;
    cin>>q5;
    system("CLS");
    if(q1==1)
    {
        t=t+10;
    }
    if(q2==1)
    {
        t=t+10;
    }
    if(q3==1)
    {
        t=t+10;
    }
    if(q4==1)
    {
        t=t+10;
    }
    if(q5==1)
    {
        t=t+10;
    }
    return t;
}

int main()
{
    struct Me b[100];
    string name,username;
    int password,option,id,idx,lopsn,k=4,popsn,pq,iopsn,bak,bak1,bak2,bak3,bak4,bak5,bak7;

    b[0].name="Rashik",b[0].age=21,b[0].username="Rashik",b[0].id=12,b[0].password=1234,b[0].title="khan",b[0].school="FRII",b[0].nationality="Bangladeshi",b[0].score=50;
    b[1].name="Nabil",b[1].age=21,b[1].username="Nabil",b[1].id=13,b[1].password=1235,b[1].title="khan",b[1].school="FRII",b[1].nationality="Bangladeshi",b[1].score=20;
    b[2].name="Kulsum",b[2].age=21,b[2].username="Kulsum",b[2].id=14,b[2].password=1236,b[2].title="khan",b[2].school="FRII",b[2].nationality="Bangladeshi",b[2].score=30;
    b[3].name="Rukaiya",b[3].age=21,b[3].username="Rukaiya",b[3].id=15,b[3].password=1237,b[3].title="khan",b[3].school="FRII",b[3].nationality="Bangladeshi",b[3].score=40;

    welcome();

    while(true)
    {
        cout<<"1.Sign up."<<endl;
        cout<<"2.log in."<<endl;
        cout<<"3.Exit."<<endl;
        cin>>lopsn;
        system("CLS");

        if(lopsn==1)
        {
          for(int j=k;j<100;j++)
          {
              cout<<"Name: "<<endl;
              cin>>b[j].name;
              cout<<"Age: "<<endl;
              cin>>b[j].age;
              cout<<"Username: "<<endl;
              cin>>b[j].username;
              cout<<"Password: "<<endl;
              cin>>b[j].password;
              cout<<"Title: "<<endl;
              cin>>b[j].title;
              cout<<"School: "<<endl;
              cin>>b[j].school;
              cout<<"Nationaility: "<<endl;
              cin>>b[j].nationality;
              k++;
              system("CLS");
              break;
          }
        }
        else if (lopsn==2)
        {
            cout<<"Username: "<<endl;
            cin>>username;
            cout<<"Password: "<<endl;
            cin>>password;
            system("CLS");
            idx=find_player(b,100,password,username);
            if(idx==-1)
            {
                cout<<"Accout not found"<<endl;
                system("CLS");
            }
            while(true)
            {
                cout<<"Please select one option from below menu."<<endl;
                cout<<"1.Play Quiz\n2.View Leaderboard\n3.Profile\n4.log Out"<<endl;
                cin>>option;
                system("CLS");

                if(option==4)
                {
                    break;
                }
                else if(option==1)
                {
                    while(true)
                    {
                        cout<<"1.Let's Go\n2.Rules and regulations\n3.Achivement\n4.Back"<<endl;
                        cin>>popsn;
                        system("CLS");
                        if(popsn==1)
                        {
                            while(true){
                            pq=quiz();
                            cout<<"Score= "<<pq<<endl;
                            b[idx].update_score(pq);
                            cout<<"1.Back"<<endl;
                            cin>>bak7;
                            system("CLS");
                            if(bak7==1)
                            {
                                break;
                            }
                          }
                        }
                        else if(popsn==2)
                        {
                            while(true)
                            {
                               cout<<"\t\t\t\t\tRules and Regulations\t\t\t\t\t"<<endl<<endl;
                               cout<<"1.Total score for each topic is 10"<<endl;
                               cout<<"2.only one option is correct out of the the given two."<<endl;
                               cout<<"3.Just enter the option which you feel is correct and sincerely follow the given instruction."<<endl;
                               cout<<"4.There is no time limit."<<endl<<endl;
                               cout<<"Best Of Luck!"<<endl<<endl;
                               cout<<"1.Back"<<endl;
                               cin>>bak;
                               system("CLS");

                               if(bak==1)
                               {
                                   break;
                               }


                            }


                        }
                        else if(popsn==3)
                        {
                            while(true)
                            {
                                cout<<"\t\t\t\t\tAchivement\t\t\t\t\t"<<endl<<endl;
                               cout<<"1.Score 50 points overall."<<endl;
                               cout<<"2.Score 100 points overall."<<endl;
                               cout<<"3.Score 200 points overall."<<endl;
                               cout<<"4.Achieve 10 perfect score of 50"<<endl;
                               cout<<"5.Achieve 20 perfect score of 100"<<endl;
                               cout<<"6.Achieve 30 perfect score of 200"<<endl;
                               cout<<"7.Consecutive 10 answer correct."<<endl;
                               cout<<"8.Consecutive 20 answer correct."<<endl;
                               cout<<"9.Consecutive 50 answer correct."<<endl;
                               cout<<"1.Back"<<endl;
                               cin>>bak1;
                               system("CLS");
                               if(bak1==1)
                               {
                                   break;
                               }

                            }

                        }
                        else if(popsn==4)
                        {
                            break;
                        }
                    }
                }
                else if(option==2)
                    {
                        while(true)
                        {
                            cout<<"\t\t\t\t\tLEADERBORD\t\t\t\t\t"<<endl<<endl;

                           cout<<"RANK\tNAME\tAGE\tSCHOOL\tNATIONALITY\tSCORE"<<endl;
                           cout<<"1\t Rashik\t 21\t FRII Bangladeshi\t "<<b[1].score<<endl;
                           cout<<"2\t Nabil0\t 21\t FRII Bangladeshi\t "<<b[1].score<<endl;
                           cout<<"3\t Kulsum\t 21\t FRII Bangladeshi\t "<<b[2].score<<endl;
                           cout<<"4\t Rukaya\t 21\t FRII Bangladeshi\t "<<b[3].score<<endl;
                           cout<<"1.Back"<<endl;
                           cin>>bak2;
                           system("CLS");

                               if(bak2==1)
                               {
                                   break;
                               }

                        }

                    }
                else if(option==3)
                    {
                        while(true)
                        {


                        cout<<"\t\t\t\t\tPlayer Profile\t\t\t\t\t"<<endl<<endl;
                        cout<<"1.View playing record."<<endl;
                        cout<<"2.Player Information."<<endl;
                        cout<<"3.Deactivate Account."<<endl;
                        cout<<"4.Back."<<endl;
                        cin>>iopsn;
                        system("CLS");
                        if(iopsn==1)
                        {
                            while(true)
                            {
                                cout<<"\t\t\t\t\tView Playing Record\t\t\t\t\t"<<endl<<endl;
                                cout<<"Score= "<<b[idx].score<<endl;
                                cout<<"1.Back"<<endl;
                                cin>>bak3;
                                system("CLS");
                               if(bak3==1)
                               {
                                   break;
                               }

                            }

                        }
                        else if(iopsn==2)
                        {
                            while(true){
                                b[idx].display();
                                cout<<"Update Profile?"<<endl;
                                cout<<"1.Yes"<<endl;
                                cout<<"2.Back"<<endl;
                                cin>>bak4;
                                system("CLS");
                               if(bak4==2)
                               {
                                   break;
                               }
                               else if(bak4==1)
                               {
                                   while(true)
                                   {
                                       cout<<"Which option you want to change?"<<endl;
                                       cout<<"1.Name\n2.Age\n3.Username\n4.Password\n5.Title\n6.School\n7.Nationality\n8.Back"<<endl;
                                       cin>>bak5;
                                       system("CLS");
                                       if(bak5==1)
                                       {
                                           string name;
                                           cout<<"Name: "<<endl;
                                           cin>>name;
                                           b[idx].update_name(name);
                                           system("CLS");
                                       }
                                       else if(bak5==2)
                                       {
                                           int age;
                                           cout<<"Age: "<<endl;
                                           cin>>age;
                                           b[idx].update_age(age);
                                           system("CLS");
                                       }
                                       else if(bak5==3)
                                       {
                                           string username;
                                           cout<<"Username: "<<endl;
                                           cin>>username;
                                           b[idx].update_username(username);
                                           system("CLS");
                                       }
                                       else if(bak5==4)
                                       {
                                           int password;
                                           cout<<"Passwoprd: "<<endl;
                                           cin>>password;
                                           b[idx].update_password(password);
                                           system("CLS");
                                       }
                                       else if(bak5==5)
                                       {
                                           string title;
                                           cout<<"Title: "<<endl;
                                           cin>>title;
                                           b[idx].update_title(title);
                                           system("CLS");
                                       }
                                       else if(bak5==6)
                                       {
                                           string school;
                                           cout<<"School: "<<endl;
                                           cin>>school;
                                           b[idx].update_school(school);
                                           system("CLS");
                                       }
                                       else if(bak5==7)
                                       {
                                           string nationality;
                                           cout<<"Nationality: "<<endl;
                                           cin>>nationality;
                                           b[idx].update_nationality(nationality);
                                           system("CLS");
                                       }
                                       else if(bak5==8)
                                       {
                                           break;
                                       }
                                   }
                               }
                            }

                        }
                        else if(iopsn==3)
                        {
                            for(int i=idx;i<100;i++)
                                {
                                    b[i]=b[i+1];
                                }
                            cout<<"Account Deactivated"<<endl;
                            continue;
                            system("CLS");
                        }
                        else if(iopsn==4)
                        {
                            break;
                        }
                    }
                  }
                }
            }
            else if(lopsn==3)
            {
                break;
            }
            else
            {
                continue;
            }
        }
    }

