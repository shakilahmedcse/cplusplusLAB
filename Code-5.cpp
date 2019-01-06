#include<bits/stdc++.h>

using namespace std;

int cnt1=0;

class Current_Date

{

public:

    int cnt=0,current_month,current_date,current_year;

    string str,s1,s2,s3,s4,s5;

    void getData()

    {

        time_t my_time = time(NULL);

        str=ctime(&my_time);

        istringstream ss(str);

        do

        {

            string word;

            ss >> word;

            //cout << word << endl;

            cnt++;

            // cout<<cnt<<endl;

            if(cnt==2)

            {



                if((word.compare("Jan")) == 0)

                {

                    current_month=1;

                }

                if((word.compare("Feb")) == 0)

                {

                    current_month=2;

                }

                if((word.compare("Mar")) == 0)

                {

                    current_month=3;

                }

                if((word.compare("Apr")) == 0)

                {

                    current_month=4;

                }



                if((word.compare("May")) == 0)

                {

                    current_month=5;

                }

                if((word.compare("Jun")) == 0)

                {

                    current_month=6;

                }

                if((word.compare("Jul")) == 0)

                {

                    current_month=7;

                }

                if((word.compare("Aug")) == 0)

                {

                    current_month=8;

                }



                if((word.compare("Sep")) == 0)

                {

                    current_month=9;

                }

                if((word.compare("Oct")) == 0)

                {

                    current_month=10;

                }

                if((word.compare("Nov")) == 0)

                {

                    current_month=11;

                }

                if((word.compare("Dec")) == 0)

                {

                    current_month=12;

                    //cout<<"month="<<month<<endl;

                }



            }

            if(cnt==3)

            {

                stringstream geek(word);

                int x = 0;

                geek >> x;

                current_date=x;

                //cout<<"Day="<<day<<endl;

            }

            if(cnt==5)

            {

                stringstream geek(word);

                int y = 0;

                geek >> y;

                current_year=y;

                //cout<<"Year="<<year<<endl;

            }

        }

        while (ss);

    }

    void Display()

    {

        //cout<<current_date<<" "<<current_month<<" "<<current_year<<endl;

    }

};



class Calculate_Age :public Current_Date

{

public:

    int birth_date,birth_month,birth_year,calculated_date,calculated_month,calculated_year;

    void getdata2(Current_Date c)

    {

        scanf("%d%d%d",&birth_date,&birth_month,&birth_year);

        int month[] = { 31, 28, 31, 30, 31, 30, 31,

                        31, 30, 31, 30, 31

                      };

        //cout<<c.current_date<<" "<<c.current_month<<" "<<c.current_year<<endl;

        if (birth_date > c.current_date)

        {

            c.current_date = c.current_date + month[birth_month - 1];

            c.current_month = c.current_month - 1;

        }

        if (birth_month > c.current_month)

        {

            c.current_year = c.current_year - 1;

            c.current_month = c.current_month + 12;

        }

        calculated_date = c.current_date - birth_date;

        calculated_month = c.current_month - birth_month;

        calculated_year = c.current_year - birth_year;

    }



    void display2()

    {   cout<<"Player Current Age: ";

        cout<<"Day="<<calculated_date<<" "<<"Month="<<calculated_month<<" "<<"Year="<<calculated_year<<endl;

        if(cnt1<=3)

        {

            if(calculated_year>25 && calculated_year<=30 )

            {

                cout<<"The player is selected"<<endl;

                cnt1++;

                //cout<<cnt1<<endl;

            }

            else

            {

                cout<<"The player is not selected"<<endl;



            }

        }

        else{

            cout<<"Four player is already selected"<<endl;

        }



    }



};

int main()

{

    Current_Date c;

    c.getData();

    c.Display();

    while(1){

    Calculate_Age ag;

    ag.getdata2(c);

    ag.display2();

    }

}
