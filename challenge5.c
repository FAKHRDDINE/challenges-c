#include <stdio.h>

int main()
{
    
    
char C ;

printf("enter character : ");
scanf("%c",& C);


switch(C){
    case 'a' :
    printf("Le caractère est une voyelle");
    break;
  case 'e' :
    printf("Le caractère est une voyelle");
    break;
      case 'o' :
    printf("Le caractère est une voyelle");
    break;
      case 'i' :
    printf("Le caractère est une voyelle");
    break;
      case 'u' :
    printf("Le caractère est une voyelle");
    break;
    default:
    printf("Le caractère n'est pas une voyelle.");
    break;
}



    return 0;
}