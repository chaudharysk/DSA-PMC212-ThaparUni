int SEARCH(int *arr,int *n)
{
    cout<<"\n YOU ARE IN SEARCH\n";
    int search;
    cout<<"Enter the element you want to search: ";
    cin>>search;
    for(int i = 0;i< *n; i++ )
    {
        if(search==arr[i])
        {
            cout<<"Least search position of given element is: "<<i<<endl;
            return i;
        }
    }
    cout<<"The element does not exist in the Array"<<endl;
    return -1;
}
void CREATE(int *arr,int *n)
{
    cout<<"\n YOU ARE IN CREATE\n";
    cout<<"\n Enter the Size : ";
    cin>>*n;
    for(int i = 0 ; i<*n;i++)
    {
        cout<<"\n Enter the "<<i<<" value: ";
        cin>>arr[i];
    }
}
void DISPLAY(int *arr,int *n)
{
    cout<<"\n YOU ARE IN DISPLAY\n";
    for(int i = 0 ; i<*n;i++)
    {
        cout<<"\n Value at index <" << i <<"> is :"<<arr[i];
    }
    cout<<endl;
}
void INSERT(int *arr,int *n) 
{
    cout<<"\n YOU ARE IN INSERT\n";
    int x, ind;
    cout<<"\n Enter the value to be inserted : ";
    cin >> x;
    cout<<"\n Enter the <index> where you want to insert: ";
    cin >> ind;
    for(int i =*n; i>=ind ;i--)
    {
        cout<<"\n IN LOOP OF INSERT\n";
        arr[i+1]=arr[i];
    }
    arr[ind]=x;
    // Incrementing array size because it is Insert operation.
    ++*n;
    cout<<"\n INSERT END\n";

}
void DELETE(int *arr,int *n)
{

    cout<<"\n YOU ARE IN DELETE\n";
    int delIndex=SEARCH(arr, n);
    if(delIndex==-1)
    {
        return;
    }
    for(int i=delIndex+1;i<*n;i++)
    {
        arr[i-1]=arr[i];
    }
    --*n;

    
}
