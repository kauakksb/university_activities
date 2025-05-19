
float raiz(float num)
{
    float raiz, estimativa = 10;

    while (1)
    {
        if ((estimativa * estimativa) == (num + 0.01) 
        || (estimativa * estimativa) == (num - 0.01)
        || (estimativa * estimativa) == num
        )
        {
            raiz = estimativa;
            break;
        }else {
            if ((estimativa * estimativa) < num){
                estimativa *= 0.8; 
            }else if ((estimativa * estimativa) > num){
                estimativa *= 1.3;
            }
        }
        
    }
    return raiz;
}