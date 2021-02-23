//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    printf("Hello world!\n");
//    return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    int n,i,sum=0,maxy=0,miny=4000,minm=13,mind=32,maxm=0,maxd=0,tmpy,tmpm,tmpd,flag;
//    char minname[6],maxname[6],tmpname[6];
//    scanf("%d",&n);
//    for(i=0;i<n;i++)
//    {
//        flag=0;
//        scanf("%s %d/%d/%d",tmpname,&tmpy,&tmpm,&tmpd);
//        if(tmpy>1814&&tmpy<2014)
//            flag=1;
//        else if(tmpy==1814)
//            if(tmpm>9)
//                flag=1;
//            else if(tmpm==9)
//                if(tmpd>=6)
//                    flag=1;
//        else if(tmpy==2014)
//            if(tmpm<9)
//                flag=1;
//            else if(tmpm==9)
//                if(tmpd<=6)
//                    flag=1;
//        if(flag==1)
//        {
//            sum++;
//            if(tmpy<miny)
//            {
//                miny=tmpy;
//                minm=tmpm;
//                mind=tmpd;
//                strcpy(minname,tmpname);
//            }
//            else if(tmpy==miny)
//            {
//                if(tmpm<minm)
//                {
//                    miny=tmpy;
//                    minm=tmpm;
//                    mind=tmpd;
//                    strcpy(minname,tmpname);
//                }
//                else if(minm==tmpm)
//                {
//                    if(tmpd<mind)
//                    {
//                        miny=tmpy;
//                        minm=tmpm;
//                        mind=tmpd;
//                        strcpy(minname,tmpname);
//                    }
//                }
//            }
//            if(tmpy>maxy)
//            {
//                maxy=tmpy;
//                maxm=tmpm;
//                maxd=tmpd;
//                strcpy(maxname,tmpname);
//            }
//            else if(tmpy==maxy)
//            {
//                if(tmpm>maxm)
//                {
//                    maxy=tmpy;
//                    maxm=tmpm;
//                    maxd=tmpd;
//                    strcpy(maxname,tmpname);
//                }
//                else if(tmpm==maxm)
//                {
//                    if(tmpd>maxd)
//                    {
//                        maxy=tmpy;
//                        maxm=tmpm;
//                        maxd=tmpd;
//                        strcpy(maxname,tmpname);
//                    }
//                }
//            }
//        }
//    }
//    if(sum)
//        printf("%d %s %s",sum,minname,maxname);
//    else
//        printf("0");
//    return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    int n,i,sum=0,maxy=0,miny=4000,minm=13,mind=32,maxm=0,maxd=0,tmpy,tmpm,tmpd,flag;
//    char minname[6],maxname[6],tmpname[6];
//    scanf("%d",&n);
//    for(i=0;i<n;i++)
//    {
//        flag=0;
//        scanf("%s %d/%d/%d",tmpname,&tmpy,&tmpm,&tmpd);
//        if(tmpy>1814&&tmpy<2014)
//            flag=1;
//        else if(tmpy==1814)
//        {
//            if(tmpm>9)
//                flag=1;
//            else if(tmpm==9)
//                if(tmpd>=6)
//                    flag=1;
//        }
//        else if(tmpy==2014)
//        {
//            if(tmpm<9)
//                flag=1;
//            else if(tmpm==9)
//                if(tmpd<=6)
//                    flag=1;
//        }
//        if(flag==1)
//        {
//            sum++;
//            if(tmpy<miny)
//            {
//                miny=tmpy;
//                minm=tmpm;
//                mind=tmpd;
//                strcpy(minname,tmpname);
//            }
//            else if(tmpy==miny)
//            {
//                if(tmpm<minm)
//                {
//                    miny=tmpy;
//                    minm=tmpm;
//                    mind=tmpd;
//                    strcpy(minname,tmpname);
//                }
//                else if(minm==tmpm)
//                {
//                    if(tmpd<mind)
//                    {
//                        miny=tmpy;
//                        minm=tmpm;
//                        mind=tmpd;
//                        strcpy(minname,tmpname);
//                    }
//                }
//            }
//            if(tmpy>maxy)
//            {
//                maxy=tmpy;
//                maxm=tmpm;
//                maxd=tmpd;
//                strcpy(maxname,tmpname);
//            }
//            else if(tmpy==maxy)
//            {
//                if(tmpm>maxm)
//                {
//                    maxy=tmpy;
//                    maxm=tmpm;
//                    maxd=tmpd;
//                    strcpy(maxname,tmpname);
//                }
//                else if(tmpm==maxm)
//                {
//                    if(tmpd>maxd)
//                    {
//                        maxy=tmpy;
//                        maxm=tmpm;
//                        maxd=tmpd;
//                        strcpy(maxname,tmpname);
//                    }
//                }
//            }
//        }
//    }
//    if(sum)
//        printf("%d %s %s",sum,minname,maxname);
//    else
//        printf("0");
//    return 0;
//}
