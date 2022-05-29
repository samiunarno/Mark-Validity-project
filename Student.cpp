#include<iostream>
using namespace std;


void comment(float final_score)
{

    if(final_score>4)
    cout<<"Good Work\n";
    else
    cout<<"Not Good\n";
}


int main()
{
	int i, j, n, m;
	float num_students[10][10], num_assignment[10][10];
	float final_score[n+1];
	cout << "Insert the number of students: ";
	cin >> n;
	cout << "Insert the number of assignment: ";
	cin >> m;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= m; j++)
		{
			cout << "The marks of the assignment " << j << " of the student " << i << ": ";
			cin >> num_students[i][j];
		}

    cout << endl;
	}
	cout<< "student";
	for(int j=1;j<=m;j++)
	{
	    cout<<"  | A"<<j<<"   ";
	}

	cout << "  | final score";
	cout << " | comment    \n";

	for (int i=1;i<=n;i++)
    {
        cout<<i<<"        |  ";
        for (int j=1;j<=m;j++)
        {
            cout<<num_students[i][j]<<"     |  ";
        }
            cout<<final_score[i]<<"          | ";
            comment(final_score[i]);

    }
    cout<<"\n";
    for(int j=1;j<=m;j++)
    {
        float sum=0;
        for(int i=1;i<=n;i++)
        sum=sum+num_students[i][j];

        cout<< "average of assignment"<<j<< " : "<<(sum)/n;
        cout<<"\n";

    }

}