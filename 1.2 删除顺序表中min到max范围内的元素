List Delete(List L,int min,int max)
{
    int k=0;//记录删除元素个数
    for(int i=0;i<L->Last;i++)
    {
        if(((L->Data[i])>min)&&(L->Data[i])<max)
        {
            k++;
        }
        else L->Data[i-k]=L->Data[i];
    }
    L->Last-=k;
    return L;
}
