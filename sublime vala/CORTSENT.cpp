#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cout << endl;
    while (t--)
    {
        int x;
        // vector<string> v;
        cin >> x;
        cin.ignore();
        char str[x][100];
        for (int i = 0; i < x; i++)
        {
            scanf("%s", str[i]);
        }
        int ans = 0;
        cout<<endl;
        for (int i = 0; i < x; i++)
        {
            if (str[i][0] >= 'a' && str[i][0] <= 'z')
            {
                if (str[i][0] >= 'a' && str[i][0] <= 'm')
                {
                    for (int j = 0; str[i][j] != '\0'; j++)
                    {
                        if (!(str[i][j] >= 'a' && str[i][j] <= 'm'))
                        {
                            ans = 1;
                            break;
                        }
                    }
                }
                else
                {
                    ans = 1;
                }
            }
            else
            {
                if (str[i][0] >= 'N' && str[i][0] <= 'Z')
                {
                    for (int j = 0; str[i][j] != '\0'; j++)
                    {
                        if (!(str[i][j] >= 'N' && str[i][j] <= 'Z'))
                        {
                            ans = 1;
                            break;
                        }
                    }
                }
                else
                    ans = 1;
            }
            if (ans == 1)
                break;
        }
        if (ans == 1)
            cout << "no"<<endl;
        else
            cout << "yes"<<endl;
    }

    return 0;
}