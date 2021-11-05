#include<iostream>
#include<mutex>
using namespace std;

struct semaphore

{

    int mutex;

    int rcount;

    int rwait;

    bool wrt;

};

void addR(struct semaphore *s)

{

    if(s->mutex == 0 && s->rcount == 0)

    {

        cout<<"\nSorry, File open in Write mode.\nNew Reader added to queue.\n";

        s->rwait++;
     
    }

    else

    {

        cout<<"\nReader Process added.\n";
    
        s->rcount++;

        s->mutex--;

    }

return ;

}

void addW(struct semaphore *s)

{

    if(s->mutex==1)

    {

        s->mutex--;
 
        s->wrt=1;

        cout<<"\nWriter Process added.\n";

    }

    else if(s->wrt) 
        cout<<"\nSorry, Writer already operational.\n";

    else
        cout<<"\nSorry, File open in Read mode.\n";

return ;

}

void remR(struct semaphore *s)

{

    if(s->rcount == 0) cout<<"\nNo readers to remove.\n";

    else

    {

        cout<<"\nReader Removed.\n";

        s->rcount--;
    
        s->mutex++;

    }

return ;

}

void remW(struct semaphore *s)

{

    if(s->wrt==0) cout<<"\nNo Writer to Remove\n";

   else

   {

        cout<<"\nWriter Removed\n";

        s->mutex++;

        s->wrt=0;

  if(s->rwait!=0)

{

    s->mutex-=s->rwait;

    s->rcount=s->rwait;

    s->rwait=0;

    cout<<"waiting Readers Added:"<<s->rcount<<endl;

}

}

}

int main()

{

struct semaphore S1={1,0,0};

while(1)

{


cout<<"Options :-\n1.Add Reader.\n2.Add Writer.\n3.Remove Reader.\n4.Remove Writer.\n5.Exit.\n\n\tChoice : ";

int ch;

cin>>ch;

switch(ch)

{

case 1: addR(&S1); break;

case 2: addW(&S1); break;

case 3: remR(&S1); break;

case 4: remW(&S1); break;

case 5: cout<<"\n\tGoodBye!";break;

default: cout<<"\nInvalid Entry!";

}
}
return 0;
}
