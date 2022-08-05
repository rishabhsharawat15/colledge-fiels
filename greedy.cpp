#include<iostream>
using namespace std;
int main()
{
    int *a,*n,p_min;
    int *p,mp,np;
    int result =1;
    int Size,neg=0,pos=0;
    cin>>Size;
            p_min=99;
    a = new int (Size);
     for(int i=0;i<Size;i++)
     {
         cin>>a[i];
     }
    for(int i=0,j=0,k=0;i<Size;i++)
    {
        if(a[i]<0)
        {
            n=new int (Size);
            n[j]=a[i];
            neg++;
            j++;
        }
        else if(a[i]>0)
        {
              if(p_min>a[i])
            {
                p_min=a[i];
            }
             p= new int(Size);
                p[k]=a[i];
                k++;
           pos++;
        }
        else
        {

         result=0;
        }
    }
   /*if(neg%2==0 && pos!=0)
    {
        for(int i=0,j=0;i<neg || j<pos;i++,j++)
            {
       np*=n[i];
       mp*=p[j];
    }
    result=np*mp;
    }*/
   if(neg%2!=0)
    {
        for(int i=0;i<neg;i++)
        {
            result*=n[i];
        }
        cout<<result;
    }
    else if(pos!=0 && neg==0)
    {
      result=p_min;
    }
    else
    {
        cout<<result;
    }

}
