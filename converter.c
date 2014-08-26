#include <stdio.h>
int main(void){

  char input_main;
  do {
    printf("\n\n1 for conversion between Kilogram and Pound ");
    printf("\n2 for conversion between Litre and Ounce (liquid ounce or US ounce)");
    printf("\n3 for conversion between Hectare and Acre ");
    printf("\n4 for conversion between Celsius and Fahrenheit ");
    printf("\n5 for quit ");
    printf("\n\nEnter a selection: ");

    scanf(" %c", &input_main);

    if (input_main=='1'){
      char first_input;
      float kilogram, pound;
      do {
      printf("\nK for conversion from Kilogram to Pound");
      printf("\nP for conversion from Pound to Kilogram");
      printf("\n\nEnter a selection: ");
      scanf(" %c", &first_input);

      if (first_input=='K'){
	printf("\nEnter Kilogram mass: ");
	scanf("%f", &kilogram);
	pound = kilogram * 2.2046f;
	printf("Pound equivalent: %.1f", pound);
	printf("lb");
	return main();
      }

      else if (first_input=='P'){
	printf("\nEnter Pound mass: ");
	scanf("%f", &pound);
	kilogram = pound / 2.2046f;
	printf("Kilogram equivalent: %.1f", kilogram);
	printf("kg");
	return main();
      }

      } while (first_input!='K' &&  first_input!='P');
      return first_input;
    }

    else if (input_main=='2'){
      char second_input;
      float litre, ounce;
      do {
      printf("\nL for conversion from Litre to Ounce\n");
      printf("O for conversion from Ounce to Litre");
      printf("\n\nEnter a selection: ");
      scanf(" %c", &second_input);

      if (second_input=='L'){
	printf("\nEnter Litre volume: ");
	scanf("%f", &litre);
	ounce = litre * 33.814f;
	printf("Ounce equivalent: %.1f", ounce);
	printf("oz");
	return main();
      }

      else if (second_input=='O'){
	printf("\nEnter Once mass: ");
	scanf("%f", &ounce);
	litre = ounce / 33.814f;
	printf("Litre equivalent: %.1f", litre);
	printf("L");
	return main();
      }

      } while (second_input!='L' && second_input!='O');
      return second_input;
    }

    else if (input_main=='3'){
      char third_input;
      float hectare, acre;
      do {
      printf("\nH for conversion from Hectare to Acre\n");
      printf("A for conversion from Acre to Hectare");
      printf("\n\nEnter a selection: ");
      scanf(" %c", &third_input);

      if (third_input=='H'){
	printf("\nEnter Hectare area: ");
	scanf("%f", &hectare);
	acre = hectare * 2.471f;
	printf("Acre equivalent: %.1f", acre);
	printf("ac");
	return main();
      }

      else if (third_input=='A'){
	printf("\nEnter Acre area: ");
	scanf("%f", &acre);
	hectare = acre / 2.471f;
	printf("Hectare equivalent: %.1f", hectare);
	printf("ha");
	return main();
      }

    } while (third_input!='H' && third_input!='A');
    return third_input;
    }

    else if (input_main=='4'){
      char fourth_input;
      float fahrenheit, celsius;
      do {
      printf("\nC for conversion from Celsius to Fahrenheit\n");
      printf("F for conversion from Fahrenheit to Celsius\n");
      printf("\nEnter a selection: ");
      scanf(" %c", &fourth_input);

      if (fourth_input=='C'){
	printf("\nEnter Celsius temperature: ");
	scanf("%f", &celsius);
	fahrenheit = (celsius * 1.8f) + 32.0f;
	printf("Fahrenheit equivalent: %.1f", fahrenheit);
	printf(" degrees F");
	return main();
      }

      else if (fourth_input=='F'){
	printf("\nEnter Fahrenheit temperature: ");
	scanf("%f", &fahrenheit);
	celsius= (fahrenheit - 32.0f) / (1.8f);
	printf("Celsius equivalent: %.1f", celsius);
	printf(" degrees C");
	return main();
      }

      } while (fourth_input!='C' && fourth_input!='F');
      return fourth_input;
    }

    else if (input_main=='5'){
      printf("\nThe program will now quit. Goodbye.\n\n");
      return 0;
    }

  } while (input_main!='1' && input_main!='2' && input_main!='3' && input_main!='4' && input_main!='5');
  return main();
}
