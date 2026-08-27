// #include <iostream>
// using namespace std;
// char lowerCase(char ch)
// {
//     if(ch>='a' && ch<='z')
//     {
//         return ch;
//     }
//     else
//     {
//         char temp=ch-'A'+'a';   //works by ASCII
//         return temp;
//     }
// }

// bool pallindrome(char name[], int n)
// {
//     int s = 0;
//     int e = n - 1;
//     while(s <= e)
// {
//     if(isalnum(name[s]) == 0)
//     {
//         s++;
//     }
//     else if(isalnum(name[e]) == 0)
//     {
//         e--;
//     }
//     else if(lowerCase(name[s]) != lowerCase(name[e]))
//     {
//         return false;
//     }
//     else
//     {
//         s++;
//         e--;
//     }
// }

// return true;
// }

// int getLength(char name[])
// {
//     int count = 0;
//     for (int i = 0; name[i] != '\0'; i++)
//     {
//         count++;
//     }
//     return count;
// }

// int main()
// {
//     char name[20];
//     cout << "enter your name " << endl;
//     cin >> name;

//     int n = getLength(name);

//     cout << "your name is" << endl;
//     cout << name << endl;

//     cout<<"pallindrome or not "<<pallindrome(name,n)<<endl;

//     return 0;
// }

