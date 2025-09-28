#include<unistd.h>

int main(int argc, char **argv)
{
    if(argc == 4)
    {
        int i = 0;
        char *str = argv[1];
        char *c = argv[2];
        char *s = argv[3];
        while(str[i] != '\0')
        {
            if(str[i] == c[0])
            {
                str[i] = s[0];
            }
            write(1,&str[i],1);
            i++;
        }
    }

    write(1,"\n",1);
    return 0;
}