#include<iostream>
#include<string.h>
using namespace std;
class job{
    int id;
    char name;
    int t;
    int s;
    public:
    void setJob(){
        cin>>id>>name>>t>>s;
    }
    int getJobId(){
        return id;
    }
    int getJobTime(){
        return t;
    }
    int getJobSpace(){
        return s;
    }
    void printJob(){
        cout<<id<<"\n";
    }
};

class job_sch{
    protected:
    int n;
    job job_ob[10];
    public:
    void setJob_sch(int n){
        for(int i=0;i<n;i++){
            job_ob[i].setJob();
        }
    }
    void print(int n){
        for(int i=0;i<n;i++){
            job_ob[i].printJob();
        }
    }
    virtual void schedule(int n);
};

void job_sch::schedule(int n){
    int i,j;
    job temp;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(job_ob[i].getJobId()>job_ob[j].getJobId()){
                temp=job_ob[i];
                job_ob[i]=job_ob[j];
                job_ob[j]=temp;
                
            }
        }
    }
}

class TBJS:public job_sch{
    public:
    void schedule(int n);
};

void TBJS::schedule(int n){
    int i,j;
    job temp;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(job_ob[i].getJobTime()>job_ob[j].getJobTime()){
                temp=job_ob[i];
                job_ob[i]=job_ob[j];
                job_ob[j]=temp;
                
            }
        }
    }
}

class SBJS:public job_sch{
    public:
    void schedule(int n);
};

void SBJS::schedule(int n){
    int i,j;
    job temp;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(job_ob[i].getJobSpace()>job_ob[j].getJobSpace()){
                temp=job_ob[i];
                job_ob[i]=job_ob[j];
                job_ob[j]=temp;
                
            }
        }
    }
}
int main(){
    int n;
    cin>>n;
    char choice [10];
    cin>>choice;
    job_sch *jsp;
    if(strcmp(choice,"Time")==0){
        jsp=new TBJS();
    }
    else if(strcmp(choice,"Space")==0){
        jsp=new SBJS();
    }
    jsp->setJob_sch(n);
    jsp->schedule(n);
    jsp->print(n);
}
    


