#include<stdlib.h>
#include<stdio.h>
#include<windows.h>
int main(int argc,char *argv)
{
                       HANDLE ldll,ldll2,ldll3,ldll4;
                        void(*insert)(void);
                        void(*report)(void);
                        void(*search)(void);
                        void(*ssort)(void);
                        ldll=LoadLibrary("insertdll.dll");
                        ldll2=LoadLibrary("searchdll.dll");
                        ldll3=LoadLibrary("sortdll.dll");
                        ldll4=LoadLibrary("reportdll.dll");
                        if(ldll>(void*)HINSTANCE_ERROR)
                        {

                            insert=GetProcAddress(ldll,"insert");
                        }
                            else
                        {
                            printf("ERROR\n");
                        }
                        if(ldll2>(void*)HINSTANCE_ERROR)
                        {
                            search=GetProcAddress(ldll2,"search");
                        }
                            else
                        {
                            printf("ERROR\n");
                        }
                        if(ldll3>(void*)HINSTANCE_ERROR)
                        {
                            ssort=GetProcAddress(ldll3,"ssort");
                        }
                            else
                        {
                            printf("ERROR\n");
                        }
                        if(ldll4>(void*)HINSTANCE_ERROR)
                        {
                            report=GetProcAddress(ldll4,"report");
                        }
                            else
                        {
                            printf("ERROR\n");
                        }
    int choice;

    do{
            printf("--------------------------------------------------------\n");
            printf("1-input entries\n2-search the name\n3-sort\n4-report\n5-exit\n");
            printf("enter your choice\n");
            printf("--------------------------------------------------------\n");
            scanf("%d",&choice);
            switch(choice)
            {
                case 1:
                        insert();
                        break;
                case 2:
                        search();
                        break;
                case 3:
                        ssort();
                        break;
                case 4:
                        report();
                        break;
                case 5:
                        exit(0);
                default:
                        printf("wrong choice\n");
            }
      }
      while(choice!=5);
      return 0;
}
