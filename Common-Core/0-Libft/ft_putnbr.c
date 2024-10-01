#include "libft.h"

void ft_putnbr(int nb)
{
    char c;

    if(nb == -2147483648)
    {
        write(1,"-2147483648",12);
        return ; 
    }
       


       

    if(nb<0)
    {
        nb = -nb;
        write(1,"-",1);
    }



    
    
    if(nb > 9 )
    {
        ft_putnbr(nb/10);
    }
  





  
    c = (nb%10) + '0';
    write(1,&c,1);

}
