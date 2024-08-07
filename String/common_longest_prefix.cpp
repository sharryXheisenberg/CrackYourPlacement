
#include<bits/stdc++.h>
using namespace std;


string commonPrefixUtil(string& str1, string& str2)
{
	string result = "";
	int len = min(str1.length(), str2.length());

	
	for (int i = 0; i < len; i++)
	{
		if (str1[i] != str2[i])
			break;
		result += str1[i];
	}

	return (result);
}


string commonPrefix (string arr[], int n)
{
	string prefix = arr[0];

	for (int i=1; i < n; i++)
		prefix = commonPrefixUtil(prefix, arr[i]);

	return (prefix);
}


int main()
{
	string arr[] = {"geeksforgeeks", "geeks",
					"geek", "geezer"};
	int n = sizeof(arr) / sizeof(arr[0]);

	string ans = commonPrefix(arr, n);

	if (ans.length())
		printf ("The longest common prefix is - %s",
				ans.c_str());
	else
		printf("There is no common prefix");

	return (0);
}
