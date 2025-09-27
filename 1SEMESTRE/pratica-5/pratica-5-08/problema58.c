
int mdc(int num1,int num2)
{
    int i = 0, menor, mdc;

    if (num1 > num2)
    {
        menor = num2;
    }else
    {
        menor = num1;
    }

    while(i <= menor)
    {
        if((num1 % i) == 0 && (num2 % i) == 0)
        {
            mdc = i;
        }
        i++;
    }

    return mdc;
}
