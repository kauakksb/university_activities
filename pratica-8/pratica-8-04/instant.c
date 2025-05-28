#include <stdio.h>

struct instant {
  int hour;
  int minute;
  int second;
};

int instant_check(struct instant i)
{
    if(i.hour < 0 || i.hour > 23)return 0;

    if(i.minute < 0 || i.minute > 59)return 0;

    if(i.second < 0 || i.second > 59)return 0;

    return 1;
}

int instant_parse(const char* str, struct instant *init)
{
    sscanf(str,"%d:%d:%d", &init->hour, &init->minute, &init->second);
    printf("%d:%d:%d\n\n", init->hour, init->minute, init->second);
    if(instant_check(*init))
    {
        printf("check deu certo\n");
        return 0;
    }
    printf("check deu errado\n");
    return 1;
}

int instant_compare(struct instant i1, struct instant i2)
{   

    printf("i1: %d:%d:%d\n", i1.hour, i1.minute, i1.second);
    printf("i2: %d:%d:%d\n", i2.hour, i2.minute, i2.second);

    if(i1.hour == i2.hour)
    {
        if(i1.minute == i2.minute)
        {
            if(i1.second == i2.second)
            {
                return 0;
            }else if (i1.second > i2.second)
            {
                return 1;

            }else{return -1;}
            
        }else if (i1.minute > i2.minute)
        {
            return 1;

        }else if(i1.minute < i2.minute){return -1;}
        
    }else if (i1.hour > i2.hour)
    {
        return 1;

    }else if(i1.hour < i2.hour){return -1;}
    
    return 0;
}

void instant_read_vector(struct instant *v, int n)
{
    int i = 0;
    int resultado;
    while (i < n)
    {
        char hora[12];
        fgets(hora, 13, stdin);
        hora[12] = '\0';
        
        printf("leitura: %s\n", hora);
        resultado = instant_parse(hora, &v[i]);
        printf("resultado: %d", resultado);
        if(resultado == 0)i++;

        printf("i:%d\n", i);
    }
}

struct instant instant_largest(const struct instant *v, int n)
{
    struct instant largest;
    largest.hour = 0;
    largest.minute = 0;
    largest.second = 0;
    
    for(int i = 0; i < n; i++)
    {
        if(instant_compare(v[i], largest) == 0)
        {
            printf("0: vi: %d:%d:%d; \nlargest: %d:%d:%d;", 
               v[i].hour, v[i].minute, v[i].second, largest.hour, largest.minute, largest.second);
            largest.hour = v[i].hour;
            largest.minute = v[i].minute;
            largest.second = v[i].second;

        }else if (instant_compare(v[i], largest) == 1)
        {
            printf("1: vi: %d:%d:%d; \nlargest: %d:%d:%d;", 
               v[i].hour, v[i].minute, v[i].second, largest.hour, largest.minute, largest.second);
            largest.hour = v[i].hour;
            largest.minute = v[i].minute;
            largest.second = v[i].second;
        }
    }
    return largest;
}
