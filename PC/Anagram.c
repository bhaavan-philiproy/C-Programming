#include<stdio.h>
int main()
    {
        char s1[20],s2[20];
        printf("Input 1:");
        gets(s1);
        printf("Input 2:");
        gets(s2);
        int n=strlen(s1),m=strlen(s2);
        if(n!=m)
        {
            printf("Not Anagram");
        }
        else
        {
            int arr[26]={0};
            for(int i=0;i<n;i++)
            {
                arr[s1[i]-97]++;
                arr[s2[i]-97]--;
            }
            for(int i=0;i<26;i++)
                if(arr[i]!=0)
                {
                    printf("Not Anagram");
                    return 0;
                }
            printf("Anagram");
        }
        return 0;
    }
