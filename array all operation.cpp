#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	//system("Color 0A");
	int size,opt;
	cout<<"enter the size of array ";
	cin>>size;
	int arr[size];
	int i,aux,flag=0;
	char ans;
	
	while(1)
	{
		cout<<"want to enter data: y/ n"<<endl;
		cin>>ans;
		if(ans == 'y')
		{
			cout<<"enter data in array: "<<endl;
			for(i=0;i<size;i++)
			{
				cout<<"data at "<<i<<"\t" ;
				cin>>arr[i];
				flag=flag+1;
			}
	    }
	    else if(ans =='n')
	    {
	    	cout<<"what do u want to do ?"<<endl;
	    	cout<<"1->sort the array\t\t2-> larger and smaller in array\n3->search no. in array\t\t";
	    	cout<<"4->sum of array\n5->insert value in array\t6->detele value from array"<<endl;
	    	cout<<"\t\t\a enter the option number"<<endl;
			cin>> opt;
	    	   switch (opt)
	    	   {
			  	 case 1:
	    	      L1:for(int j=0;j<size-1;j++)
	    			{
	    				if (arr[j]>arr[j+1])
	    				{
	    					aux=arr[j];
	    					arr[j]=arr[j+1];
	    					arr[j+1]=aux;
	    					goto L1;
	    			    }    
	    				else;
	    				continue;
	    			}
	    				cout<<"sorted array"<<endl;
	    				for(int j=0;j<size;j++)
	    				{
	    					cout<<arr[j]<<endl;
						}
			        break;
				 	
				case 2:
					{
					int max,m;
					int min=arr[0]; 
					for(int j=0;j<size;j++)
					{
							aux=arr[j];
							m=arr[j];
							if(aux>max)
							{
								max=aux;
							}
							if(m<min)
							{
								min=m;
							}
					}
					cout<<"max value in array : "<<max<<endl;
					cout<<"min value in array : "<<min<<endl;
				    
					break;
				}
				 case 3:
				{
					int srh,star=0;
					cout<<"enter digit want to search:- ";
					cin>>srh;
					for(int j=0;j<size;j++)
					{
						if(srh==arr[j])
						{
							star=star+1;
						}
						else;
						continue;
					}
					if(star!=0)
					{
						cout<<"value matched found!"<<endl;
					}
					else
					cout<<"value not present!"<<endl;
				  break;
					}
				  case 4:
				  	{
				  		int sum=0;
				  		for(int j=0;j<size;j++)
				  		{
				  			sum=sum+arr[j];
						}
						cout<<" sum of entered array is: "<<sum<<endl;
						break;
					}
					case 5:
						{
							cout<<"enter number of terms to enter: ";
							int no,e;
							cin>>no;
							e=size+no;
							int narr[size+no];
							for(int i=0;i<size;i++)
							{
								narr[i]=arr[i];
							}
							
							for(int j=(size);j<(size+no);j++)
							{
								cout<<"enter the number: ";
								cin>>narr[j];
							}
							cout<<" new list "<<endl;
							for(int j=0;j<(size+no);j++)
							{
								cout<<narr[j]<<" ";
							}
							
							cout<<" \n please note you can not do above function with this "<<endl;
							break;
						}
						case 6:
							{
								int pos,tmp;
							rpt:	cout<<"enter the position no to delete value: ";
							
								cin>>pos;
								if (pos<=size)
								{
									for(int i=pos;i<(size-1);i++)
									arr[i]=arr[i+1];
								}
								else
								{
									cout<<"position beyond size enter again!"<<endl;
									goto rpt;
								}
								cout<<"new list after deletion: ";
								for(int i =0;i<(size-1);i++)
								{
									cout<<arr[i]<<" ";
								}
								cout<<endl;
								break;
							}
				}
			}
		else
		continue;
	}
return 0;    
}  
