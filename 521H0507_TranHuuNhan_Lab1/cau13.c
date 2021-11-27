#include <stdio.h>

int main()
{
            float s1,s2,s3,s4,s5,ave;
            printf("enter marks of Physics, Chemistry, Biology, \nMathematics and Computer ");
            scanf("%f%f%f%f%f", &s1, &s2, &s3, &s4, &s5);  
            ave=(s1 + s2 + s3 + s4 + s5) / 5;
            printf("%.2f Percentage\n", ave);

            if (ave > 9)
            {
                        printf("Grade A");
            }          
            else if (ave > 8)
            {
                        printf("Grade B");
            }                  
            else if (ave > 7)
            {
                        printf("Grade C");
            }                                     
            else if (ave > 6)
            {
                        printf("Grade D");
            }                                    
            else if (ave >4)
            {
                        printf("Grade E");
            }                                                                
            else
            {
                        printf("Grade F");
            }    
            return 0; 
}