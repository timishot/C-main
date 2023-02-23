#include <stdio.h>
#include <string.h>

/* defining the templateof address struct */
struct address {
	char firstName[20];
	char streetName[];
	float longitude;
	float latitude;
};

int main(void)
{
	/*declaring a stuct*/
	struct address giftAddress;
	struct address timiAddress;


	/*assigning values to a struct */
	strcpy(giftAddress.firstName, "Gift");
	strcpy(giftAddress.streetName, "mayo street");
	giftAddress.longitude = 2.76;
	giftAddress.latitude = 1.54;

	/*assigning values to a struct*/
       	strcpy(timiAddress.firstName, "Timi");
        strcpy(timiAddress.streetName, "nina street");
        timiAddress.longitude = 5.76;
        timi Address.latitude = 2.24;

}
