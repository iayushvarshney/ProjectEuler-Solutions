#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;
typedef signed long long int lli;

struct abc
{
    int result[5000];
    int end;    
};

abc sum(int num1[],int num2[],int end1,int end2)
{
    abc answer;
    answer.end=-1;
    int carry=0;
    if(end1<end2)
    {
        while(end1>=0)
        {
            int temp=num1[end1]+num2[end2]+carry;
            answer.result[++(answer.end)]=temp%10;
            --end1;
            --end2;
            carry=temp/10;
        }
        while(end2>=0)
        {
            int temp=num2[end2]+carry;
            answer.result[++(answer.end)]=temp%10;
            --end2;
            carry=temp/10;
        }
        if(carry!=0)
        {
            answer.result[++(answer.end)]=carry;
        }
    }
    else
    {
        while(end2>=0)
        {
            int temp=num1[end1]+num2[end2]+carry;
            answer.result[++(answer.end)]=temp%10;
            --end1;
            --end2;
            carry=temp/10;
        }
        while(end1>=0)
        {
            int temp=num1[end1]+carry;
            answer.result[++(answer.end)]=temp%10;
            --end1;
            carry=temp/10;
        }
        if(carry!=0)
        {
            answer.result[++(answer.end)]=carry;
        }
    }
    abc tempanswer;
    tempanswer.end=-1;
    int ends=answer.end;
    for(int a=ends;a>=0;--a)
    {
        tempanswer.result[++(tempanswer.end)]=answer.result[a];
    }
    return tempanswer;
}

abc multiply(int number[],int end1,int value)
{
    int carry=0;
    abc answer;
    answer.end=-1;
    while(end1>=0)
    {
        int temp=number[end1]*value+carry;
        answer.result[++(answer.end)]=temp%10;
        --end1;
        carry=temp/10;
    }
    if(carry!=0)
    {
        answer.result[++(answer.end)]=carry;
    }
    abc tempanswer;
    tempanswer.end=-1;
    int ends=answer.end;
    for(int a=ends;a>=0;--a)
    {
        tempanswer.result[++(tempanswer.end)]=answer.result[a];
    }
    return tempanswer;
    return tempanswer;
}
abc fullsum(abc numbers[],int count)
{
    abc answer;
    answer.end=numbers[0].end;
    int tempends=answer.end;
    for(int a=0;a<=tempends;++a)
    {
        answer.result[a]=numbers[0].result[a];
    }
    for(int a=1;a<=count;++a)
    {
        answer=sum(answer.result,numbers[a].result,answer.end,numbers[a].end);
    }
    return answer;
}
abc fullmultiply(abc number,int value)
{
    if(value==1)
    {
        return number;
    }
    
    abc answer;
    abc temparray[4];
    int count=-1;
    while(value)
    {
        int tempvalue=value%10;
        value=value/10;
    
        temparray[++count]=multiply(number.result,number.end,tempvalue);
    
        int tempcount=count;
        while(tempcount)
        {
            temparray[count].result[++(temparray[count].end)]=0;
            --tempcount;
        }
    }
    answer=fullsum(temparray,count);
    return answer;
    
}
int main()
{
    int testcase=0;
    cin>>testcase;
    while(testcase--)
    {
    int num=0;
    cin>>num;
    if(num==1||num==0)
    {
        cout<<1<<endl;
        continue;
    }
    abc tempar;
    tempar.end=0;
    tempar.result[0]=1;
    for(int a=num;a>=2;--a)
    {
        int tempval=a;
        while((tempval%10)==0)
        {
            tempval=tempval/10;
        }
    //    cout<<a<<" : ";
        while((tempar.result[tempar.end])==0)
        {
            --(tempar.end);
        }
        tempar=fullmultiply(tempar,tempval);
    
        
    }
    int tempends=tempar.end;
    int sum=0;
        for(int c=0;c<=tempends;c++)
        {
            sum+=(tempar.result[c]);
        }
    cout<<sum<<endl;
}

     return 0;
}
