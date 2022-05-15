#include <stdio.h>
#include <stdbool.h>

/*
Time Spent: ~2 hours
Future Implementation: I want to be able to convert from a metric unit to an imperial unit as well as
simplify the menus into one large menu to make it easier to convert. I may add structs, if necessary and 
for simplicity, for the large amount of variables.
*/

int main(void) {

    double fahrenheitVal;
    double celciusVal;
    double kelvinVal;
    double milligramVal;
    double gramVal;
    double kilogramVal;
    double tonneVal;
    double ouncesVal;
    double poundVal;
    double tonVal;
    double inchesVal;
    double feetVal;
    double yardVal;
    double milesVal;
    double millimeterVal;
    double centimeterVal;
    double meterVal;
    double kilometerVal;
    char menuChoice = ' ';
    char tempMenuChoice = ' ';
    char massMenuChoice = ' ';
    char distMenuChoice = ' '; 
    char metricDistMenuChoice = ' ';
    char impDistMenuChoice = ' ';
    char kelvMenuChoice = ' ';
    char metricMassMenuChoice = ' ';
    char impMassMenuChoice = ' ';
    bool exit = false;
    

    while (exit != true) {

        printf("Choose one of the following categories: \n");
        printf("t - Temperature\n");
        printf("m - Mass\n");
        printf("d - Distance\n");
        printf("q - Quit\n");

        scanf(" %c", &menuChoice);

        switch(menuChoice) {

            case 't': //Temperature Case
                printf("Choose one of the following options: \n");
                printf("f - Convert Fahrenheit to Celcius\n");
                printf("c - Convert Celcius to Fahrenheit\n");
                printf("k - Convert F or C to Kelvin\n");
                printf("r - Return To Menu\n");

                scanf(" %c", &tempMenuChoice);

                switch(tempMenuChoice) {
                    case 'f': //F -> C
                        printf("Input Fahrenheit value...\n");
                        scanf("%lf", &fahrenheitVal);
                        celciusVal = (fahrenheitVal - 32) * (0.5556);
                        printf("In Celcius: %0.1lf\n", celciusVal);
                    break;
                    case 'c': //C -> F
                        printf("Input Celcius value...\n");
                        scanf("%lf", &celciusVal);
                        fahrenheitVal = (celciusVal * 1.8) + 32;
                        printf("In Fahrenheit: %0.1lf\n", fahrenheitVal);
                    break;
                    case 'k': //C or F -> K
                        printf("Choose one of the following optoins: \n");
                        printf("f - Convert Fahrenheit to Kelvin\n");
                        printf("c - Convert Celcius to Kelvin\n");
                        printf("r - Return to Menu\n");

                        scanf(" %c", &kelvMenuChoice);

                        switch(kelvMenuChoice) {
                            case 'f': //F -> K
                                printf("Input Fahrenheit value...\n");
                                scanf("%lf", &fahrenheitVal);
                                kelvinVal = ((fahrenheitVal - 32) * (0.5556)) + 273.15;
                                printf("In Kelvin: %0.2lf\n", kelvinVal);
                            break;
                            case 'c': //C -> K
                                printf("Input Celcius value...\n");
                                scanf("%lf", &celciusVal);
                                kelvinVal = celciusVal + 273.15;
                                printf("In Kelvin: %0.2lf\n", kelvinVal);
                            break;
                            case 'r': //Return Case
                            //return to menu - not sure what to add
                            break;
                        }

                    break;
                    case 'r': //Return Case
                    //return to menu - not sure what to add
                    break;
                }
            break;
            case 'm': //Mass Case
                printf("Choose one of the following options: \n");
                printf("m - Metric Unit System\n");
                printf("i - Imperial Unit System\n");
                printf("r - Return to Menu\n");

                scanf(" %c", &massMenuChoice);

                switch(massMenuChoice) {
                    case 'm': //Metric Unit Case
                        printf("Choose one of the following options: \n");
                        printf("m - Milligrams to Grams\n");
                        printf("g - Grams to Kilograms\n");
                        printf("k - Kilogram to Tonnes\n");
                        printf("r - Return to Menu\n");

                        scanf(" %c", &metricMassMenuChoice);

                        switch(metricMassMenuChoice) {
                            case 'm': //milligrams -> grams
                                printf("Input Milligrams value...\n");
                                scanf("%lf", &milligramVal);
                                gramVal = milligramVal / 1000;
                                printf("In Grams: %0.2lf\n", gramVal);
                            break;
                            case 'g': //grams -> kilograms
                                printf("Input Grams value...\n");
                                scanf("%lf", &gramVal);
                                kilogramVal = gramVal / 1000;
                                printf("In Kilograms: %0.2lf\n", kilogramVal);
                            break;
                            case 'k': //kilograms -> tonnes
                                printf("Input Kilograms value...\n");
                                scanf("%lf", &kilogramVal);
                                tonneVal = kilogramVal / 1000;
                                printf("In Tonnes: %0.2lf\n", tonneVal);
                            break;
                            case 'r': //Return Case
                            //return to menu - not sure what to add
                            break;
                        }
                    break;
                    case 'i': //Imperial Unit Case
                        printf("Choose one of the following options: \n");
                        printf("o - Ounces to Pounds\n");
                        printf("p - Pounds to Tons\n");
                        printf("r - Return to Menu\n");

                        scanf(" %c", &impMassMenuChoice);
                        
                        switch(impMassMenuChoice) {
                            case 'o': //Ounces -> Pounds
                                printf("Input Ounces value...\n");
                                scanf("%lf", &ouncesVal);
                                poundVal = ouncesVal / 16;
                                printf("In Pounds: %0.2lf\n", poundVal);
                            break;
                            case 'p': //Pounds -> Tons
                                printf("Input Pounds value...\n");
                                scanf("%lf", &poundVal);
                                tonVal = poundVal / 2000;
                                printf("In Tons: %0.2lf\n", tonVal);
                            break;
                            case 'r': //Return Case
                            //return to menu - not sure what to add
                            break;
                        }
                    break;
                    case 'r': //Return Case
                    //return to menu - not sure what to add
                    break;
                }
            break;
            case 'd': //Distance Case
                printf("Choose one of the following options: \n");
                printf("m - Metric Unit System\n");
                printf("i - Imperial Unit System\n");
                printf("r - Return to Menu\n");

                scanf(" %c", &distMenuChoice);

                switch(distMenuChoice) {
                    case 'm':
                        printf("Choose one of the following options: \n");
                        printf("m - Millimeter to Centimeter\n");
                        printf("c - Centimeter to Meter\n");
                        printf("k - Meter to Kilometer\n");
                        printf("r - Return to Menu\n");

                        scanf(" %c", &metricDistMenuChoice);

                        switch(metricDistMenuChoice) {
                            case 'm': //Millimeter -> Centimeter
                                printf("Input Millimeter value...\n");
                                scanf("%lf", &millimeterVal);
                                centimeterVal = millimeterVal / 10;
                                printf("In Centimeters: %0.2lf\n", centimeterVal);
                            break;
                            case 'c': //Centimeter -> Meter
                                printf("Input Centimeter value...\n");
                                scanf("%lf", &centimeterVal);
                                meterVal = centimeterVal / 100;
                                printf("In Meters: %0.2lf\n", meterVal);
                            break;
                            case 'k': //Meter -> Kilometer
                                printf("Input Meter value...\n");
                                scanf("%lf", &meterVal);
                                kilometerVal = meterVal / 1000;
                                printf("In Kilometers: %0.2lf\n", kilometerVal);
                            break;
                            case 'r': //Return Case
                            //return to menu - not sure what to add
                            break;
                        }
                    break;
                    case 'i':
                        printf("Choose one of the following options: \n");
                        printf("i - Inches to Feet\n");
                        printf("f - Feet to Yards\n");
                        printf("y - Yards to Miles\n");
                        printf("r - Return to Menu\n");

                        scanf(" %c", &impDistMenuChoice);

                        switch(impDistMenuChoice) {
                            case 'i': //Inches -> Feet
                                printf("Input Inches value...\n");
                                scanf("%lf", &inchesVal);
                                feetVal = inchesVal / 12;
                                printf("In Feet: %0.2lf\n", feetVal);
                            break;
                            case 'f': //Feet -> Yards
                                printf("Input Feet value...\n");
                                scanf("%lf", &feetVal);
                                yardVal = feetVal / 3;
                                printf("In Yards: %0.2lf\n", yardVal);
                            break;
                            case 'y': //Yards -> Miles
                                printf("Input Yard value...\n");
                                scanf("%lf", &yardVal);
                                milesVal = yardVal / 1760;
                                printf("In Miles: %0.2lf\n", milesVal);
                            break;
                            case 'r': //Return Case
                            //return to menu - not sure what to add
                            break;
                        }
                    break;
                    case 'r': //Return Case
                    //return to menu - not sure what to add
                    break;
                }
            break;
            case 'q': //Quit Case
                printf("Quitting...\n");
                exit = true;
            break;
        }
    }
    return 0;
}