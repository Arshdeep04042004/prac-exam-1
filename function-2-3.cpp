//function 2-3 Palindrome Array 
int integers[6] = {1,2,1,1,2,1};
cout << "Sum of elements: " << sum_elements(integers, 6);
cout << endl << endl;
if( sum_if_a_palindrome(integers, 6) == -2)
{
cout << "not palindrome " << endl;
}
else
{
cout << "sum of palindrome: " << sum_if_a_palindrome(integers, 6);
cout << endl << endl;
}