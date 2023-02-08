#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_NAMES 77
#define GROUP_SIZE 3

int main()
{
	srand(time(NULL));
	int i, j, index;
	char *names[NUM_NAMES]={"Dukeson Ehigboria", "Bayere Samuel Tosin", "Francis Morkeh Mensah",
	    "MICHAEL OMOTOSHO", "Justice Chigbo Obasi", "GABRIEL Rufai", "Oisereme Abulu",
	    "Brigid Wambua", "Olajide Safiyyah Mojirayo", "OMIDIJI Oluwaseyi",
	    "Nwoko Onyinye Favour", "Philip Nyelwa Kweba", "Victor Adeyemo", "Paschal Chinonso",
	    "Fapetu Ayodele Abayomi", "HIRWA Jr", "Abdulhamid Sanusi", "Olayiwola Solomon",
	    "Eberechi", "Joseph Akpan Nathaniel", "Malumbe Musowe", "Jamiu Musa", "Chinaza Ukwe",
	    "Didier Shema Gatete", "Taiwo Ogunga", "Blessed", "Amarachi Anaesiuba", "Hanna Menetie Ojole",
	    "Egbuta Godslove Ugochukwu", "Joshua Monday", "Blessing Eugene Chukwunwike",
	    "DR_Mkelvo (Mwiyeria Kelvin)", "JOSHUA MBISE", "Sanni Oshioke Omoba", "Sunday Udhawuve",
	    "Thomas Oselu", "Thomas Bulus", "Stacy Gakiria", "Christie Dike", "Owolabi Pius",
	    "Mary Nzembi Mutuku", "Aghara Christiana", "Adam Abah", "Folakemi Oderanti",
	    "Grace Titilayo David", "Eric Ogedegbe", "Ramla Mahad Diriye", "Igwegbe George Ifesinachi",
	    "Chinemerem Chukwukere", "Abdulazeez Ibrahim", "Bright Okon", "OLUWAFEMI BUSARI",
	    "Titilayo Oluwakemi Olojede", "Oluwadamilola Ogunbayo", "Michael Okpako", "Functional Ogunbode",
	    "Tochi Onwukwe", "Nkanga Edo Monday", "Agunloye Olaniyi Nicolas", "Fasil Seifu Besir",
	    "Mary-Queen Uchechukwu", "Uwemedimo Ekpewoh", "Joy Kuapa", "Ogunleye Sanmi", "Didier Shema Gatete",
	    "Adedamola Coal", "OLOLADE Olakunle Olalekan", "Wisdom Osatemple", "Adekilekun Abdullahi",
	    "Faith Obi", "Ibrahim Bolajoko Ibrahim", "Lawal Muhammadbashir", "Malumbe Musowe",
	    "Aina Adewale Ibukunoluwa", "Fadilat Abubakar", "Olayinka Jumai Kolupo"};
	
	for (i = 0; i < NUM_NAMES / GROUP_SIZE; i++)
	{
		printf("Group: %d\n", i + 1);
	 	for(j = 0; j < GROUP_SIZE; j++)
		{
			index = rand() % NUM_NAMES;
			printf("%s", names[index]);
			names[index] = names[--NUM_NAMES];
			printf("\n");
		}
	}
	return 0;
}
