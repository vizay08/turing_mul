///////////////////////////////////////////////////////////////////////////////////////////////
//     turing machine   ------addition                                /////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////
///////           ////////                        ///////////////////////                      
  ///////      ///////                                      ///////                            
     //////   //////                                        //////       
        //////////                              ///         //////
          //////                                 ///        ////
            ///                                    ////////////
        
        
#include<stdlib.h>
int main()
{
    char tape[]="B00000000000000001000000B";
    int q=0;// state
    int i=0;// pointer
    int t=0;
    int count=0;
    while(1)
    {
            if(q==0&&tape[i]=='B')
            {
                                  i=i+1;
                                  
            }
            if(q==0&&tape[i]=='0')
            {
                                  tape[i]='B';
                                  i=i+1;
                                  q=1;
            }
            if(q==1&&tape[i]=='0')
            {
                                  i=i+1;                            
            }
            if(q==1&&tape[i]=='1')
            {
                                  tape[i]='0';
                                  i=i+1;
            }
            if(q==1&&tape[i]=='B')
            break;            
                                 
    }
    printf("%s\n",tape);
    for(t=0;tape[t]!='\0';t++)
    {
         if(tape[t]=='0')
         count++;
    }
    printf("%d",count);
    getch();
    return 0;
}
